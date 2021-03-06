#include <linux/delay.h>
#include <linux/mmc/mmc.h>
#include <linux/mmc/host.h>
#include <linux/mmc/card.h>
#include "sdhci.h"


extern int sdhci_card_busy_data0(struct mmc_host *mmc);
extern void sdhci_dumpregs(struct sdhci_host *host);
/**
 * sdhci_trylock_hostlock - try to claim the sdhci host lock;
 * @host:	sdhci host;
 * @flags:  store the flags for restore;
 * try to claim the sdhci host lock;
 */
static int sdhci_trylock_hostlock(struct sdhci_host *host,unsigned long *flags)
{
	int locked = 0;
	unsigned int trycount = 100000;
	do{
		locked = spin_trylock_irqsave(&host->lock, *flags);/*lint !e730 !e550 !e1072 !e666*/
		if(locked)
			break;
		udelay(10);/*lint !e778 !e774 !e747*/
	}while(--trycount>0);
	return locked;
}


/**
 * sdhci_send_command_direct - send cmd diretly without irq system;
 * @mmc:	mmc host;
 * @mrq:    mmc request;
 * sometimes the irq system cannot work.so we send cmd and polling the
 * int status register instead of waiting for the response interrupt;
 */
int sdhci_send_command_direct(struct mmc_host *mmc, struct mmc_request *mrq)
{
	u32 val, val1, val2, timeout, mask, opcode;
	int ret = 0;
	struct sdhci_host *host;
	unsigned long flags;

	host = mmc_priv(mmc);
	WARN_ON(host->mrq != NULL);/*lint !e730*/
	host->mrq = mrq;
	opcode = mrq->cmd->opcode;

	/*Get hostlock timeout, the abnormal context may have the locker*/
	if(!sdhci_trylock_hostlock(host, &flags)) {
		pr_err("%s, can't get the hostlock!\n", __func__);
		ret = -EIO;
		goto out;
	}

	mask = SDHCI_INT_ERROR_MASK;
	val = sdhci_readl(host, SDHCI_INT_STATUS);
	if (mask & val) {
		pr_err("%s host is in err or busy status 0x%x\n", __func__, val);
		ret = -EIO;
		goto unlock;
	}

	/* enable interupt status, */
	/* but not let the interupt be indicated to system */
	val1 = sdhci_readl(host, SDHCI_INT_ENABLE);
	val = val1 | SDHCI_INT_RESPONSE | SDHCI_INT_ERROR_MASK;
	sdhci_writel(host, val, SDHCI_INT_ENABLE);
	val2 = sdhci_readl(host, SDHCI_SIGNAL_ENABLE);
	//val = val2 & ~(SDHCI_INT_RESPONSE | SDHCI_INT_ERROR_MASK);
	sdhci_writel(host, 0x0, SDHCI_SIGNAL_ENABLE);

	sdhci_send_command(host, mrq->cmd);

	timeout = 10;
	mask = SDHCI_INT_RESPONSE | SDHCI_INT_ERROR_MASK;
	while (0 == (mask & (val = sdhci_readl(host, SDHCI_INT_STATUS)))) {
		if (timeout == 0) {
			pr_err("%s: send cmd%d timeout\n", __func__, opcode);
			sdhci_dumpregs(host);
			ret = -ETIMEDOUT;
			goto reg_recovery;
		}
		timeout--;
		mdelay(1);/*lint !e730 !e778 !e774 !e747*/
	}

	if (val & SDHCI_INT_ERROR_MASK) {
		pr_err("%s: send cmd%d err val = 0x%x\n", __func__, opcode, val);
		sdhci_dumpregs(host);
		ret =  -EIO;
		goto reg_recovery;
	}

	/* wait busy;*/
	timeout = 1000;
	while (sdhci_card_busy_data0(mmc)) {
		if (timeout == 0) {
			pr_err("%s: wait busy timeout after stop\n", __func__);
			sdhci_dumpregs(host);
			ret = -ETIMEDOUT;
			goto reg_recovery;
		}
		timeout--;
		mdelay(1);/*lint !e730 !e778 !e774 !e747*/
	}

	if (!ret)
		host->cmd->resp[0] = sdhci_readl(host, SDHCI_RESPONSE);
reg_recovery:
	/* clean interupt, cmdq int cannot be cleaned*/
	val &= (~SDHCI_INT_CMDQ);
	sdhci_writel(host, val, SDHCI_INT_STATUS);
	/* recovery interupt enable & mask */
	sdhci_writel(host, val1, SDHCI_INT_ENABLE);
	sdhci_writel(host, val2, SDHCI_SIGNAL_ENABLE);
unlock:
	spin_unlock_irqrestore(&host->lock, flags);
out:
	host->mrq = NULL;
	host->cmd = NULL;

	return ret;
}


