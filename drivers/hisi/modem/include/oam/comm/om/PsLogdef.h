/*
 * Copyright (C) Huawei Technologies Co., Ltd. 2012-2015. All rights reserved.
 * foss@huawei.com
 *
 * If distributed as part of the Linux kernel, the following license terms
 * apply:
 *
 * * This program is free software; you can redistribute it and/or modify
 * * it under the terms of the GNU General Public License version 2 and
 * * only version 2 as published by the Free Software Foundation.
 * *
 * * This program is distributed in the hope that it will be useful,
 * * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * * GNU General Public License for more details.
 * *
 * * You should have received a copy of the GNU General Public License
 * * along with this program; if not, write to the Free Software
 * * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA
 *
 * Otherwise, the following license terms apply:
 *
 * * Redistribution and use in source and binary forms, with or without
 * * modification, are permitted provided that the following conditions
 * * are met:
 * * 1) Redistributions of source code must retain the above copyright
 * *    notice, this list of conditions and the following disclaimer.
 * * 2) Redistributions in binary form must reproduce the above copyright
 * *    notice, this list of conditions and the following disclaimer in the
 * *    documentation and/or other materials provided with the distribution.
 * * 3) Neither the name of Huawei nor the names of its contributors may
 * *    be used to endorse or promote products derived from this software
 * *    without specific prior written permission.
 *
 * * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */



#ifndef __PSLOGDEF_H__
#define __PSLOGDEF_H__

#include "dopra_def.h"

#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */

/****************************************************************************
  1 其他头文件包含
*****************************************************************************/

/*****************************************************************************
  #pragma pack(*)    设置字节对齐方式
*****************************************************************************/
#if (VOS_OS_VER != VOS_WIN32)
#pragma pack(4)
#else
#pragma pack(push, 4)
#endif


/*****************************************************************************
  2 枚举定义
******************************************************************************/
/*RPTIN2LAYER l00285345 PRINT_SWITCH 原原打印开关 PRINT2LAYER_SWITCH层间打印开关 */
#define PRINT_OFF             (0)
#define PRINT_ON              (1)
#define PRINT_SWITCH          (PRINT_OFF)

#define PRINT2LAYER_SWITCH    (PRINT_ON)

/* 模块ID的范围定义*/
#define     LOG_ERRLOG_ID                   0x63

#define     LOG_MIN_MODULE_ID_PS            0x64
#define     LOG_MAX_MODULE_ID_PS            0xff

#define     LOG_MIN_MODULE_ID_ACPU_PS       0x100
#define     LOG_MAX_MODULE_ID_ACPU_PS       0x1ff

#define     LOG_MIN_MODULE_ID_DSP           0x200
#define     LOG_MAX_MODULE_ID_DSP           0x2ff

#define     LOG_MIN_MODULE_ID_HIFI          0x300
#define     LOG_MAX_MODULE_ID_HIFI          0x3ff

#define     LOG_MIN_MODULE_ID_DRV           0x8000
#define     LOG_MAX_MODULE_ID_DRV           0x80ff

#define     LOG_MIN_MODULE_ID_ACPU_DRV      0x8100
#define     LOG_MAX_MODULE_ID_ACPU_DRV      0x81ff

#define     LOG_MIN_MODULE_ID_APP           0x8200
#define     LOG_MAX_MODULE_ID_APP           0x82ff


/* File Id范围定义 */
#define     LOG_MIN_FILE_ID_PS          0x0000
#define     LOG_MAX_FILE_ID_PS          0x07FF

#define     LOG_MIN_FILE_ID_DRV         0x0800
#define     LOG_MAX_FILE_ID_DRV         0x0FFF

#define     LOG_MIN_FILE_ID_MEDIA       0x1000
#define     LOG_MAX_FILE_ID_MEDIA       0x17FF

#define     LOG_MIN_FILE_ID_APP         0x1800
#define     LOG_MAX_FILE_ID_APP         0x1FFF

#define     LOG_MIN_FILE_ID_DSP         0x2000
#define     LOG_MAX_FILE_ID_DSP         0x27FF

#define     LOG_MIN_FILE_ID_MSP         0x2200
#define     LOG_MAX_FILE_ID_MSP         0x29FF

/* 为了降低debug信息，采用新的file id 方案,旧的方案后续需要删除 */
/* 新的组件定义 */
/* 0到9bit file id, 10到15 bit 组件， 高16位保留 */
typedef enum
{
    DRV_TEAM_FILE_ID          = 0x0,
    WAS_TEAM_FILE_ID          = 0x400,
    GAS_TEAM_FILE_ID          = 0x800,
    CAS_TEAM_FILE_ID          = 0xc00,
    CPROC_TEAM_FILE_ID        = 0x1000,
    WTTF_TEAM_FILE_ID         = 0x1400,
    GTTF_TEAM_FILE_ID         = 0x1800,
    CTTF_TEAM_FILE_ID         = 0x1c00,
    TTFCOMM_TEAM_FILE_ID      = 0x2000,
    TRRC_TEAM_FILE_ID         = 0x2400,
    LRRC_TEAM_FILE_ID         = 0x2800,
    TL2_TEAM_FILE_ID          = 0x2c00,
    LL2_TEAM_FILE_ID          = 0x3000,
    TLPSCOMM_TEAM_FILE_ID     = 0x3400,
    LNAS_TEAM_FILE_ID         = 0x3800,
    NAS_TEAM_FILE_ID          = 0x3c00,
    TAF_TEAM_FILE_ID          = 0x4000,
    CNAS_TEAM_FILE_ID         = 0x4400,
    PAM_TEAM_FILE_ID          = 0x4800,
    MSP_TEAM_FILE_ID          = 0x4c00,
    HIFI_TEAM_FILE_ID         = 0x5000,
    GUDSP_TEAM_FILE_ID        = 0x5400,
    TLDSP_TEAM_FILE_ID        = 0x5800,
    CDSP_TEAM_FILE_ID         = 0x5c00,
    APP_TEAM_FILE_ID          = 0x6000,
    ENCODIX_TEAM_FILE_ID      = 0x6400,

    /* 后续组件继续添加 */
    TEAM_FILE_ID_BUTT         = 0xfc00
}FILE_ID_TEAM_ENUM;


#if (VOS_OS_VER == VOS_WIN32)
#define LPS_LOG(ModulePID, SubMod, Level, pcString) \
            vos_printf(" %s, %d, %s\r\n ", __FILE__, __LINE__,pcString)

#define LPS_LOG1(ModulePID, SubMod, Level, pcString, lPara1) \
            vos_printf (" %s, %d, %s, %d, \r\n ",  __FILE__, __LINE__, pcString, lPara1)

#define LPS_LOG2(ModulePID, SubMod, Level, pcString, lPara1, lPara2) \
            vos_printf (" %s, %d, %s, %d, %d \r\n ",  __FILE__, __LINE__, pcString, lPara1, lPara2)

#define LPS_LOG3(ModulePID, SubMod, Level, pcString, lPara1, lPara2, lPara3) \
            vos_printf (" %s, %d, %s, %d, %d, %d\r\n ",  __FILE__, __LINE__, pcString, lPara1, lPara2, lPara3)

#define LPS_LOG4(ModulePID, SubMod, Level, pcString, lPara1, lPara2, lPara3, lPara4) \
            vos_printf (" %s, %d, %s, %d, %d, %d, %d\r\n ",  __FILE__, __LINE__,pcString, lPara1, lPara2, lPara3, lPara4)

#else
#if (!defined(_lint) && (PRINT_SWITCH == PRINT_OFF))
#define LPS_LOG(ModulePID, SubMod, Level, pcString)

#define LPS_LOG1(ModulePID, SubMod, Level, pcString, lPara1)

#define LPS_LOG2(ModulePID, SubMod, Level, pcString, lPara1, lPara2)

#define LPS_LOG3(ModulePID, SubMod, Level, pcString, lPara1, lPara2, lPara3 )

#define LPS_LOG4(ModulePID, SubMod, Level, pcString, lPara1, lPara2, lPara3, lPara4)

#else
#ifdef LOG_SWITCH_OM_FLG
#define LPS_LOG(ModulePID, SubMod, Level, pcString) \
            {/*lint -e778*/OM_Log( __FILE__, __LINE__,(VOS_UINT8)((0x00ff&(ModulePID))), SubMod, LogLevelMap(Level), pcString ); /*lint +e778*/}

#define LPS_LOG1(ModulePID, SubMod, Level, pcString, lPara1) \
            {/*lint -e778*/OM_Log1( __FILE__, __LINE__, (VOS_UINT8)((0x00ff&(ModulePID))), SubMod, LogLevelMap(Level), pcString, (VOS_INT32)(lPara1)); /*lint +e778*/}

#define LPS_LOG2(ModulePID, SubMod, Level, pcString, lPara1, lPara2) \
            {/*lint -e778*/OM_Log2( __FILE__, __LINE__, (VOS_UINT8)((0x00ff&(ModulePID))), SubMod, LogLevelMap(Level), pcString, (VOS_INT32)(lPara1), (VOS_INT32)(lPara2)); /*lint +e778*/}

#define LPS_LOG3(ModulePID, SubMod, Level, pcString, lPara1, lPara2, lPara3 ) \
            {/*lint -e778*/OM_Log3( __FILE__, __LINE__, (VOS_UINT8)((0x00ff&(ModulePID))), SubMod, LogLevelMap(Level), pcString, (VOS_INT32)(lPara1), (VOS_INT32)(lPara2), (VOS_INT32)(lPara3)); /*lint +e778*/}

#define LPS_LOG4(ModulePID, SubMod, Level, pcString, lPara1, lPara2, lPara3, lPara4) \
            {/*lint -e778*/OM_Log4( __FILE__, __LINE__, (VOS_UINT8)((0x00ff&(ModulePID))), SubMod, LogLevelMap(Level), pcString, (VOS_INT32)(lPara1),((VOS_INT32)lPara2), (VOS_INT32)(lPara3), (VOS_INT32)(lPara4)); /*lint +e778*/}
#else
#define LPS_LOG(ModulePID, SubMod, Level, pcString) \
            LPS_OM_LOG( __FILE__, __LINE__, ModulePID, Level, pcString )

#define LPS_LOG1(ModulePID, SubMod, Level, pcString, lPara1) \
            LPS_OM_LOG1( __FILE__, __LINE__, ModulePID, Level, pcString, (VOS_INT32)(lPara1))

#define LPS_LOG2(ModulePID, SubMod, Level, pcString, lPara1, lPara2) \
            LPS_OM_LOG2( __FILE__, __LINE__, ModulePID, Level, pcString, (VOS_INT32)(lPara1), (VOS_INT32)(lPara2))

#define LPS_LOG3(ModulePID, SubMod, Level, pcString, lPara1, lPara2, lPara3 ) \
            LPS_OM_LOG3( __FILE__, __LINE__, ModulePID, Level, pcString, (VOS_INT32)(lPara1), (VOS_INT32)(lPara2), (VOS_INT32)(lPara3))

#define LPS_LOG4(ModulePID, SubMod, Level, pcString, lPara1, lPara2, lPara3, lPara4) \
            LPS_OM_LOG4( __FILE__, __LINE__, ModulePID, Level, pcString, (VOS_INT32)(lPara1),((VOS_INT32)lPara2), (VOS_INT32)(lPara3), (VOS_INT32)(lPara4))
#endif
#endif
#endif

/*新打印接口 l00285345 20150808*/
#if (VOS_OS_VER == VOS_WIN32)
#define LPS_PRINT_LOG(ModulePID, pcString) \
            vos_printf(" %s, %d, %s\r\n ", __FILE__, __LINE__,pcString)

#define LPS_PRINT_LOG1(ModulePID, pcString, lPara1) \
            vos_printf (" %s, %d, %s, %d, \r\n ",  __FILE__, __LINE__, pcString, lPara1)

#define LPS_PRINT_LOG2(ModulePID, pcString, lPara1, lPara2) \
            vos_printf (" %s, %d, %s, %d, %d \r\n ",  __FILE__, __LINE__, pcString, lPara1, lPara2)

#define LPS_PRINT_LOG3(ModulePID, pcString, lPara1, lPara2, lPara3 ) \
            vos_printf (" %s, %d, %s, %d, %d, %d\r\n ",  __FILE__, __LINE__, pcString, lPara1, lPara2, lPara3)

#define LPS_PRINT_LOG4(ModulePID, pcString, lPara1, lPara2, lPara3, lPara4) \
            vos_printf (" %s, %d, %s, %d, %d, %d, %d\r\n ",  __FILE__, __LINE__,pcString, lPara1, lPara2, lPara3, lPara4)

#else

#define LPS_PRINT_LOG(ModulePID, pcString) \
            LPS_OM_LOG( __FILE__, __LINE__, ModulePID, PS_PRINT_INFO, pcString )

#define LPS_PRINT_LOG1(ModulePID, pcString, lPara1) \
            LPS_OM_LOG1( __FILE__, __LINE__, ModulePID, PS_PRINT_INFO, pcString, (VOS_INT32)(lPara1))

#define LPS_PRINT_LOG2(ModulePID, pcString, lPara1, lPara2) \
            LPS_OM_LOG2( __FILE__, __LINE__, ModulePID, PS_PRINT_INFO, pcString, (VOS_INT32)(lPara1), (VOS_INT32)(lPara2))

#define LPS_PRINT_LOG3(ModulePID, pcString, lPara1, lPara2, lPara3 ) \
            LPS_OM_LOG3( __FILE__, __LINE__, ModulePID, PS_PRINT_INFO, pcString, (VOS_INT32)(lPara1), (VOS_INT32)(lPara2), (VOS_INT32)(lPara3))

#define LPS_PRINT_LOG4(ModulePID, pcString, lPara1, lPara2, lPara3, lPara4) \
            LPS_OM_LOG4( __FILE__, __LINE__, ModulePID, PS_PRINT_INFO, pcString, (VOS_INT32)(lPara1),((VOS_INT32)lPara2), (VOS_INT32)(lPara3), (VOS_INT32)(lPara4))

#endif

/* 打印级别定义 */
typedef enum
{
    LOG_LEVEL_OFF = 0,   /* 关闭打印     */
    LOG_LEVEL_ERROR,     /* Error级别    */
    LOG_LEVEL_WARNING,   /* Warning级别  */
    LOG_LEVEL_NORMAL,    /* Normal级别   */
    LOG_LEVEL_INFO,      /* Info级别     */
    LOG_LEVEL_BUTT
}LOG_LEVEL_EN;

/*L2添加，与之前版本日志级别兼容*/
#define PS_PRINT_OFF        LOG_LEVEL_OFF
#define PS_PRINT_ERROR      LOG_LEVEL_ERROR
#define PS_PRINT_WARNING    LOG_LEVEL_WARNING
#define PS_PRINT_NORMAL     LOG_LEVEL_NORMAL
#define PS_PRINT_INFO       LOG_LEVEL_INFO

/* 部件定义 */
typedef enum
{
    LOG_PARTS_PS = 0,   /* 协议栈       */
    LOG_PARTS_DRV,      /* 底软         */
    LOG_PARTS_MEDIA,    /* 媒体         */
    LOG_PARTS_APP,      /* 应用         */
    LOG_PARTS_DSP,      /* 物理层       */
    LOG_PARTS_BUTT
} LOG_PARTS_EN;

/* PAM 文件ID号 */
typedef enum
{
/* 18432  */      PS_FILE_ID_HPA_ENTITY_C = PAM_TEAM_FILE_ID,
/* 18433  */      PS_FILE_ID_HPA_GLOBAL_VAR_C,
/* 18434  */      PS_FILE_ID_HPA_ISR_C,
/* 244  */      PS_FILE_ID_HPA_INIT_C,
/* 245  */      PS_FILE_ID_HPA_RINGBUFFER_C,
/* 246  */      PS_FILE_ID_HPA_OPERATE_RTT_C,
/* 247  */      PS_FILE_ID_APM_PROCESS_C,
/* 294  */      PS_FILE_ID_NVIM_FILEOPERATEINTERFACE_C,
/* 295  */      PS_FILE_ID_NVIM_FUNCTION_C,
/* 296  */      PS_FILE_ID_NVIM_GCFFUNCTION_C,
/* 297  */      PS_FILE_ID_OMRL_C,
/* 298  */      PS_FILE_ID_DIAG_C,
/* 299  */      PS_FILE_ID_OM_OUTSIDE_C,
/* 300  */      PS_FILE_ID_OMFS_C,
/* 301  */      PS_FILE_ID_OM_C,
/* 302  */      PS_FILE_ID_OM_SOCK_C,
/* 448  */      PS_FILE_ID_USIMM_APDUMODULE_C,
/* 449  */      PS_FILE_ID_USIMM_API_C,
/* 450  */      PS_FILE_ID_USIMM_APICNF_C,
/* 451  */      PS_FILE_ID_USIMM_BASE_C,
/* 452  */      PS_FILE_ID_USIMM_COMMON_C,
/* 453  */      PS_FILE_ID_USIMM_DLMODULE_C,
/* 454  */      PS_FILE_ID_USIMM_POOL_C,
/* 455  */      PS_FILE_ID_PIH_PROC_C,
/* 456  */      PS_FILE_ID_PBAPI_C,
/* 457  */      PS_FILE_ID_PB_DATA_C,
/* 458  */      PS_FILE_ID_PB_BASE_C,
/* 459  */      PS_FILE_ID_PB_MSG_C,
/* 460  */      PS_FILE_ID_PIH_API_C,
/* 461  */      PS_FILE_ID_USIMM_USAT_GTK_C,
/* 462  */      PS_FILE_ID_USIMM_USAT_GTK_API_C,
/* 463  */      PS_FILE_ID_USIMSTUB_C,
/* 464  */      PS_FILE_ID_USIMSTUBINIT_C,
/* 465  */      PS_FILE_ID_V_BLKMEM_C,
/* 466  */      PS_FILE_ID_V_LIB_C,
/* 467  */      PS_FILE_ID_V_MONITOR_DSP_C,
/* 468  */      PS_FILE_ID_V_MSG_C,
/* 469  */      PS_FILE_ID_V_NSPRINTF_C,
/* 470  */      PS_FILE_ID_V_QUEUE_C,
/* 471  */      PS_FILE_ID_V_RTC_TIMER_C,
/* 472  */      PS_FILE_ID_V_SEM_C,
/* 473  */      PS_FILE_ID_V_SOCK_C,
/* 474  */      PS_FILE_ID_V_SPRINTF_C,
/* 475  */      PS_FILE_ID_V_SSCANF_C,
/* 476  */      PS_FILE_ID_V_TASK_C,
/* 477  */      PS_FILE_ID_V_TIMER_C,
/* 478  */      PS_FILE_ID_V_WATCH_DOG_C,
/* 479  */      PS_FILE_ID_V_WIN32_SEM_C,
/* 480  */      PS_FILE_ID_V_WIN32_SOCK_C,
/* 481  */      PS_FILE_ID_V_WIN32_TASK_C,
/* 482  */      PS_FILE_ID_V_NUCLEUS_SEM_C,
/* 483  */      PS_FILE_ID_V_NUCLEUS_SOCK_C,
/* 484  */      PS_FILE_ID_V_NUCLEUS_TASK_C,
/* 485  */      PS_FILE_ID_VOS_ID_C,
/* 486  */      PS_FILE_ID_VOS_MAIN_C,
/* 487  */      PS_FILE_ID_SC_APP_COMM_C,
/* 488  */      PS_FILE_ID_M_LOWPOWER_C,
/* 489  */      PS_FILE_ID_CBT_MAIL_BOX_C,
/* 490  */      PS_FILE_ID_DH_R_DH_C,
/* 491  */      PS_FILE_ID_DH_AES_UTIL_C,

                 PAM_FILE_ID_BUTT
}PAM_FILE_ID_DEFINE_ENUM;

/* LRRC 文件ID号 begin*/
typedef enum
{
/* 10240 */       PS_FILE_ID_L_RRCCMMCOMM_C = LRRC_TEAM_FILE_ID,
                  PS_FILE_ID_L_RRCCMMDEBUG_C,
                  PS_FILE_ID_L_RRCCMMFSM_C,
                  PS_FILE_ID_L_RRCCMMGLOBAL_C,
                  /* V7R2 MDT BEGIN */
                  PS_FILE_ID_L_LRRCMDTPROC_C,
                  /* V7R2 MDT END */

/* 10245 */       PS_FILE_ID_L_RRCCMMHANDOVER_C,
                  PS_FILE_ID_L_RRCCMML3IE_C,
                  PS_FILE_ID_L_RRCCMML3MSG_C,
                  PS_FILE_ID_L_RRCCMMMEASCTRL_C,
                  PS_FILE_ID_L_RRCCMMMEASEVALUATE_C,

/* 10250 */       PS_FILE_ID_L_RRCCMMNCELLMEASCFG_C,
                  PS_FILE_ID_L_RRCCMMPHY_C,
                  PS_FILE_ID_L_RRCCMMSPEEDSTATE_C,
                  PS_FILE_ID_L_RRCCMMSTATE_C,
                  PS_FILE_ID_L_RRCCMMTIMER_C,

/* 10255 */       PS_FILE_ID_L_RRCCSELCELLSELECT_C,
                  PS_FILE_ID_L_RRCCSELCOMM_C,
                  PS_FILE_ID_L_RRCCSELDEBUG_C,
                  PS_FILE_ID_L_RRCCSELEVALUATE_C,
                  PS_FILE_ID_L_RRCCSELFSM_C,

/* 10260 */       PS_FILE_ID_L_RRCCSELGLOBAL_C,
                  PS_FILE_ID_L_RRCCSELINIT_C,
                  PS_FILE_ID_L_RRCCSELLIMITCELL_C,
                  PS_FILE_ID_L_RRCCSELMEASURE_C,
                  PS_FILE_ID_L_RRCCSELMOBILITY_C,

/* 10265 */       PS_FILE_ID_L_RRCCSELMSGSEND_C,
                  PS_FILE_ID_L_RRCCSELPLMNSEARCH_C,
                  PS_FILE_ID_L_RRCCSELRESELECT_C,
                  PS_FILE_ID_L_RRCCSELSYSINFO_C,
                  PS_FILE_ID_L_RRCCSELTIMER_C,

/* 10270 */       PS_FILE_ID_L_RRCCSELPCCELLRESEL_C,
                  PS_FILE_ID_L_RRCCSELPCCELLSEARCH_C,
                  PS_FILE_ID_L_RRCCSELPCCOMM_C,
                  PS_FILE_ID_L_RRCCSELPCENTRY_C,
                  PS_FILE_ID_L_RRCCSELPCFSM_C,

/* 10275 */       PS_FILE_ID_L_RRCCSELPCGLOBAL_C,
                  PS_FILE_ID_L_RRCCSELPCPLMNSEARCH_C,
                  PS_FILE_ID_L_RRCCSELPCSTACHANGE_C,
                  PS_FILE_ID_L_RRCCSELPCSYSINFOUPDATE_C,
                  PS_FILE_ID_L_RRCITF_C,

/* 10280 */       PS_FILE_ID_L_RRCMBMSCOMM_C,
                  PS_FILE_ID_L_RRCMBMSGLOBAL_C,
                  PS_FILE_ID_L_RRCMBMSTPROC_C,
                  PS_FILE_ID_L_RRCMBMSSNDMSG_C,
                  PS_FILE_ID_L_RRCMBMSTIMER_C,

/* 10285 */       PS_FILE_ID_L_RRCITFFSM_C,
                  PS_FILE_ID_L_RRCITFL2FUNC_C,
                  PS_FILE_ID_L_RRCITFNASSNDMSG_C,
                  PS_FILE_ID_L_RRCITFPHYFUNC_C,
                  PS_FILE_ID_L_LRRCCOMMPRINT_C,

/* 10290 */       PS_FILE_ID_L_LRRCMAINASN1_C,
                  PS_FILE_ID_L_LRRCMAINENTRY_C,
                  PS_FILE_ID_L_LRRCMAINERMMFSM_C,
                  PS_FILE_ID_L_LRRCMAINERRCFSM_C,
                  PS_FILE_ID_L_LRRCMAINFSMCOMM_C,

/* 10295 */       PS_FILE_ID_L_LRRCMAINGLOBAL_C,
                  PS_FILE_ID_L_LRRCMAINPRINT_C,
                  PS_FILE_ID_L_LRRCMAINTIMER_C,
                  PS_FILE_ID_L_LRRCOMITF_C,
                  PS_FILE_ID_L_RRCRBCFGRCVCONFIGCNF_C,

/* 10300 */       PS_FILE_ID_L_RRCRBENTRY_C,
                  PS_FILE_ID_L_RRCRBFSM_C,
                  PS_FILE_ID_L_RRCRBGLOBAL_C,
                  PS_FILE_ID_L_RRCRBHORCVCONFIGCNF_C,
                  PS_FILE_ID_L_RRCRBRECFGRCVCONFIGCNF_C,

/* 10305 */       PS_FILE_ID_L_RRCRBRECONFIGMSGPROC_C,
                  PS_FILE_ID_L_RRCRBSNDMSG_C,
                  PS_FILE_ID_L_RRCRBUPDATECTX_C,
                  PS_FILE_ID_L_RRCREESTCONNREEST_C,
                  PS_FILE_ID_L_RRCREESTFSM_C,

/* 10310 */       PS_FILE_ID_L_RRCREESTGLOBAL_C,
                  PS_FILE_ID_L_RRCREESTPROCCONNREESTMSG_C,
                  PS_FILE_ID_L_RRCREESTSNDCONFIGMSG_C,
                  PS_FILE_ID_L_RRCREESTTIMERHANDLE_C,
                  PS_FILE_ID_L_RRCCCB_C,

/* 10315 */       PS_FILE_ID_L_RRCCOMM_C,
                  PS_FILE_ID_L_RRCCOMMSAVEIE_C,
                  PS_FILE_ID_L_RRCCOMMSAVESIBIE_C,
                  PS_FILE_ID_L_RRCNVPROC_C,
                  PS_FILE_ID_L_RRCRRCCONNACCESSCTRL_C,

/* 10320 */       PS_FILE_ID_L_RRCRRCCONNEST_C,
                  PS_FILE_ID_L_RRCRRCCONNREL_C,
                  PS_FILE_ID_L_RRCRRCCONNRELCOMM_C,
                  PS_FILE_ID_L_RRCRRCDEBUG_C,
                  PS_FILE_ID_L_RRCRRCERRORPROC_C,

/* 10325 */       PS_FILE_ID_L_RRCRRCFSM_C,
                  PS_FILE_ID_L_RRCRRCGLOBAL_C,
                  PS_FILE_ID_L_RRCRRCNASCMD_C,
                  PS_FILE_ID_L_RRCRRCPAGING_C,
                  PS_FILE_ID_L_RRCRRCPROCRRCCONNMSG_C,

/* 10330 */       PS_FILE_ID_L_RRCRRCPTLTIMERHANDLE_C,
                  PS_FILE_ID_L_RRCRRCSNDMSG_C,
                  PS_FILE_ID_L_RRCRRCUECAPENQUIRY_C,
                  PS_FILE_ID_L_RRCRRCUEINFOENQUIRY_C,
                  PS_FILE_ID_L_RRCSNDMSGCOMM_C,

/* 10335 */       PS_FILE_ID_L_RRCITFGURRCFUNC_C,
                  PS_FILE_ID_L_RRCRRCIRATCOMMPROC_C,
                  PS_FILE_ID_L_RRCRRCIRATRESELPROC_C,
                  PS_FILE_ID_L_RRCRRCIRATREDIRPROC_C,
                  PS_FILE_ID_L_RRCRRCIRATCCOPROC_C,

/* 10340 */       PS_FILE_ID_L_RRCRRCIRATPLMNSEARCHPROC_C,
                  PS_FILE_ID_L_RRCRRCERRORLOG_C,
                  PS_FILE_ID_L_RRCRRCIRATHOPROC_C,
                  PS_FILE_ID_L_RRCSIBCOMM_C,
                  PS_FILE_ID_L_RRCSIBFSM_C,

/* 10345 */       PS_FILE_ID_L_RRCSIBGLOBAL_C,
                  PS_FILE_ID_L_RRCSIBPROC_C,
                  PS_FILE_ID_L_RRCSMCFSM_C,
                  PS_FILE_ID_L_RRCSMCGLOBAL_C,
                  PS_FILE_ID_L_RRCSMCKEYPROC_C,

/* 10350 */       PS_FILE_ID_L_RRCSMCMSGPROC_C,
                  PS_FILE_ID_L_LRRCLCSELBGFSM_C,
                  PS_FILE_ID_L_LRRCCSELBGGLOBAL_C,
                  PS_FILE_ID_L_LRRCLCSELBGSCAN_C,
                  /* add by zhuochao for ECID begin */
                  PS_FILE_ID_L_LRRCMTAPROC_C,
                  /* add by zhuochao for ECID end */

/* 10355 */       PS_FILE_ID_L_RRCRRCADRX_C,
                  PS_FILE_ID_L_RRCPWRMAIN_C,
                  PS_FILE_ID_L_RRCCSELSSC_C,
                  /* begin; 2014-02-20 CL MULT add */
                  PS_FILE_ID_L_RRCITFCMMCAFUNC_C,
                  /* end; 2014-02-20 CL MULT add */

                  /* begin; 2014-07-20 DSDS add */
/* 10359 */       PS_FILE_ID_L_RRCDSDSCOMM_C,
                  PS_FILE_ID_L_RRCITFDSDSRRMFUNC_C,
                  /* end; 2014-07-20 DSDS add */

                  /* begin; 2014-03-05 CL MULT add */
/* 10361 */       PS_FILE_ID_L_RRCITFCMMCATRANSMSG_C,
                  PS_FILE_ID_L_RRCCDMAMSGPROC_C,
                  /* end; 2014-03-05 CL MULT add */
                  PS_FILE_ID_L_LRRCLRRCLPPCMD_C,
                  /* mod for Malloc Memory Size optimize begin */
                  PS_FILE_ID_L_ASN1UUDECODE_C,
                  PS_FILE_ID_L_ASN1UUENCODE_C,
                  /* mod for Malloc Memory Size optimize begin */
                  PS_FILE_ID_NASLPPUPPUBLIC_C,
                  PS_FILE_ID_NASLPPUPMSGPROC_C,

                  LRRC_FILE_ID_BUTT
}LRRC_FILE_ID_DEFINE_ENUM;
/* LRRC 文件ID号 end*/

/* TRRC 文件ID号 begin*/
typedef enum
{
/* 9216 */        PS_FILE_ID_T_TRRCCCB_C = TRRC_TEAM_FILE_ID,
                  PS_FILE_ID_T_TRRCCOMM_C,
                  PS_FILE_ID_T_TRRCNASITF_C,
                  PS_FILE_ID_T_TRRCOM_C,
/* 9220 */        PS_FILE_ID_T_TRRCMEAS_C,
                  PS_FILE_ID_T_TRRCIRATCOMM_C,
                  PS_FILE_ID_T_RRCCMMDCHBSICMEAS_C,
                  PS_FILE_ID_T_RRCCMMDCHEUTRAMEAS_C,
                  PS_FILE_ID_T_ASN01_C,
/* 9225 */        PS_FILE_ID_T_ASN02_C,
                  PS_FILE_ID_T_ASN03_C,
                  PS_FILE_ID_T_ASN04_C,
                  PS_FILE_ID_T_ASN05_C,
                  PS_FILE_ID_T_ASN06_C,
/* 9230 */        PS_FILE_ID_T_ASN07_C,
                  PS_FILE_ID_T_ASN08_C,
                  PS_FILE_ID_T_ASN10_C,
                  PS_FILE_ID_T_ASN11_C,
                  PS_FILE_ID_T_ASN12_C,
/* 9235 */        PS_FILE_ID_T_ASN13_C,
                  PS_FILE_ID_T_ASN14_C,
                  PS_FILE_ID_T_ASN15_C,
                  PS_FILE_ID_T_ASN16_C,
                  PS_FILE_ID_T_ASN17_C,
/* 9240 */        PS_FILE_ID_T_ASN20MEM_C,
                  PS_FILE_ID_T_ASN21TRA_C,
                  PS_FILE_ID_T_ASN30_C,
                  PS_FILE_ID_T_ASN31_C,
                  PS_FILE_ID_T_ASN32_C,
/* 9245 */        PS_FILE_ID_T_ASN33_C,
                  PS_FILE_ID_T_ASN34_C,
                  PS_FILE_ID_T_ASN35_C,
                  PS_FILE_ID_T_ASN36_C,
                  PS_FILE_ID_T_ASN37_C,
/* 9250 */        PS_FILE_ID_T_RRC00COM_C,
                  PS_FILE_ID_T_RRC01NUL_C,
                  PS_FILE_ID_T_RRC02SEL_C,
                  PS_FILE_ID_T_RRC03IDL_C,
                  PS_FILE_ID_T_RRC04ACC_C,
/* 9255 */        PS_FILE_ID_T_RRC05WCA_C,
                  PS_FILE_ID_T_RRC06DCH_C,
                  PS_FILE_ID_T_RRC07REL_C,
                  PS_FILE_ID_T_RRC08RES_C,
                  PS_FILE_ID_T_RRC09FCH_C,
/* 9260 */        PS_FILE_ID_T_RRC10PCH_C,
                  PS_FILE_ID_T_RRC11CNF_C,
                  PS_FILE_ID_T_RRC12LIM_C,
                  PS_FILE_ID_T_RRC13SNW_C,
                  PS_FILE_ID_T_RRC14INACTIVE_C,
/* 9265 */        PS_FILE_ID_T_RRC15PREDEF_C,
                  PS_FILE_ID_T_RRC16WAIT_C,
                  PS_FILE_ID_T_RRC20PEND_C,
                  PS_FILE_ID_T_RRC21RATHO_C,
                  PS_FILE_ID_T_RRC30PUB_C,
/* 9270 */        PS_FILE_ID_T_RRC31PUB_C,
                  PS_FILE_ID_T_RRC32PUB_C,
                  PS_FILE_ID_T_RRC33PUB_C,
                  PS_FILE_ID_T_RRC34PUB_C,
                  PS_FILE_ID_T_RRC35PUB_C,
/* 9275 */        PS_FILE_ID_T_RRC36PUB_C,
                  PS_FILE_ID_T_RRC37PUB_C,
                  PS_FILE_ID_T_RRC40ASN_C,
                  PS_FILE_ID_T_RRC41PUB_C,
                  PS_FILE_ID_T_RRC42PUB_C,
/* 9280 */        PS_FILE_ID_T_RRC51PUB_C,
                  PS_FILE_ID_T_RRC61MAC_C,
                  PS_FILE_ID_T_RRC62RLC_C,
                  PS_FILE_ID_T_RRC63MM_C,
                  PS_FILE_ID_T_RRC64GMM_C,
/* 9285 */        PS_FILE_ID_T_RRC65RAB_C,
                  PS_FILE_ID_T_RRC66PDC_C,
                  PS_FILE_ID_T_RRC67SPP_C,
                  PS_FILE_ID_T_RRC68SMB_C,
                  PS_FILE_ID_T_RRC69RLP_C,
/* 9290 */        PS_FILE_ID_T_RRC70GRR_C,
                  PS_FILE_ID_T_RRC71RRC_C,
                  PS_FILE_ID_T_TRRCSIBIRATSYSINFOPROCESS_C,
                  PS_FILE_ID_T_TRRCCSELR9GLOBAL_C,
                  PS_FILE_ID_T_TRRCR9IEPROCESS_C,
/* 9295 */        PS_FILE_ID_T_TRRCEVALUATE_C,
                  PS_FILE_ID_T_TRRCLIMIT_C,
                  PS_FILE_ID_T_TRRCERRLOG_C,
                  PS_FILE_ID_T_TRRCDEBUG_C,
                  PS_FILE_ID_T_TESTACC_C,
/* 9300 */        PS_FILE_ID_T_TESTDM_C,
                  PS_FILE_ID_T_TESTIDL_C,
                  PS_FILE_ID_T_TESTRRC_C,
                  PS_FILE_ID_T_TRRCCOMMPRIVATE_C,
                  PS_FILE_ID_T_TRRCNASITFPRIVATE_C,
                  PS_FILE_ID_T_TRRCDEBUGCOMM_C,
                  PS_FILE_ID_T_TRRCDIRECTERRLOGCONVERT_C,
                 TRRC_FILE_ID_BUTT
 }TRRC_FILE_ID_DEFINE_ENUM;
 /* TRRC 文件ID号 end*/

typedef enum
{

    PS_FILE_ID_NASCOMMBUFFER_C = LNAS_TEAM_FILE_ID,

    PS_FILE_ID_NASCOMMDEBUG_C,
    PS_FILE_ID_NASCOMMPRINT_C,
    PS_FILE_ID_NASEMMATTACH_C,
    PS_FILE_ID_NASEMMATTACHAPPMSGPROC_C,
    PS_FILE_ID_NASEMMATTACHCNMSGPROC_C,

    PS_FILE_ID_NASEMMATTACHESMMSGPROC_C,
    PS_FILE_ID_NASEMMATTDETMRRCMSGPROC_C,
    PS_FILE_ID_NASEMMDETACH_C,
    PS_FILE_ID_NASEMMDETACHAPPMSGPROC_C,
    PS_FILE_ID_NASEMMDETACHCNMSGPROC_C,

    PS_FILE_ID_NASEMMGUTI_C,
    PS_FILE_ID_NASEMMIDEN_C,
    PS_FILE_ID_NASEMMMRRCCONNEST_C,
    PS_FILE_ID_NASEMMMRRCREL_C,
    PS_FILE_ID_NASEMMPLMN_C,

    PS_FILE_ID_NASEMMPLMNPUBLIC_C,
    PS_FILE_ID_NASEMMPUBUCNMSGDECODE_C,
    PS_FILE_ID_NASEMMPUBUMAIN_C,
    PS_FILE_ID_NASEMMPUBUENTRY_C,
    PS_FILE_ID_NASEMMPUBUGLOBAL_C,
    PS_FILE_ID_NASEMMPUBSUSPEND_C,
    PS_FILE_ID_NASEMMPUBURESUME_C,

    PS_FILE_ID_NASEMMSECUAUTH_C,
    PS_FILE_ID_NASEMMSECUPROTECT_C,
    PS_FILE_ID_NASEMMSECUOM_C,
    PS_FILE_ID_NASEMMSECUSMC_C,
    PS_FILE_ID_NASEMMSECUSOFTUSIM_C,

    PS_FILE_ID_NASEMMSERVICEPROC_C,
    PS_FILE_ID_NASEMMSERVICEABNORMAL_C,
    PS_FILE_ID_NASEMMSERVICESERREQ_C,
    PS_FILE_ID_NASEMMSERVICESERSTOP_C,
    PS_FILE_ID_NASEMMTAUABNORMAL_C,

    PS_FILE_ID_NASEMMTAUACP_C,
    PS_FILE_ID_NASEMMTAUPROC_C,
    PS_FILE_ID_NASEMMTAUREJ_C,
    PS_FILE_ID_NASEMMTAUREQ_C,
    PS_FILE_ID_NASEMMCMAIN_C,

    PS_FILE_ID_NASEMMCPUBLIC_C,
    PS_FILE_ID_NASEMMCRCVMSG_C,
    PS_FILE_ID_NASEMMCSENDMSG_C,
    PS_FILE_ID_NASMMPUBLIC_C,
    PS_FILE_ID_NASMMPUBMENTRY_C,

    PS_FILE_ID_NASMMPUBMFSM_C,
    PS_FILE_ID_NASMMPUBMNVIM_C,
    PS_FILE_ID_NASMMPUBMNVIMOSA_C,
    PS_FILE_ID_NASMMPUBMOM_C,
    PS_FILE_ID_NASMMPUBMPRINT_C,

    PS_FILE_ID_NASMMPUBMSTACK_C,
    PS_FILE_ID_NASMMPUBMTMER_C,
    PS_FILE_ID_NASMMPUBMINTRAMSG_C,
    PS_FILE_ID_NASMMPUBMMSGBUF_C,
    PS_FILE_ID_NASMMTEST_C,
    PS_FILE_ID_NASESMAPPMSGPARAPROC_C,
    PS_FILE_ID_NASESMAPPMSGPROC_C,

    PS_FILE_ID_NASESMMAIN_C,
    PS_FILE_ID_NASESMEMMMSGPROC_C,
    PS_FILE_ID_NASESMIPMSGPROC_C,
    PS_FILE_ID_NASESMNWMSGDECODE_C,
    PS_FILE_ID_NASESMNWMSGENCODE_C,

    PS_FILE_ID_NASESMNWMSGPROC_C,
    PS_FILE_ID_NASESMOMMSGPROC_C,
    PS_FILE_ID_NASESMRABMMSGPROC_C,
    PS_FILE_ID_NASESMPUBULIC_C,
    PS_FILE_ID_NASESMTEST_C,

    PS_FILE_ID_NASESMNWMSGBEARERRESALLOCPROC_C,
    PS_FILE_ID_NASESMNWMSGBEARERRESMODPROC_C,
    PS_FILE_ID_NASESMNWMSGPDNCONPROC_C,
    PS_FILE_ID_NASESMNWMSGPDNDISCOCPROC_C,
    PS_FILE_ID_NASESMTIMERMSGPROC_C,

    PS_FILE_ID_NASRABMAPPMSGPROC_C,
    PS_FILE_ID_NASRABMEMMMSGPROC_C,
    PS_FILE_ID_NASRABMESMMSGPROC_C,
    PS_FILE_ID_NASRABMIPFILTER_C,
    PS_FILE_ID_NASRABMIPFOM_C,

    PS_FILE_ID_NASRABMIPMSGPROC_C,
    PS_FILE_ID_NASRABMMAIN_C,
    PS_FILE_ID_NASRABMPDCPMSGPROC_C,
    PS_FILE_ID_NASRABMRRCMSGPROC_C,
    PS_FILE_ID_NASRABMTCMSGPROC_C,

    PS_FILE_ID_NASRABMTEST_C,
    PS_FILE_ID_NASRABMTIMERMSGPROC_C,
    PS_FILE_ID_IPIPMGLOBAL_C,
    PS_FILE_ID_IPIPMIFACE_C,

    PS_FILE_ID_IPIPMMSGPROC_C,
    PS_FILE_ID_IPIPMOM_C,
    PS_FILE_ID_NASTCEMMMSGPROC_C,
    PS_FILE_ID_NASTCMAIN_C,

    PS_FILE_ID_NASTCNWMSGDECODE_C,
    PS_FILE_ID_NASTCNWMSGENCODE_C,
    PS_FILE_ID_NASTCOMMSGPROC_C,
    PS_FILE_ID_NASTCPDCPMSGPROC_C,
    PS_FILE_ID_NASTCRABMMSGPROC_C,

    PS_FILE_ID_NASTCMTCMSGPROC_C,
    /* Added by s49683 for VoLTE, 2013-07-19, Begin */
    PS_FILE_ID_IMSAMAIN_C,
    PS_FILE_ID_IMSACALLMANAGEMENT_C,
    PS_FILE_ID_IMSACONNMANAGEMENT_C,
    PS_FILE_ID_IMSAIMSADAPTION_C,
    PS_FILE_ID_IMSAPROCAPSMSG_C,
    PS_FILE_ID_IMSAPROCCCAMSG_C,
    PS_FILE_ID_IMSAPROCCDSMSG_C,
    PS_FILE_ID_IMSAPROCIMSCALLMSG_C,
    PS_FILE_ID_IMSAPROCIMSREGMSG_C,
    PS_FILE_ID_IMSAPROCIMSSMSMSG_C,
    PS_FILE_ID_IMSAPROCMSCCMSG_C,
    PS_FILE_ID_IMSAPROCSMSMSG_C,
    PS_FILE_ID_IMSAPROCSPMMSG_C,
    PS_FILE_ID_IMSAPROCTIMERMSG_C,
    PS_FILE_ID_IMSAPUBLIC_C,
    PS_FILE_ID_IMSAREGMANAGEMENT_C,
    PS_FILE_ID_IMSASERVICEMANAGEMENT_C,
    PS_FILE_ID_IMSAPROCATMSG_C,
    PS_FILE_ID_IMSAPROCIMSUSSDMSG_C,
    PS_FILE_ID_IMSAPROCUSSDMSG_C,
    /* Added by s49683 for VoLTE, 2013-07-19, end */
    PS_FILE_ID_IMSAPROCRNICMSG_C,

    PS_FILE_ID_IMSAPROCOMMSG_C,
    PS_FILE_ID_LNASREPLAYPROC_C,

    PS_FILE_ID_CSSMAIN_C,
    PS_FILE_ID_CSSPUBLIC_C,
    PS_FILE_ID_CSSPROCCOMMMSG_C,
    PS_FILE_ID_CSSPROCSRCHRSLT_C,
    PS_FILE_ID_CSSPROCLPHYMSG_C,
    PS_FILE_ID_CSSPROCLMMMSG_C,
    PS_FILE_ID_CSSPROCTIMERMSG_C,
    PS_FILE_ID_CSSTEST_C,
    PS_FILE_ID_CSSPROCATMSG_C,
    PS_FILE_ID_CSSCLOUDSTRATEGYPUBLIC_C,
    PS_FILE_ID_CSSRATRECOGNIZE_C,
    PS_FILE_ID_CSSHISTORYFREQPROC_C,


    PS_FILE_ID_NASESMEHSMMSGPROC_C,

    PS_FILE_ID_NASEMMSSMSGPROC_C,
    PS_FILE_ID_NASLPPDECODE_C,
    PS_FILE_ID_NASLPPEMMMSGPROC_C,
    PS_FILE_ID_NASLPPENCODE_C,
    PS_FILE_ID_NASLPPENCODEDECODEPUBLIC_C,
    PS_FILE_ID_NASLPPINTRAMSGPROC_C,
    PS_FILE_ID_NASLPPLRRCMSGPROC_C,
    PS_FILE_ID_NASLPPMAIN_C,
    PS_FILE_ID_NASLPPMTAMSGPROC_C,
    PS_FILE_ID_NASLPPPUBLIC_C,
    PS_FILE_ID_NASLPPSENDMSG_C,
    PS_FILE_ID_NASLPPTIMERMSGPROC_C,
    PS_FILE_ID_NASLPPFSM_C,
    PS_FILE_ID_NASLPPOM_C,
    PS_FILE_ID_NASEMMLPPMSGPROC_C,
    PS_FILE_ID_NASLPPETCMSGPROC_C,
    PS_FILE_ID_NASLPPLCSMSGPROC_C,
    PS_FILE_ID_IMSAPROCWIFIMSG_C,
    PS_FILE_ID_IMSADOMAINMANAGEMENT_C,
    PS_FILE_ID_NASCOMMPUBLIC_C,

    PS_FILE_ID_NASTHROTALG_C,

    PS_FILE_ID_IMSAPROCLPDCPMSG_C,
    PS_FILE_ID_IMSAPROCLRRCMSG_C,

    PS_FILE_ID_IMSAPROCMMAMSG_C,
    PS_FILE_ID_NASEMMIMSAMSGPROC_C,

    LNAS_FILE_ID_BUTT
}LNAS_FILE_ID_DEFINE_ENUM;

/*TL2 file id begin*/
typedef enum
{
    /*mac*/
    PS_FILE_ID_T_MAC00NUL_C= TL2_TEAM_FILE_ID,
    PS_FILE_ID_T_MAC01SEL_C,
    PS_FILE_ID_T_MAC02IDL_C,
    PS_FILE_ID_T_MAC03ACC_C,
    PS_FILE_ID_T_MAC04FCH_C,
    PS_FILE_ID_T_MAC05DCH_C,
    PS_FILE_ID_T_MAC06SLP_C,
    PS_FILE_ID_T_MAC07IRAT_C,
    PS_FILE_ID_T_MAC08WAIT_C,
    PS_FILE_ID_T_MAC09AT_C,
    PS_FILE_ID_T_MAC10COM_C,
    PS_FILE_ID_T_MAC29COM_C,
    PS_FILE_ID_T_MAC30COM_C,
    PS_FILE_ID_T_MAC31COM_C,
    PS_FILE_ID_T_TMACCSVOICE_C,
    /*pdc*/
    PS_FILE_ID_T_PDC00NUL_C,
    PS_FILE_ID_T_PDC01TRA_C,
    PS_FILE_ID_T_PDC30PUB_C,
    PS_FILE_ID_T_PDC31CRE_C,
    /*rlc*/
    PS_FILE_ID_T_RLC00COM_C,
    PS_FILE_ID_T_RLC01NUL_C,
    PS_FILE_ID_T_RLC02AMT_C,
    PS_FILE_ID_T_RLC03TUT_C,
    PS_FILE_ID_T_RLC04AMS_C,
    PS_FILE_ID_T_RLC05UMS_C,
    PS_FILE_ID_T_RLC06RST_C,
    PS_FILE_ID_T_RLC07RAS_C,
    PS_FILE_ID_T_RLC20PUB_C,
    PS_FILE_ID_T_RLC21PUB_C,
    PS_FILE_ID_T_RLC22PUB_C,
    PS_FILE_ID_T_RLC23PUB_C,
    /*hl*/
    PS_FILE_ID_T_HL100ISR_C,
    PS_FILE_ID_T_HL101COMM_C,
    PS_FILE_ID_T_HL102_C,
    PS_FILE_ID_T_HL103_C,
    PS_FILE_ID_T_HL1_INTEGRATE_C,
    /*fsm*/
    PS_FILE_ID_T_FSMMAC_C,
    PS_FILE_ID_T_FSMPDC_C,
    PS_FILE_ID_T_FSMRLC_C,
    /*test*/
    PS_FILE_ID_T_TESTMAC_C,
    PS_FILE_ID_T_TESTPDC_C,
    PS_FILE_ID_T_TESTRLC_C,
    /*comm*/
    PS_FILE_ID_T_TDSL2DEBUG_C,
    PS_FILE_ID_T_TDSL2OM_C,
}TL2_FILE_ID_DEFINE_ENUM;
/*TL2 file id end*/

/*LL2 file id begin*/
typedef enum
{
    /*mac*/
    PS_FILE_ID_L_MACRLCDLENTRY_C = LL2_TEAM_FILE_ID,
    PS_FILE_ID_L_MACRLCULENTRY_C,
    PS_FILE_ID_L_MACULCOM_C,
    PS_FILE_ID_L_MACENTITY_C,
    PS_FILE_ID_L_MACULSCH_C,
    PS_FILE_ID_L_MACCTRL_C,
    PS_FILE_ID_L_MACRANDOM_C,
    PS_FILE_ID_L_MACDLSCH_C,
    PS_FILE_ID_L_MACDLCOM_C,
    PS_FILE_ID_L_MACTIME_C,
    PS_FILE_ID_L_MACSEND_C,
    PS_FILE_ID_L_MACPHYPROC_C,
    PS_FILE_ID_L_MACSTUB_C,/*对通测试使用*/
    /*rlc*/
    PS_FILE_ID_L_RLC_C,
    PS_FILE_ID_L_RLCCOMM_C,
    PS_FILE_ID_L_RLCTIMER_C,
    PS_FILE_ID_L_RLCMACINTERF_C,

    PS_FILE_ID_L_RLCPDCPINTERF_C,
    PS_FILE_ID_L_RLCUMTRANS_C,
    PS_FILE_ID_L_RLCTMRECV_C,
    PS_FILE_ID_L_RLCUMRECV_C,
    PS_FILE_ID_L_RLCAMRECV_C,

    PS_FILE_ID_L_RLCAMTRANS_C,
    PS_FILE_ID_L_RLCDLCONFIG_C,
    PS_FILE_ID_L_RLCULCONFIG_C,
    PS_FILE_ID_L_RLCDEBUG_C,

    /*pdcp*/
    PS_FILE_ID_L_PDCPDLPROC_C,

    PS_FILE_ID_L_PDCPDLINTEGRITYVERI_C,
    PS_FILE_ID_L_PDCPSECURITY_C,
    PS_FILE_ID_L_PDCPDLUNCOMPRESS_C,
    PS_FILE_ID_L_PDCPENTRY_C,
    PS_FILE_ID_L_PDCPULPROC_C,

    PS_FILE_ID_L_PDCPULCIPHER_C,
    PS_FILE_ID_L_PDCPULCOMPRESS_C,
    PS_FILE_ID_L_PDCPULINTEGRITYPROT_C,
    PS_FILE_ID_L_PDCP_C,

    /*stub files*/
    PS_FILE_ID_L_PDCPDDEBUG_C,
    PS_FILE_ID_L_MACDEBUG_C,

    /*L2 loopback test*/
    PS_FILE_ID_L_PDCP_LOOPBACK_C,
    PS_FILE_ID_L_RLCMBMS_C,

    /*added by z103912 2012-2-2 for ROHC*/
    PS_FILE_ID_L_ROHC_CONSTRUCT_PKT,
    PS_FILE_ID_L_ROHC_COMP_PROF0_C,
    PS_FILE_ID_L_ROHC_COMP_PROF1_C,
    PS_FILE_ID_L_ROHC_COMP_PROF2_C,
    PS_FILE_ID_L_ROHC_COMP_PROF3_C,
    PS_FILE_ID_L_ROHC_COMP_PROF4_C,
    PS_FILE_ID_L_ROHC_COM_C,
    PS_FILE_ID_L_ROHC_ADAPTER_C,
    PS_FILE_ID_L_ROHC_MEMMNG_C,
    PS_FILE_ID_L_ROHC_FEEDBACK_PROC_C,
    PS_FILE_ID_L_ROHC_REFORM_PKT_C,
    PS_FILE_ID_L_ROHC_DECOMP_PROF0_C,
    PS_FILE_ID_L_ROHC_DECOMP_PROF1_C,
    PS_FILE_ID_L_ROHC_DECOMP_PROF2_C,
    PS_FILE_ID_L_ROHC_DECOMP_PROF3_C,
    PS_FILE_ID_L_ROHC_DECOMP_PROF4_C,
    PS_FILE_ID_L_ROHC_DECOMP_MODE_TRANS_C,
    PS_FILE_ID_L_ROHC_DECOMP_IRIRDYN_PROC_C,
    PS_FILE_ID_L_ROHC_DECOMP_FEEDBAK_C,
    PS_FILE_ID_L_ROHC_DECOMP_C,
    PS_FILE_ID_L_ROHC_CRC_C,

    /*LTE用户面可维可测*/
    PS_FILE_ID_CDS_OMITF_C,
    PS_FILE_ID_LPDCP_OM_ITF_C,
    PS_FILE_ID_LRLC_OM_ITF_C,
    PS_FILE_ID_LMAC_OM_ITF_C,
    PS_FILE_ID_LUP_DT_ITF_C,
    PS_FILE_ID_LUP_ERRLOG_ITF_C,
    PS_FILE_ID_LUP_DCM_ITF_C,

    /*L2 TTF QUEUE events appITF OMITF*/
    PS_FILE_ID_L_TTFQUEUE_C ,
    PS_FILE_ID_L2APPITF_C,
    PS_FILE_ID_L2EVENTS_C,
    PS_FILE_ID_L2OMITF_C,

    /*LTE硬件接口*/
    PS_FILE_ID_LUP_HARDWIRE_ITF_C,

    /*CDS*/
    PS_FILE_ID_CDS_UL_PROC_C,
    PS_FILE_ID_CDS_DL_PROC_C,
    PS_FILE_ID_CDS_MSG_PROC_C,
    PS_FILE_ID_CDS_IPF_CTRL_C,
    PS_FILE_ID_CDS_ENTITY_C,
    PS_FILE_ID_CDS_DEBUG_C,
    PS_FILE_ID_CDS_IP_FRAGMENT_PROC_C,
    PS_FILE_ID_CDS_SOFT_FILTER_C,
    PS_FILE_ID_CDS_IMS_PROC_C,
    /*FC*/
    PS_FILE_ID_FC_FLOWCTRL_MANA_C,
    PS_FILE_ID_QOS_FC_OM_C,
    PS_FILE_ID_QOS_FC_CHANNEL_FLOWCTRL_C,
    PS_FILE_ID_QOS_FC_RAB_STATUS_C,
    PS_FILE_ID_QOS_FC_STATUS_C,

    /*NDCLIENT*/
    PS_FILE_ID_IPCOMM_C,
    PS_FILE_ID_IPNDCLIENT_C,
    PS_FILE_ID_IPNDSERVER_C,
    PS_FILE_ID_PSNDIS_C,
    /*added for L2 VOLTE analyze 2016-08-23 */
    PS_FILE_ID_LUP_AUTO_ANALYSIS_C,
    PS_FILE_ID_LUP_COM_DEPEND_C,

}LL2_FILE_ID_DEFINE_ENUM;

/*LL2 file id end*/



typedef enum
{
    PS_FILE_ID_WTTF_BMCENTPROC_C = WTTF_TEAM_FILE_ID,
    PS_FILE_ID_WTTF_BMCCTRL_C,
    PS_FILE_ID_WTTF_BMCMNTN_C,
    PS_FILE_ID_WTTF_MACCENTPROC_C,
    PS_FILE_ID_WTTF_MACCOMM_C,
    PS_FILE_ID_WTTF_MACDENTPROC_C,
    PS_FILE_ID_WTTF_MACEENTPROC_C,
    PS_FILE_ID_WTTF_MACCTRL_C,
    PS_FILE_ID_WTTF_MACHSENTPROC_C,
    PS_FILE_ID_WTTF_MACMNTN_C,
    PS_FILE_ID_WTTF_MACTRAFFICMEAS_C,
    PS_FILE_ID_WTTF_PDCPDATAPROC_C,
    PS_FILE_ID_WTTF_PDCPENTPROC_C,
    PS_FILE_ID_WTTF_PDCPCTRL_C,
    PS_FILE_ID_WTTF_RLCAMDATAPROC_C,
    PS_FILE_ID_WTTF_RLCAMENTITYMGMT_C,
    PS_FILE_ID_WTTF_RLCCIPHER_C,
    PS_FILE_ID_WTTF_RLCCOMMON_C,
    PS_FILE_ID_WTTF_RLCCTRL_C,
    PS_FILE_ID_WTTF_RLCMNTN_C,
    PS_FILE_ID_WTTF_RLCRESETPROC_C,
    PS_FILE_ID_WTTF_RLCSTATUSPROC_C,
    PS_FILE_ID_WTTF_RLCTMDATAPROC_C,
    PS_FILE_ID_WTTF_RLCTMENTITYMGMT_C,
    PS_FILE_ID_WTTF_RLCUMDATAPROC_C,
    PS_FILE_ID_WTTF_RLCUMENTITYMGMT_C,
    PS_FILE_ID_WTTF_MACEHSENTPROC_C,
    PS_FILE_ID_WTTF_MAC_AMRSWITCH_C,
    PS_FILE_ID_WTTF_MACCDLENTPROC_C,
    PS_FILE_ID_WTTF_MACDULENTPROC_C,
    PS_FILE_ID_WTTF_MACDDLENTPROC_C,
    PS_FILE_ID_WTTF_MACDLCTRL_C,
    PS_FILE_ID_WTTF_MACULPROC_C,
    PS_FILE_ID_WTTF_MACDLPROC_C,
    PS_FILE_ID_WTTF_RLCAMDLDATAPROC_C,
    PS_FILE_ID_WTTF_RLCAMDLENTITYMGMT_C,
    PS_FILE_ID_WTTF_RLCAMULDATAPROC_C,
    PS_FILE_ID_WTTF_RLCAMULENTITYMGMT_C,
    PS_FILE_ID_WTTF_RLCTMDLDATAPROC_C,
    PS_FILE_ID_WTTF_RLCTMDLENTITYMGMT_C,
    PS_FILE_ID_WTTF_RLCTMULDATAPROC_C,
    PS_FILE_ID_WTTF_RLCTMULENTITYMGMT_C,
    PS_FILE_ID_WTTF_RLCUMDLDATAPROC_C,
    PS_FILE_ID_WTTF_RLCUMDLENTITYMGMT_C,
    PS_FILE_ID_WTTF_RLCUMULDATAPROC_C,
    PS_FILE_ID_WTTF_RLCUMULENTITYMGMT_C,
    PS_FILE_ID_WTTF_RLCDLCIPHER_C,
    PS_FILE_ID_WTTF_RLCULCIPHER_C,
    PS_FILE_ID_WTTF_RLCDLPROC_C,
    PS_FILE_ID_WTTF_RLCULPROC_C,
    PS_FILE_ID_WTTF_RLCDLCTRL_C,
    PS_FILE_ID_WTTF_RLCULRESETPROC_C,
    PS_FILE_ID_WTTF_RLCDLRESETPROC_C,
    PS_FILE_ID_WTTF_RLCDLSTATUSPROC_C,
    PS_FILE_ID_WTTF_RLCULSTATUSPROC_C,
    PS_FILE_ID_WTTF_RLCINTERFACE_C,
    PS_FILE_ID_WTTF_MACMSGPROC_C,
    PS_FILE_ID_WTTF_RLCMSGPROC_C,
    PS_FILE_ID_WTTF_RLCAMQUEUEMGMT_C,
    PS_FILE_ID_WTTF_MACCULENTPROC_C,
    PS_FILE_ID_WTTF_MACIENTPROC_C,
    PS_FILE_ID_WTTF_TRACE_C,
    PS_FILE_ID_WTTF_PBDTASKENTRY_C,
    PS_FILE_ID_WTTF_RMDLTASKENTRY_C,
    PS_FILE_ID_WTTF_RMULTASKENTRY_C,
    WTTF_FILE_ID_BUTT = GTTF_TEAM_FILE_ID - 1

}WTTF_FILE_ID_DEFINE_ENUM;
typedef unsigned long WTTF_FILE_ID_DEFINE_ENUM_UINT32;

typedef enum
{
    PS_FILE_ID_GTTF_GRM_MNTN_C = GTTF_TEAM_FILE_ID,
    PS_FILE_ID_GTTF_GRM_COMM_C,
    PS_FILE_ID_GTTF_MAC_COMM_C,
    PS_FILE_ID_GTTF_MAC_DL_PROC_C,
    PS_FILE_ID_GTTF_MAC_UL_PROC_C,
    PS_FILE_ID_GTTF_RLC_DL_CTRL_C,
    PS_FILE_ID_GTTF_RLC_DL_DATA_PROC_C,
    PS_FILE_ID_GTTF_RLC_UL_CTRL_C,
    PS_FILE_ID_GTTF_RLC_UL_DATA_PROC_C,
    PS_FILE_ID_GTTF_T4_FUNC_C,
    PS_FILE_ID_GTTF_GTM_C,
    PS_FILE_ID_GTTF_COMM_C,
    PS_FILE_ID_GTTF_QUEUE_C,
    PS_FILE_ID_LL_C,
    PS_FILE_ID_LLABM_C,
    PS_FILE_ID_LLADM_C,
    PS_FILE_ID_LLCOMM_C,
    PS_FILE_ID_LLE_C,
    PS_FILE_ID_LLGEA_C,
    PS_FILE_ID_LLME_C,
    PS_FILE_ID_LLMUX_C,
    PS_FILE_ID_LLXID_C,
    PS_FILE_ID_MAC_STUB_C,
    PS_FILE_ID_SNCOMM_C,
    PS_FILE_ID_SNDATA_C,
    PS_FILE_ID_SNNSAPI_C,
    PS_FILE_ID_SNSAPI_C,
    PS_FILE_ID_SNXID_C,
    PS_FILE_ID_DL_C,
    PS_FILE_ID_DLDATA_C,
    PS_FILE_ID_DLPHY_C,
    PS_FILE_ID_DLSTATECTRL_C,
    PS_FILE_ID_FRMWKCOM_C,
    PS_FILE_ID_GMAC_C,
    PS_FILE_ID_GMAC_BUFFMANAGE_C,
    PS_FILE_ID_GMAC_DLTXCTRL_C,
    PS_FILE_ID_GMAC_ENTITYMANAGE_C,
    PS_FILE_ID_GMAC_ULTXCTRL_C,
    PS_FILE_ID_GTTF_TRACE_C,
    PS_FILE_ID_GUTTF_SNOW_C,
    GTTF_FILE_ID_BUTT = CTTF_TEAM_FILE_ID - 1
}GTTF_FILE_ID_DEFINE_ENUM;
typedef unsigned long GTTF_FILE_ID_DEFINE_ENUM_UINT32;

typedef enum
{
    PS_FILE_ID_COMP_ASN1_COM_C = WAS_TEAM_FILE_ID,
    PS_FILE_ID_COMP_ASN1_COMPLEX_DATA_C,
    PS_FILE_ID_COMP_ASN1_CREATE_INTERFACE_C,
    PS_FILE_ID_COMP_ASN1_DATA_DEAL_C,
    PS_FILE_ID_COMP_ASN1_NAME_DEAL_C,
    PS_FILE_ID_COMP_ASN1_PARSE_WORD_C,
    PS_FILE_ID_COMP_ASN1_READ_FILE_C,
    PS_FILE_ID_COMP_ASN1_SETUP_C,
    PS_FILE_ID_COMP_ASN1_SIMPLE_DATA_C,
    PS_FILE_ID_COMP_ASN1_SIZE_DEAL_C,
    PS_FILE_ID_COMP_ASN1_START_C,
    PS_FILE_ID_COMP_ASN1_TABLE_COM_C,
    PS_FILE_ID_COMP_ASN1_TABLE_DEFINE_C,
    PS_FILE_ID_COMP_ASN1_TABLE_MAKE_C,
    PS_FILE_ID_COMP_ASN1_TOOL_COM_C,
    PS_FILE_ID_COMP_ASN1_TYPE_CHECK_C,
    PS_FILE_ID_COMP_ASN1_TYPE_COM_C,
    PS_FILE_ID_COMP_ASN1_TYPE_COM_DEAL_C,
    PS_FILE_ID_COMP_ASN1_TYPE_LOOP_C,
    PS_FILE_ID_COMP_ASN1_TYPE_MANAGE_C,
    PS_FILE_ID_COMP_ASN1_TYPE_OPTIONAL_C,
    PS_FILE_ID_COMP_ASN1_TYPE_SIZE_C,
    PS_FILE_ID_COMP_ASN1_TYPE_STATE_C,
    PS_FILE_ID_COMP_ASN1_TYPE_STR_C,
    PS_FILE_ID_COMP_ASN1_VALUE_GET_C,
    PS_FILE_ID_COMP_ASN1_VALUE_REPLACE_C,
    PS_FILE_ID_COMP_ASN1_WORD_ABBR_C,
    PS_FILE_ID_WAS_ASN1API_C,
    PS_FILE_ID_PER_BASIC_C,
    PS_FILE_ID_PER_COM_C,
    PS_FILE_ID_PER_COMBINE_C,
    PS_FILE_ID_PER_DOWN_C,
    PS_FILE_ID_PER_FRAG_C,
    PS_FILE_ID_PER_INIT_C,
    PS_FILE_ID_PER_LEN_C,
    PS_FILE_ID_PER_MAIN_C,
    PS_FILE_ID_PER_MARK_C,
    PS_FILE_ID_PER_MEM_C,
    PS_FILE_ID_PER_NUM_C,
    PS_FILE_ID_PER_OPEN_C,
    PS_FILE_ID_PER_SHOW_C,
    PS_FILE_ID_PER_UPPER_C,
    PS_FILE_ID_WAS_CBS_C,
    PS_FILE_ID_WAS_CBSFSM_C,
    PS_FILE_ID_WAS_COMMCCBAPI_C,
    PS_FILE_ID_WAS_COMMSAVEIER3_C,
    PS_FILE_ID_WAS_COMMSAVEIER4_C,
    PS_FILE_ID_WAS_COMMSAVEIER5_C,
    PS_FILE_ID_WAS_COMMSAVEIER6_C,
    PS_FILE_ID_WAS_CSELANYCELLSEARCH_C,
    PS_FILE_ID_WAS_CSELCANDCELLSEARCH_C,
    PS_FILE_ID_WAS_CSELBESTCANDCELLSEARCH_C,
    PS_FILE_ID_WAS_CSELCELLRESEL_C,
    PS_FILE_ID_WAS_CSELCELLRESELINTERFREQ_C,
    PS_FILE_ID_WAS_CSELCELLRESELINTERRAT_C,
    PS_FILE_ID_WAS_CSELCELLRESELINTRAFREQ_C,
    PS_FILE_ID_WAS_CSELCELLRESELSTART_C,
    PS_FILE_ID_WAS_CSELCELLRESELSTARTNEIGHMEAS_C,
    PS_FILE_ID_WAS_CSELCELLRESELSTOP_C,
    PS_FILE_ID_WAS_CSELCOMPROC_C,
    PS_FILE_ID_WAS_CSELFSM_C,
    PS_FILE_ID_WAS_CSELGETSERVCELLSYSINFO_C,
    PS_FILE_ID_WAS_CSELMNTN_C,
    PS_FILE_ID_WAS_CSELMSGITF_C,
    PS_FILE_ID_WAS_CSELMSGPROC_C,
    PS_FILE_ID_WAS_CSELPCCELLCFG_C,
    PS_FILE_ID_WAS_CSELPCCELLFACHRESEL_C,
    PS_FILE_ID_WAS_CSELPCCELLPCHRESEL_C,
    PS_FILE_ID_WAS_CSELPCCOM_C,
    PS_FILE_ID_WAS_CSELPCCOMMPROC_C,
    PS_FILE_ID_WAS_CSELPCENTRY_C,
    PS_FILE_ID_WAS_CSELPCFSM_C,
    PS_FILE_ID_WAS_CSELPCIDLERESEL_C,
    PS_FILE_ID_WAS_CSELPCNASSYSCHGINFO_C,
    PS_FILE_ID_WAS_CSELPCOUTSERVICE_C,
    PS_FILE_ID_WAS_CSELPCPLMNSEARCH_C,
    PS_FILE_ID_WAS_CSELPCRELALL_C,
    PS_FILE_ID_WAS_CSELPCRLCUNRECOV_C,
    PS_FILE_ID_WAS_CSELPCRLFAIL_C,
    PS_FILE_ID_WAS_CSELPCT305EXPIRED_C,
    PS_FILE_ID_WAS_CSELPCURAPCHRESEL_C,
    PS_FILE_ID_WAS_CSELPLMNLISTSEARCH_C,
    PS_FILE_ID_WAS_CSELSNDMSG_C,
    PS_FILE_ID_WAS_CSELSPECCELLSEARCH_C,
    PS_FILE_ID_WAS_CSELSPECFREQSEARCH_C,
    PS_FILE_ID_WAS_CSELSPECPLMNSEARCH_C,
    PS_FILE_ID_WAS_CSELSYSINFOCHANGED_C,
    PS_FILE_ID_WAS_CUCELLUPDATE_C,
    PS_FILE_ID_WAS_CUCELLUPDATE2D_C,
    PS_FILE_ID_WAS_CUCELLUPDATE2F_C,
    PS_FILE_ID_WAS_CUCELLUPDATE2P_C,
    PS_FILE_ID_WAS_CUCELLUPDATECNFMSGHANDLE_C,
    PS_FILE_ID_WAS_CUCOMM_C,
    PS_FILE_ID_WAS_CUFSM_C,
    PS_FILE_ID_WAS_CUMSGHANDLECOMM_C,
    PS_FILE_ID_WAS_CUPARASET_C,
    PS_FILE_ID_WAS_CUUPDATECTX_C,
    PS_FILE_ID_WAS_CUURAUPDATE_C,
    PS_FILE_ID_WAS_CUURAUPDATE2F_C,
    PS_FILE_ID_WAS_CUURAUPDATE2P_C,
    PS_FILE_ID_WAS_CUURAUPDATECNFMSGHANDLE_C,
    PS_FILE_ID_WAS_CUUTRANMOBIINFO_C,
    PS_FILE_ID_WAS_CUUTRANMOBILINFOMSGHANDLE_C,
    PS_FILE_ID_WAS_CUWAITCELLUPDATECNF_C,
    PS_FILE_ID_WAS_DEFAULTCFG_C,
    PS_FILE_ID_WAS_ENTRY_C,
    PS_FILE_ID_WAS_FSM_C,
    PS_FILE_ID_WAS_FSMCOMM_C,
    PS_FILE_ID_WAS_ITTFIDPIDSTUB_C,
    PS_FILE_ID_WAS_L2ITFCOM_C,
    PS_FILE_ID_WAS_L2ITFENTRY_C,
    PS_FILE_ID_WAS_L2ITFFSM_C,
    PS_FILE_ID_WAS_L2ITFRCVMAC_C,
    PS_FILE_ID_WAS_L2ITFRCVPDCP_C,
    PS_FILE_ID_WAS_L2ITFRCVRLC_C,
    PS_FILE_ID_WAS_L2ITFSNDBMC_C,
    PS_FILE_ID_WAS_L2ITFSNDMAC_C,
    PS_FILE_ID_WAS_L2ITFSNDPDCP_C,
    PS_FILE_ID_WAS_L2ITFSNDRLC_C,
    PS_FILE_ID_WAS_MAIN_C,
    PS_FILE_ID_WAS_MAINCOMM_C,
    PS_FILE_ID_WAS_MAINFLOW_C,
    PS_FILE_ID_WAS_MAINFSM_C,
    PS_FILE_ID_WAS_MAINPRINTFSM_C,
    PS_FILE_ID_WAS_MAINSTUB_C,
    PS_FILE_ID_WAS_MAINTIMER_C,
    PS_FILE_ID_WAS_MNTNUUMSGTRACE_C,
    PS_FILE_ID_WAS_MNTN_C,
    PS_FILE_ID_WAS_NASITF_C,
    PS_FILE_ID_WAS_PFCFSM_C,
    PS_FILE_ID_WAS_PHYITFFSM_C,
    PS_FILE_ID_WAS_PHYITFWCOM_C,
    PS_FILE_ID_WAS_PHYITFWRR_C,
    PS_FILE_ID_WAS_PHYITFMNTN_C,
    PS_FILE_ID_WAS_RBCTRLD2D_C,
    PS_FILE_ID_WAS_RBCTRLD2F_C,
    PS_FILE_ID_WAS_RBCTRLD2P_C,
    PS_FILE_ID_WAS_RBCTRLF2D_C,
    PS_FILE_ID_WAS_RBCTRLF2F_C,
    PS_FILE_ID_WAS_RBCTRLF2P_C,
    PS_FILE_ID_WAS_RBCTRLFSM_C,
    PS_FILE_ID_WAS_RBMAIN_C,
    PS_FILE_ID_WAS_RBMSGHANDLECOMM_C,
    PS_FILE_ID_WAS_RBMSGHANDLEPHYRECFG_C,
    PS_FILE_ID_WAS_RBMSGHANDLERBRECFG_C,
    PS_FILE_ID_WAS_RBMSGHANDLERBREL_C,
    PS_FILE_ID_WAS_RBMSGHANDLERBSETUP_C,
    PS_FILE_ID_WAS_RBMSGHANDLETFCCTRL_C,
    PS_FILE_ID_WAS_RBMSGHANDLETRCHRECFG_C,
    PS_FILE_ID_WAS_RBPARASET_C,
    PS_FILE_ID_WAS_RBSNDCFGMSG_C,
    PS_FILE_ID_WAS_RBSNDUUMSG_C,
    PS_FILE_ID_WAS_RBSTUB_C,
    PS_FILE_ID_WAS_RBUPDATECTX_C,
    PS_FILE_ID_WAS_RM_C,
    PS_FILE_ID_WAS_RMACTIONLIST_C,
    PS_FILE_ID_WAS_RMFSM_C,
    PS_FILE_ID_WAS_RMGLOBAL_C,
    PS_FILE_ID_WAS_RMINTERFREQMEASRSLT_C,
    PS_FILE_ID_WAS_RMINTERRATMEASRSLT_C,
    PS_FILE_ID_WAS_RMINTRAFREQMEASRSLT_C,
    PS_FILE_ID_WAS_RMMEASURERSLT_C,
    PS_FILE_ID_WAS_RMMNTN_C,
    PS_FILE_ID_WAS_RMPROCMSG_C,
    PS_FILE_ID_WAS_RMQUALMEASRSLT_C,
    PS_FILE_ID_WAS_RMSAVEIE_C,
    PS_FILE_ID_WAS_RMSAVEIER3_C,
    PS_FILE_ID_WAS_RMSAVEIER4_C,
    PS_FILE_ID_WAS_RMSAVEIER6_C,
    PS_FILE_ID_WAS_RMSNDMSG_C,
    PS_FILE_ID_WAS_RMTRAFVOLMEASRSLT_C,
    PS_FILE_ID_WAS_RMUEINTERNALMEASRSLT_C,
    PS_FILE_ID_WAS_RRCCONNREJECT_C,
    PS_FILE_ID_WAS_RRCCONNREL_C,
    PS_FILE_ID_WAS_RRCCONNREQ_C,
    PS_FILE_ID_WAS_RRCCONNSETUPCOMM_C,
    PS_FILE_ID_WAS_RRCCONNSETUPDCH_C,
    PS_FILE_ID_WAS_RRCCONNSETUPFACH_C,
    PS_FILE_ID_WAS_RRCCONNWAITSETUP_C,
    PS_FILE_ID_WAS_RRCDIRECTDATA_C,
    PS_FILE_ID_WAS_RRCFSM_C,
    PS_FILE_ID_WAS_RRCPAGING_C,
    PS_FILE_ID_WAS_RRCSIBCHANGE_C,
    PS_FILE_ID_WAS_RRCSIGNALREL_C,
    PS_FILE_ID_WAS_RRCUECAPAB_C,
    PS_FILE_ID_WAS_RRC_MNTN_C,
    PS_FILE_ID_WAS_RRCINTERRATHOINFO_C,
    PS_FILE_ID_WAS_RB_MNTN_C,
    PS_FILE_ID_WAS_RSLTCODE_C,
    PS_FILE_ID_WAS_SHOASUMSGHANDLE_C,
    PS_FILE_ID_WAS_SHOCOMM_C,
    PS_FILE_ID_WAS_SHOFSM_C,
    PS_FILE_ID_WAS_SHOMNTN_C,
    PS_FILE_ID_WAS_SHOPROC_C,
    PS_FILE_ID_WAS_SIB6HUPDATE_C,
    PS_FILE_ID_WAS_SIBCOMMITF_C,
    PS_FILE_ID_WAS_SIBCOMMPROS_C,
    PS_FILE_ID_WAS_SIBFSM_C,
    PS_FILE_ID_WAS_SIBMNTN_C,
    PS_FILE_ID_WAS_SIBMODIFY_C,
    PS_FILE_ID_WAS_SIBMSGITF_C,
    PS_FILE_ID_WAS_SIBMSGSND_C,
    PS_FILE_ID_WAS_SIBPERIOD_C,
    PS_FILE_ID_WAS_SIBRCVSIB7_C,
    PS_FILE_ID_WAS_SIBREQMSGHANDLE_C,
    PS_FILE_ID_WAS_SIBSTART_C,
    PS_FILE_ID_WAS_SMC_C,
    PS_FILE_ID_WAS_SMCENTRY_C,
    PS_FILE_ID_WAS_SMCFSM_C,
    PS_FILE_ID_WAS_SMCMNTN_C,
    PS_FILE_ID_WAS_SYSHOENTRY_C,
    PS_FILE_ID_WAS_SYSHOFSM_C,
    PS_FILE_ID_WAS_SYSHOG2WCCHG_C,
    PS_FILE_ID_WAS_SYSHOG2WHO_C,
    PS_FILE_ID_WAS_SYSHOGLOBAL_C,
    PS_FILE_ID_WAS_SYSHO_MNTN_C,
    PS_FILE_ID_WAS_SYSHOSAVEIE_C,
    PS_FILE_ID_WAS_SYSHOSAVEIER3_C,
    PS_FILE_ID_WAS_SYSHOSAVEIER4_C,
    PS_FILE_ID_WAS_SYSHOSAVEIER5_C,
    PS_FILE_ID_WAS_SYSHOSAVEIER6_C,
    PS_FILE_ID_WAS_SYSHOSNDMSG_C,
    PS_FILE_ID_WAS_SYSHOW2GCCHGINDCH_C,
    PS_FILE_ID_WAS_SYSHOW2GCCHGINFACH_C,
    PS_FILE_ID_WAS_SYSHOW2GHO_C,
    PS_FILE_ID_WAS_TAFITF_C,
    PS_FILE_ID_WAS_WCOMFSM_C,
    PS_FILE_ID_WAS_WRRFSM_C,
    PS_FILE_ID_WAS_CSELPCRRMMCELLSELCTRL_C,
    PS_FILE_ID_WAS_WASCBSSTUB_C,
    PS_FILE_ID_WAS_COMMSAVEIER7_C,
    PS_FILE_ID_WAS_RMSAVEIER7_C,
    PS_FILE_ID_WAS_SYSHOSAVEIER7_C,
    PS_FILE_ID_WAS_SYSHOG2WCELLSEL_C,
    PS_FILE_ID_WAS_BGSEARCH_C,
    PS_FILE_ID_WAS_BGGLOBAL_C,
    PS_FILE_ID_WAS_BGFSM_C,
    PS_FILE_ID_WAS_BGSNDMSGITF_C,
    PS_FILE_ID_WAS_BG_DEACTIVE_SEARCH_C,
    PS_FILE_ID_WAS_CSELPC_DEACTIVE_C,
    PS_FILE_ID_WAS_COMMSAVEIER8_C,
    PS_FILE_ID_WAS_RMSAVEIER8_C,
    PS_FILE_ID_WAS_CSELCELLRESELEUTRA_C,
    PS_FILE_ID_WAS_CSELPCEUTRA_C,
    PS_FILE_ID_WAS_RMEUTRAMEASRSLT_C,
    PS_FILE_ID_WAS_SYSHOW2LHO_C,
    PS_FILE_ID_WAS_SYSHOL2WHO_C,
    PS_FILE_ID_WAS_SYSHOL2WREDIRECT_C,
    PS_FILE_ID_WAS_CSELPCCELLSEARCHEUTRA_C,
    PS_FILE_ID_WAS_CSELSSC_C,
    PS_FILE_ID_WAS_CSELFFTPLMNSEARCH_C,
    PS_FILE_ID_WAS_RRCADRX_C,
    PS_FILE_ID_WAS_PWRMAIN_C,
    PS_FILE_ID_WAS_SIBGETDCHSYSINFO_C,
    PS_FILE_ID_WAS_COMMSAVEIER9_C,
    PS_FILE_ID_WAS_SYSHOSAVEIER9_C,
    PS_FILE_ID_WAS_RMSAVEIER9_C,
    PS_FILE_ID_WAS_FASTDORMANCY_C,
    PS_FILE_ID_WAS_MNTN_M2_C,
    PS_FILE_ID_WAS_COMMCCBAPIEUTRA_C,
    PS_FILE_ID_WAS_COMMSAVEIER8EUTRA_C,
    PS_FILE_ID_WAS_CSELCELLRESELSTARTEUTRA_C,
    PS_FILE_ID_WAS_CSELCOMPROCEUTRA_C,
    PS_FILE_ID_WAS_CSELMNTNEUTRA_C,
    PS_FILE_ID_WAS_CSELMSGITFEUTRA_C,
    PS_FILE_ID_WAS_CSELMSGPROCEUTRA_C,
    PS_FILE_ID_WAS_CSELPLMNLISTSEARCHEUTRA_C,
    PS_FILE_ID_WAS_BGDEACTIVESEARCHEUTRA_C,
    PS_FILE_ID_WAS_BGSNDMSGITFEUTRA_C,
    PS_FILE_ID_WAS_BGSEARCHEUTRA_C,
    PS_FILE_ID_WAS_CSELPCCELLPCHRESELEUTRA_C,
    PS_FILE_ID_WAS_CSELPCCOMMPROCEUTRA_C,
    PS_FILE_ID_WAS_CSELPCENTRYEUTRA_C,
    PS_FILE_ID_WAS_CSELPCIDLERESELEUTRA_C,
    PS_FILE_ID_WAS_CSELPCOUTSERVICEEUTRA_C,
    PS_FILE_ID_WAS_CSELPCURAPCHRESELEUTRA_C,
    PS_FILE_ID_WAS_CSELSNDMSGEUTRA_C,
    PS_FILE_ID_WAS_CUOUTOFSERVEUTRA_C,
    PS_FILE_ID_WAS_PHYITFWCOMEUTRA_C,
    PS_FILE_ID_WAS_PHYITFWRREUTRA_C,
    PS_FILE_ID_WAS_RMACTIONLISTEUTRA_C,
    PS_FILE_ID_WAS_RMGLOBALEUTRA_C,
    PS_FILE_ID_WAS_RMSAVEIEEUTRA_C,
    PS_FILE_ID_WAS_RMSNDMSGEUTRA_C,
    PS_FILE_ID_WAS_RRCCONNREJECTEUTRA_C,
    PS_FILE_ID_WAS_RRCCONNRELEUTRA_C,
    PS_FILE_ID_WAS_RRCCONNREQEUTRA_C,
    PS_FILE_ID_WAS_RRCCONNSETUPCOMMEUTRA_C,
    PS_FILE_ID_WAS_RRCINTERRATHOINFOEUTRA_C,
    PS_FILE_ID_WAS_RRCUECAPABEUTRA_C,
    PS_FILE_ID_WAS_SYSHOENTRYEUTRA_C,
    PS_FILE_ID_WAS_SYSHOGLOBALEUTRA_C,
    PS_FILE_ID_WAS_SYSHOSAVEIEEUTRA_C,
    PS_FILE_ID_WAS_SYSHOSNDMSGEUTRA_C,
    PS_FILE_ID_WAS_TAFITFEUTRA_C,
    PS_FILE_ID_WAS_WCOMFSMEUTRA_C,
    PS_FILE_ID_WAS_WRRFSMEUTRA_C,
    PS_FILE_ID_WAS_MAINEUTRA_C,
    PS_FILE_ID_WAS_MAINFLOWEUTRA_C,
    PS_FILE_ID_WAS_MNTNEUTRA_C,
    PS_FILE_ID_WAS_RMMNTNEUTRA_C,
    PS_FILE_ID_WAS_RMPROCMSGEUTRA_C,
    PS_FILE_ID_WAS_MAINCCB_C,
    PS_FILE_ID_WAS_RMPOSITIONMEASRSLT_C,
    PS_FILE_ID_WAS_MNTNNETMON_C,
    PS_FILE_ID_WAS_RRMITF_C,
    PS_FILE_ID_WAS_CSELHISTORYCANDCELLSEARCH_C,
    PS_FILE_ID_WAS_PUBLICTAFITF_C,
    PS_FILE_ID_WAS_PUBLICTAFITFEUTRA_C,
    PS_FILE_ID_WAS_PUBLICMAINCOM_C,
    PS_FILE_ID_WAS_PUBLICCSELCOM_C,
    PS_FILE_ID_WAS_PUBLICPHYITFCOM_C,
    PS_FILE_ID_WAS_PUBLICL2ITFCOM_C,
    PS_FILE_ID_WAS_PUBLICPHYITF_C,
    PS_FILE_ID_WAS_PUBLICMNTN_C,
    PS_FILE_ID_WAS_PUBLICNASITF_C,
    PS_FILE_ID_WAS_PUBLICMAINFLOWEUTRA_C,
    PS_FILE_ID_WAS_PUBLICSIB_C,
    PS_FILE_ID_WAS_PUBLICCSELPCCOM_C,
    PS_FILE_ID_WAS_PUBLICCOMMCCBAPI_C,
    PS_FILE_ID_WAS_PUBLICWRRFSM_C,
    PS_FILE_ID_WAS_PUBLICMAINCCB_C,
    PS_FILE_ID_WAS_PUBLICFSM_C,
    PS_FILE_ID_WAS_PUBLICMAINPRINTFSM_C,
    PS_FILE_ID_WAS_PUBLICENTRY_C,
    PS_FILE_ID_WAS_PUBLICFSMCOMM_C,
    PS_FILE_ID_WAS_PUBLICCOMMCCBAPIEUTRA_C,
    PS_FILE_ID_WAS_PUBLICWCOMFSM_C,
    PS_FILE_ID_WAS_PUBLICMAINEUTRA_C,
    PS_FILE_ID_WAS_PUBLICDEFAULTCFG_C,
    PS_FILE_ID_WAS_IMSAITF_C,
    PS_FILE_ID_WAS_PUBLICIMSAITF_C,
    WAS_FILE_ID_BUTT = GAS_TEAM_FILE_ID - 1

}WAS_FILE_ID_DEFINE_ENUM;

typedef unsigned long  WAS_FILE_ID_DEFINE_ENUM_UINT32;


typedef enum
{
    PS_FILE_ID_GAS_FSM_C = GAS_TEAM_FILE_ID,
    PS_FILE_ID_GAS_COMM_C,
    PS_FILE_ID_GAS_GASM_C,
    PS_FILE_ID_GAS_GASMFUNC_C,
    PS_FILE_ID_GAS_GCOM_C,
    PS_FILE_ID_GAS_GCOMC_C,
    PS_FILE_ID_GAS_GCOMCFSM_C,
    PS_FILE_ID_GAS_GCOMCFSMTBL_C,
    PS_FILE_ID_GAS_GCOMCL1FSM_C,
    PS_FILE_ID_GASGCOMCL2FSMBGWSEARCHG_C,
    PS_FILE_ID_GASGCOMCL2FSMBGGSEARCHG_C,
    PS_FILE_ID_GASGCOMCL2FSMBGGSEARCHW_C,
    PS_FILE_ID_GASGCOMCL2FSMBGPLMNLISTSEARCH_C,
    PS_FILE_ID_GASGCOMSISCELLNORMALBGNCELLBCCH_C,
    PS_FILE_ID_GASGCOMSIINACTIVEBGNCELLBCCH_C,
    PS_FILE_ID_GAS_GCOMCGPRSCELLRESELECTION_C,
    PS_FILE_ID_GAS_GCOMCGSMCELLRESELECTION_C,
    PS_FILE_ID_GAS_GCOMCMSGDISTRIBUTION_C,
    PS_FILE_ID_GAS_GCOMCPLMNSEARCH_C,
    PS_FILE_ID_GAS_GCOMCPUBLICCELLRESELECTION_C,
    PS_FILE_ID_GAS_GCOMCUTRANCELLRESELECTION_C,
    PS_FILE_ID_GAS_GCOMMAIN_C,
    PS_FILE_ID_GAS_GCOMMCOMMON_C,
    PS_FILE_ID_GAS_GCOMMGPRSNCMEAS_C,
    PS_FILE_ID_GAS_GCOMMGPRSPULBIC_C,
    PS_FILE_ID_GAS_GCOMMGPRSRESELMEAS_C,
    PS_FILE_ID_GAS_GCOMMGSMDEDICATEDMEAS_C,
    PS_FILE_ID_GAS_GCOMMGSMIDLEMEAS_C,
    PS_FILE_ID_GAS_GCOMMMAIN_C,
    PS_FILE_ID_GAS_GCOMSIMEASINFOMATION_C,
    PS_FILE_ID_GAS_GCOMPUBLIC_C,
    PS_FILE_ID_GAS_GCOMSICOMM_C,
    PS_FILE_ID_GAS_GCOMSIFSM_C,
    PS_FILE_ID_GAS_GCOMSINCELLBCCH_C,
    PS_FILE_ID_GAS_GCOMSINCELLNORMAL_C,
    PS_FILE_ID_GAS_GCOMSIPROCESSPSI_C,
    PS_FILE_ID_GAS_GCOMSIPROCESSSI_C,
    PS_FILE_ID_GAS_GCOMSISCELLBCCH_C,
    PS_FILE_ID_GAS_GCOMSISCELLBCCHGPRSPERIOD_C,
    PS_FILE_ID_GAS_GCOMSISCELLBCCHGSMPERIOD_C,
    PS_FILE_ID_GAS_GCOMSISCELLDEDICATE_C,
    PS_FILE_ID_GAS_GCOMSISCELLINACTIVE_C,
    PS_FILE_ID_GAS_GCOMSISCELLNORMAL_C,
    PS_FILE_ID_GAS_GCOMSISCELLPBCCH_C,
    PS_FILE_ID_GAS_GCOMSISCELLPACKETSISTATUS_C,
    PS_FILE_ID_GAS_GCOMSISCELLBCCHENHRECEIVE_C,
    PS_FILE_ID_GAS_GCOMSINETCTRLMEASPARAM_C,
    PS_FILE_ID_GAS_GCOMTOGRRPARAMS_C,
    PS_FILE_ID_GAS_GCOMTORRPARAMS_C,
    PS_FILE_ID_GAS_GRRBUILDMSG_C,
    PS_FILE_ID_GAS_GRRCOMM_C,
    PS_FILE_ID_GAS_GRRFSML1PROC_C,
    PS_FILE_ID_GAS_GRRFSML2ABNORMAL_C,
    PS_FILE_ID_GAS_GRRFSML2ACS_C,
    PS_FILE_ID_GAS_GRRFSML2INITACS_C,
    PS_FILE_ID_GAS_GRRFSML2TRANSF_C,
    PS_FILE_ID_GAS_GRRFSML3TRANSF_C,
    PS_FILE_ID_GAS_GRRIMMEDASSIGN_C,
    PS_FILE_ID_GAS_GRRMAIN_C,
    PS_FILE_ID_GAS_GRRPDCHASSIGN_C,
    PS_FILE_ID_GAS_GRRPKTDOWNLINKASSIGN_C,
    PS_FILE_ID_GAS_GRRPKTTIMESLOTRECFG_C,
    PS_FILE_ID_GAS_GRRPKTUPLINKASSIGN_C,
    PS_FILE_ID_GAS_GRRTBFCFG_C,
    PS_FILE_ID_GAS_RRABNORMALRELEASE_C,
    PS_FILE_ID_GAS_RRASSIGNCMD_C,
    PS_FILE_ID_GAS_RRBUILDMSG_C,
    PS_FILE_ID_GAS_RRCELLCHANGEORDER_C,
    PS_FILE_ID_GAS_RRCHANNELMODEMODIFY_C,
    PS_FILE_ID_GAS_RRCHANNELRELEASE_C,
    PS_FILE_ID_GAS_RRCIPHERMODECMD_C,
    PS_FILE_ID_GAS_RRCOMMFUNC_C,
    PS_FILE_ID_GAS_RRCONNECTION_C,
    PS_FILE_ID_GAS_RRCONTEXTHANDLER_C,
    PS_FILE_ID_GAS_RRFREQREDEF_C,
    PS_FILE_ID_GAS_RRHANDOVER_C,
    PS_FILE_ID_GAS_RRHANDOVERTOGSM_C,
    PS_FILE_ID_GAS_RRHANDOVERTOUTRAN_C,
    PS_FILE_ID_GAS_RRMAIN_C,
    PS_FILE_ID_GAS_RRMMABORT_C,
    PS_FILE_ID_GAS_RRMMCHANNELRELEASE_C,
    PS_FILE_ID_GAS_RRMSGVALID_C,
    PS_FILE_ID_GAS_RRPDCHASSIGN_C,
    PS_FILE_ID_GAS_RRPHYRADIOLINKFAILURE_C,
    PS_FILE_ID_GAS_RRRADIOLINKFAILURE_C,
    PS_FILE_ID_GAS_RRSAP3EST_C,
    PS_FILE_ID_PS_GASHELP_C,
    PS_FILE_ID_GAS_GCOMCVPLMNBGSEARCH_C,
    PS_FILE_ID_GAS_GCOMMVPLMNBGSEARCH_C,
    PS_FILE_ID_GAS_GCOMSINCELLBCCHVPLMNBGSEARCH_C,
    PS_FILE_ID_GAS_GCBSMAIN_C,
    PS_FILE_ID_GAS_GCBSCOMMFUNC_C,
    PS_FILE_ID_GAS_GCBSFSMIDLE_C,
    PS_FILE_ID_GAS_GCBSFSMACTIVE_C,
    PS_FILE_ID_GAS_GCBSFSMINACTIVE_C,
    PS_FILE_ID_GAS_GCBSFSMTBL_C,
    PS_FILE_ID_GAS_GCBSFSML2ACTIVE_C,
    PS_FILE_ID_CSN1DATATYPES_C,
    PS_FILE_ID_CSN1LIB_C,
    PS_FILE_ID_DOWNLINK_RLC_MAC_C,
    PS_FILE_ID_ED_C_C,
    PS_FILE_ID_ED_C_RECOG_C,
    PS_FILE_ID_ED_LIB_C,
    PS_FILE_ID_UPLINK_RLC_MAC_C,
    PS_FILE_ID_USERDEFINEDDATATYPES_C,
    PS_FILE_ID_PLENDOWNLINK_C,
    PS_FILE_ID_L3DOWNLINK_C,
    PS_FILE_ID_L3UPLINK_C,
    PS_FILE_ID_GASGCOMCL2FSMRESELG2L_C,
    PS_FILE_ID_GASGCOMCL2FSMRESELL2G_C,
    PS_FILE_ID_GAS_GCOMCLTECELLRESELCOMM_C,
    PS_FILE_ID_GAS_GCOMMFSM_C,
    PS_FILE_ID_GAS_GCOMMFSMTBL_C,
    PS_FILE_ID_GASGCOMML2FSMLTECONNECTMEAS_C,
    PS_FILE_ID_GASGCOMML2FSMLTEIDLEMEAS_C,
    PS_FILE_ID_GAS_GCOMSIPROCESSSIR8_C,
    PS_FILE_ID_GAS_GCOMSIPROCESSSIR9_C,
    PS_FILE_ID_GAS_GCOMCL2FSMRESELG2L_C,
    PS_FILE_ID_GAS_GCOMCL2FSMRESELL2G_C,
    PS_FILE_ID_GASGCOMCPREPROCESS_C,
    PS_FILE_ID_GAS_GCOMCL2FSMREDIRECTEDG2L_C,
    PS_FILE_ID_GAS_GCOMCL2FSMREDIRECTEDL2G_C,
    PS_FILE_ID_GAS_GCOMCL2FSMCCOG2L_C,
    PS_FILE_ID_GAS_GCOMCL2FSMCCOL2G_C,
    PS_FILE_ID_GASGCOMCL2FSMSYSCFG_C,
    PS_FILE_ID_GASGCOMCL2FSMNASSUSP_C,
    PS_FILE_ID_GASGCOMCL2FSMPWROFF_C,
    PS_FILE_ID_GASGCOMCSNDGPHYMSG_C,
    PS_FILE_ID_GAS_GCOMCSNDINTERNALMSG_C,
    PS_FILE_ID_GASGCOMCSNDLRRCMSG_C,
    PS_FILE_ID_GASGCOMCL2FSMBGGSEARCHL_C,
    PS_FILE_ID_GAS_MNTN_C,
    PS_FILE_ID_GAS_GCOMCAPABILITY_C,
    PS_FILE_ID_GAS_GCOM_CTX_LTE_C,
    PS_FILE_ID_GAS_GCOM_PUBLIC_LTE_C,
    PS_FILE_ID_GAS_GCOMC_CMP_MSG_PRI_C,
    PS_FILE_ID_GAS_GCOMC_CMP_MSG_PRI_LTE_C,
    PS_FILE_ID_GAS_GCOMM_CTX_LTE_C,
    PS_FILE_ID_GAS_GCOMM_COMM_LTE_C,
    PS_FILE_ID_GAS_GCOMSI_CTX_LTE_C,
    PS_FILE_ID_GAS_GCOMSI_COMM_LTE_C,
    PS_FILE_ID_GASGCOMCSNDOMMSG_C,
    PS_FILE_ID_GASGCOMCSNDOMMSG_LTE_C,
    PS_FILE_ID_GASGCOMMSNDOMMSG_LTE_C,
    PS_FILE_ID_GASGCOMCL2FSMSLAVEMODELOWPOWER_C,
    PS_FILE_ID_GAS_GCOMCL2FSMLTEANRGSM_C,
    PS_FILE_ID_GASGCOMCSNDWPHYMSG_C,
    PS_FILE_ID_GASGCOMCSNDWRRMSG_C,
    PS_FILE_ID_GASGCOMCSNDNASMSG_C,
    PS_FILE_ID_GASGCOMCCTXLTE_C,
    PS_FILE_ID_GASGCOMCBUILDMSG_C,
    PS_FILE_ID_GASGCOMCBUILDMSGLTE_C,
    PS_FILE_ID_GASGRRPREPROCESS_C,
    PS_FILE_ID_PER_MAIN_COMM_C,
    PS_FILE_ID_PER_MAIN_GAS_C,
    PS_FILE_ID_GASASN1API_C,
    PS_FILE_ID_GASRRAPPINFO_C,
    PS_FILE_ID_GASRRPREPROCESS_C,
    PS_FILE_ID_GASLCSCTX_C,
    PS_FILE_ID_GASLCSCOMM_C,
    PS_FILE_ID_GASLCSMAIN_C,
    PS_FILE_ID_GASLCSFSMTBL_C,
    PS_FILE_ID_GASLCSSAVERRLPMSG_C,
    PS_FILE_ID_GASLCSFILLRRLPMSG_C,
    PS_FILE_ID_GASLCSSNDRRMSG_C,
    PS_FILE_ID_GASLCSSNDMTAMSG_C,
    PS_FILE_ID_GASLCSFSML1IDLE_C,
    PS_FILE_ID_GASLCSFSML1ASSISTDATADELIVERY_C,
    PS_FILE_ID_GASLCSFSML1LOCATION_C,
    PS_FILE_ID_GASDYNBUF_C,
    PS_FILE_ID_GAS_GCOMCL2FSMRESELG2T_C,
    PS_FILE_ID_GAS_GCOMCL2FSMRESELT2G_C,
    PS_FILE_ID_GAS_GCOMCL2FSMSLAVEMODECTRL_C,
    PS_FILE_ID_GASGCOMCSNDTRRCMSG_C,
    PS_FILE_ID_GASGCOMML2FSMTDSMEAS_C,
    PS_FILE_ID_GAS_GCOMCL2FSMCCOT2G_C,
    PS_FILE_ID_GAS_GCOMCL2FSMCCOG2T_C,
    PS_FILE_ID_GAS_RRL2FSMHANDOVERT2G_C,
    PS_FILE_ID_GASRRCMPMSGPRI_C,
    PS_FILE_ID_GAS_GCOMCL2FSMRESELG2W_C,
    PS_FILE_ID_GAS_GCOMCL2FSMCCOG2W_C,
    PS_FILE_ID_GASGCOMCCOMM_C,
    PS_FILE_ID_GASGCOMSI_C,
    PS_FILE_ID_GASGCOMSISNDINTERNALMSG_C,
    PS_FILE_ID_GASGCOMSIL2FSMINACTIVESCELLBCCH_C,
    PS_FILE_ID_GASGCOMSIL2FSMINACTIVESEARCHINGBCCH_C,
    PS_FILE_ID_GAS_GCOMCL2FSMUTRANMODE_C,
    PS_FILE_ID_GASGCOMSICMPMSGPRI_C,
    PS_FILE_ID_GAS_GCOMCL2FSMREDIRG2T_C,
    PS_FILE_ID_GAS_ERRLOG_C,
    PS_FILE_ID_GAS_NET_MONITOR_C,
    PS_FILE_ID_GASGCOMCL2FSMGNETSCANG_C,
    PS_FILE_ID_GASGCOMCL2FSMGNETSCANW_C,
    PS_FILE_ID_GASGCOMCL2FSMWNETSCANG_C,
    PS_FILE_ID_GAS_RRL2FSMHANDOVERL2G_C,
    PS_FILE_ID_GASGCOMCL2FSMPLMNSPECSEARCH_C,
    PS_FILE_ID_GASGCOMCL2FSMGOOSSEARCH_C,
    PS_FILE_ID_GAS_GCOMCL2FSMPLMNLISTSEARCH_C,
    PS_FILE_ID_GAS_RFRESCTRL_C,
    PS_FILE_ID_GASGCOMCL2FSMRLFAILURESEARCH_C,
    PS_FILE_ID_GAS_GCOMCL2FSMREDIRECTEDG2G_C,
    PS_FILE_ID_GASGCOMCL2FSMWOOSSEARCH_C,
    PS_FILE_ID_GASGCOMCL2FSMREDIRW2G_C,
    PS_FILE_ID_GASGCOMML2FSMFDDMEAS_C,
    PS_FILE_ID_GAS_GCOMCL2FSMCCOW2G_C,
    PS_FILE_ID_GASGCOMCL2FSMBGXSEARCHG_C,
    PS_FILE_ID_GAS_GCOMCL2FSMRESELW2G_C,
    PS_FILE_ID_GASGCOMCL2FSMREDIRG2W_C,
    PS_FILE_ID_GAS_GCOMCL2FSMPLMNGETGEOSEARCH_C,
    PS_FILE_ID_GAS_MNTN_G2L_C,
    PS_FILE_ID_GAS_INTER_HO_ERRLOG_C,
    PS_FILE_ID_GAS_MNTN_L2G_C,
    PS_FILE_ID_GASGCOMSIL2FSMINACTIVEPARALLELSEARCH_C,
    PS_FILE_ID_GASGCOMCL2FSMRESELG2G_C,
    PS_FILE_ID_GASGCOMSIL2FSMNCELLPARALLELSEARCH_C,
    PS_FILE_ID_GASGCOMCSNDCSSMSG_C,
    PS_FILE_ID_GAS_MNTN_NW_SRCH_C,
    PS_FILE_ID_GAS_MNTN_RR_CONN_C,
    PS_FILE_ID_GASGCOMMPREPROCESS_C,
    PS_FILE_ID_ED_GSM_COMMON_ED_LIB_C,
    PS_FILE_ID_ED_GSM_COMMON_CSN1LIB_C,
    PS_FILE_ID_GAS_MNTN_CTX_C,
    PS_FILE_ID_GAS_MNTN_INTRA_HO_C,
    PS_FILE_ID_GAS_MNTN_AIR_MSG_C,
    PS_FILE_ID_GASGCOMCSNDIMSAMSG_C,
    GAS_FILE_ID_BUTT = CAS_TEAM_FILE_ID - 1

}GAS_FILE_ID_DEFINE_ENUM;

typedef unsigned long  GAS_FILE_ID_DEFINE_ENUM_UINT32;

typedef enum
{
/* 15360 */    PS_FILE_ID_ASN_ASAPI_C                     = NAS_TEAM_FILE_ID,
/* 15361 */    PS_FILE_ID_NASCC_AIRMSGSEND_C,
/* 15362 */    PS_FILE_ID_NASCC_ENTITYMGMT_C,
/* 15363 */    PS_FILE_ID_NASCC_MMCCSEND_C,
/* 15364 */    PS_FILE_ID_NASCC_AIRMSG_C,
/* 15365 */    PS_FILE_ID_NASCC_MNCCSEND_C,
/* 15366 */    PS_FILE_ID_NASCC_TIMER_C,
/* 15367 */    PS_FILE_ID_NAS_COM_C,
/* 15368 */    PS_FILE_ID_NAS_CC_C,
/* 15369 */    PS_FILE_ID_NASCC_MMCC_PROC_C,
/* 15370 */    PS_FILE_ID_NASCC_MMNC_PROC_C,
/* 15371 */    PS_FILE_ID_NASCC_MSGENCDEC_C,
/* 15372 */    PS_FILE_ID_NASCC_USERCONN_C,
/* 15373 */    PS_FILE_ID_GMM_ATTACH_C,
/* 15374 */    PS_FILE_ID_GMM_CASCOMM_C,
/* 15375 */    PS_FILE_ID_GMM_CASGSM_C,
/* 15376 */    PS_FILE_ID_GMM_CASMAIN_C,
/* 15377 */    PS_FILE_ID_GMM_CASSEND_C,
/* 15378 */    PS_FILE_ID_GMM_CASSUSPEND_C,
/* 15379 */    PS_FILE_ID_GMM_CASTIMER_C,
/* 15380 */    PS_FILE_ID_GMM_COMM_C,
/* 15381 */    PS_FILE_ID_GMM_DETACH_C,
/* 15382 */    PS_FILE_ID_GMM_MAIN_C,
/* 15383 */    PS_FILE_ID_GMM_RAU_C,
/* 15384 */    PS_FILE_ID_GMM_SEND_C,
/* 15385 */    PS_FILE_ID_GMM_SERVICE_C,
/* 15386 */    PS_FILE_ID_GMM_TIMER_C,
/* 15387 */    PS_FILE_ID_MM_CELLPROC1_C,
/* 15388 */    PS_FILE_ID_MM_CELLPROC2_C,
/* 15389 */    PS_FILE_ID_MM_CELLPROC3_C,
/* 15390 */    PS_FILE_ID_MM_COM_C,
/* 15391 */    PS_FILE_ID_MM_MAIN_C,
/* 15392 */    PS_FILE_ID_MM_MSG_C,
/* 15393 */    PS_FILE_ID_MM_RCV_C,
/* 15394 */    PS_FILE_ID_MM_SHARE_C,
/* 15395 */    PS_FILE_ID_MM_SND_C,
/* 15396 */    PS_FILE_ID_MMA_APPLOCAL_C,
/* 15397 */    PS_FILE_ID_MMA_REMOTE_C,
/* 15398 */    PS_FILE_ID_MM_AUTH_C,
/* 15399 */    PS_FILE_ID_MMC_CELLPROC_C,
/* 15400 */    PS_FILE_ID_MMC_COM_C,
/* 15401 */    PS_FILE_ID_MMC_INFOPROC_C,
/* 15402 */    PS_FILE_ID_MMC_MAIN_C,
/* 15403 */    PS_FILE_ID_MMC_MSGPROC_C,
/* 15404 */    PS_FILE_ID_MMC_PLMNPROC_C,
/* 15405 */    PS_FILE_ID_MMC_RCV_C,
/* 15406 */    PS_FILE_ID_MMC_SND_C,
/* 15407 */    PS_FILE_ID_MMC_SUSPENDPROC_C,
/* 15408 */    PS_FILE_ID_MMC_GASINTERFACE_C,
/* 15409 */    PS_FILE_ID_MMC_MMAINTERFACE_C,
/* 15410 */    PS_FILE_ID_MM_GSMDIFMSG_C,
/* 15411 */    PS_FILE_ID_MM_SUSPEND_C,
/* 15412 */    PS_FILE_ID_RABM_APSTRANSMODESET_C,
/* 15413 */    PS_FILE_ID_RABM_ASSISTANT_C,
/* 15414 */    PS_FILE_ID_RABM_DATAANDFLUX_C,
/* 15415 */    PS_FILE_ID_RABM_DEALGMMMSG_C,
/* 15416 */    PS_FILE_ID_RABM_DEALSMMSG_C,
/* 15417 */    PS_FILE_ID_RABM_DEALSNMSG_C,
/* 15418 */    PS_FILE_ID_RABM_DEALTIMEOUTMSG_C,
/* 15419 */    PS_FILE_ID_RABM_MSGDISPATCH_C,
/* 15420 */    PS_FILE_ID_RABM_COMMON_C,
/* 15421 */    PS_FILE_ID_RABM_MAIN_C,
/* 15422 */    PS_FILE_ID_RABM_RCVMSG_C,
/* 15423 */    PS_FILE_ID_RABM_SNDMSG_C,
/* 15424 */    PS_FILE_ID_SM_AGENT_C,
/* 15425 */    PS_FILE_ID_SMC_COM_C,
/* 15426 */    PS_FILE_ID_SMC_SMRAPI_C,
/* 15427 */    PS_FILE_ID_SM_MAIN_C,
/* 15428 */    PS_FILE_ID_SMR_COM_C,
/* 15429 */    PS_FILE_ID_SM_RCVGMM_C,
/* 15430 */    PS_FILE_ID_SM_RCVRABM_C,
/* 15431 */    PS_FILE_ID_SM_RCVTAF_C,
/* 15432 */    PS_FILE_ID_SMR_TAFMSG_C,
/* 15433 */    PS_FILE_ID_SMS_CSSMPROCESS_C,
/* 15434 */    PS_FILE_ID_SM_SEND_C,
/* 15435 */    PS_FILE_ID_SMS_MAIN_C,
/* 15436 */    PS_FILE_ID_SMS_PSSMPROCESS_C,
/* 15437 */    PS_FILE_ID_SMS_CBMSGPROC_C,
/* 15438 */    PS_FILE_ID_SS_DECODE_C,
/* 15439 */    PS_FILE_ID_SS_ENCODE_C,
/* 15440 */    PS_FILE_ID_SS_ENTITYMNG_C,
/* 15441 */    PS_FILE_ID_SS_RCVAIR_C,
/* 15442 */    PS_FILE_ID_SS_RCVMM_C,
/* 15443 */    PS_FILE_ID_SS_RCVTAF_C,
/* 15444 */    PS_FILE_ID_SS_RCVTIMER_C,
/* 15445 */    PS_FILE_ID_SS_SNDAIR_C,
/* 15446 */    PS_FILE_ID_SS_SNDMM_C,
/* 15447 */    PS_FILE_ID_SS_TASKENTRY_C,
/* 15448 */    PS_FILE_ID_TC_C,
/* 15449 */    PS_FILE_ID_VC_MAIN_C,
/* 15450 */    PS_FILE_ID_VC_API_C,
/* 15451 */    PS_FILE_ID_VC_SEND_MSG_C,
/* 15452 */    PS_FILE_ID_NAS_FSM_C,
/* 15453 */    PS_FILE_ID_NAS_MMCCOMM_C,
/* 15454 */    PS_FILE_ID_NAS_MMCBGMAIN_C,
/* 15455 */    PS_FILE_ID_NAS_MMCBGPROCACT_C,
/* 15456 */    PS_FILE_ID_NAS_FSMMMCTBL_C,
/* 15457 */    PS_FILE_ID_NAS_MMCBGPREPROC_C,
/* 15458 */    PS_FILE_ID_NAS_MMCLISTPROCACT_C,
/* 15459 */    PS_FILE_ID_NAS_MMCINTERNALLISTPROCACT_C,
/* 15460 */    PS_FILE_ID_NAS_MMC_FSM_SWITCHON_C,
/* 15461 */    PS_FILE_ID_NAS_MMC_FSM_PLMN_SELECTION_C,
/* 15462 */    PS_FILE_ID_NAS_MMC_FSM_PLMN_SELECTION_TBL_C,
/* 15463 */    PS_FILE_ID_NAS_MMC_PLMN_SELECTION_STRATEGY_C,
/* 15464 */    PS_FILE_ID_NAS_MMC_FSM_ANYCELL_SEARCH_C,
/* 15465 */    PS_FILE_ID_NAS_MMC_FSM_ANYCELL_SEARCH_TBL_C,
/* 15466 */    PS_FILE_ID_NAS_MMC_COM_FUNC_C,
/* 15467 */    PS_FILE_ID_NAS_MMCPROCUSIM_C,
/* 15468 */    PS_FILE_ID_GMM_PROC_LRESULT_C,
/* 15469 */    PS_FILE_ID_NAS_MMC_CTX_C,
/* 15470 */    PS_FILE_ID_NAS_MMC_FSM_INTER_SYS_CELL_RESELECT_C,
/* 15471 */    PS_FILE_ID_NAS_MMC_FSMMAIN_C,
/* 15472 */    PS_FILE_ID_NAS_RABM_MGR_C,
/* 15473 */    PS_FILE_ID_NAS_RABM_MSG_PROC_C,
/* 15474 */    PS_FILE_ID_NAS_RABM_FASTDORM_C,
/* 15475 */    PS_FILE_ID_NAS_SM_MULTI_MODE_C,
/* 15476 */    PS_FILE_ID_NAS_MMC_SND_MM_C,
/* 15477 */    PS_FILE_ID_NAS_MMC_SND_GMM_C,
/* 15478 */    PS_FILE_ID_NAS_MMC_SND_LMM_C,
/* 15479 */    PS_FILE_ID_NAS_MMC_SND_GUAS_C,
/* 15480 */    PS_FILE_ID_NAS_MMC_SND_INTERNALMSG_C,
/* 15481 */    PS_FILE_ID_NAS_MMC_SND_OM_C,
/* 15482 */    PS_FILE_ID_NAS_MMC_SND_MSCC_C,
/* 15483 */    PS_FILE_ID_NAS_MMC_PROC_REG_RSLT_C,
/* 15484 */    PS_FILE_ID_NAS_MMCMAIN_C,
/* 15485 */    PS_FILE_ID_NAS_MMCFSMPOWEROFF_C,
/* 15486 */    PS_FILE_ID_NAS_MMPROCLRESULT_C,
/* 15487 */    PS_FILE_ID_MN_APS_MULTI_MODE_C,
/* 15488 */    PS_FILE_ID_MN_APS_IP_FILTER_C,
/* 15489 */    PS_FILE_ID_NAS_MMC_FSM_SYSCFG_C,
/* 15490 */    PS_FILE_ID_NAS_MMC_FSMSYSCFG_TBL_C,
/* 15491 */    PS_FILE_ID_NAS_MMC_FSM_INTER_SYS_HO_C,
/* 15492 */    PS_FILE_ID_NAS_MMC_FSM_INTER_SYS_CCO_C,
/* 15493 */    PS_FILE_ID_NAS_MMC_FSM_INTER_SYS_CELLRESEL_C,
/* 15494 */    PS_FILE_ID_NAS_MMC_FSM_INTER_SYS_OOS_C,
/* 15495 */    PS_FILE_ID_NAS_MMC_FSM_PLMN_LIST_C,
/* 15496 */    PS_FILE_ID_NAS_MMC_FSM_PLMN_LIST_TBL_C,
/* 15497 */    PS_FILE_ID_NAS_MMC_FSM_INTER_SYS_HO_TBL_C,
/* 15498 */    PS_FILE_ID_NAS_MMC_FSM_INTER_SYS_CCO_TBL_C,
/* 15499 */    PS_FILE_ID_NAS_MMC_FSM_INTER_SYS_OOS_TBL_C,
/* 15500 */    PS_FILE_ID_NAS_MMC_FSM_INTER_SYS_CELLRESEL_TBL_C,
/* 15501 */    PS_FILE_ID_NAS_MMC_FSM_SWITCH_ON_TBL_C,
/* 15502 */    PS_FILE_ID_NAS_MMC_FSM_POWER_OFF_TBL_C,
/* 15503 */    PS_FILE_ID_NAS_MMC_FSM_HIGH_PRIO_PLMN_SEARCH_TBL_C,
/* 15504 */    PS_FILE_ID_NAS_MMC_FSM_HIGH_PRIO_PLMN_SEARCH_C,
/* 15505 */    PS_FILE_ID_NAS_MMC_FSM_BG_PLMN_SEARCH_TBL_C,
/* 15506 */    PS_FILE_ID_NAS_MMC_FSM_BG_PLMN_SEARCH_C,
/* 15507 */    PS_FILE_ID_NAS_MMC_PROC_SUSPEND_C,
/* 15508 */    PS_FILE_ID_NAS_MMC_PROC_NIVM_C,
/* 15509 */    PS_FILE_ID_NASMMC_TIMERMGMT_C,
/* 15510 */    PS_FILE_ID_NASMML_CTX_C,
/* 15511 */    PS_FILE_ID_NASMML_MSGPROC_C,
/* 15512 */    PS_FILE_ID_NASMML_LIB_C,
/* 15513 */    PS_FILE_ID_NAS_UTRANCTRL_COMM_FUNC_C,
/* 15514 */    PS_FILE_ID_NAS_UTRANCTRL_CTX_C,
/* 15515 */    PS_FILE_ID_NAS_UTRANCTRL_FSM_MAIN_C,
/* 15516 */    PS_FILE_ID_NAS_UTRANCTRL_FSM_MAIN_TBL_C,
/* 15517 */    PS_FILE_ID_NAS_UTRANCTRL_MAIN_C,
/* 15518 */    PS_FILE_ID_NAS_UTRANCTRL_PROC_NVIM_C,
/* 15519 */    PS_FILE_ID_NAS_UTRANCTRL_FSM_PLMN_SELECTION_C,
/* 15520 */    PS_FILE_ID_NAS_UTRANCTRL_FSM_PLMN_SELECTION_TBL_C,
/* 15521 */    PS_FILE_ID_NAS_UTRANCTRL_FSM_SYSCFG_C,
/* 15522 */    PS_FILE_ID_NAS_UTRANCTRL_FSM_SYSCFG_TBL_C,
/* 15523 */    PS_FILE_ID_NAS_UTRANCTRL_FSM_POWEROFF_C,
/* 15524 */    PS_FILE_ID_NAS_UTRANCTRL_FSM_POWEROFF_TBL_C,
/* 15525 */    PS_FILE_ID_NAS_UTRANCTRL_FSM_SWITCHON_C,
/* 15526 */    PS_FILE_ID_NAS_UTRANCTRL_FSM_SWITCHON_TBL_C,
/* 15527 */    PS_FILE_ID_NAS_UTRANCTRL_FSM_MODE_CHANGE_C,
/* 15528 */    PS_FILE_ID_NAS_UTRANCTRL_FSM_MODE_CHANGE_TBL_C,
/* 15529 */    PS_FILE_ID_NAS_UTRANCTRL_MNTN_C,
/* 15530 */    PS_FILE_ID_NAS_USIMMAPI_C,
/* 15531 */    PS_FILE_ID_NAS_USIMM_API_MNTN_C,
/* 15532 */    PS_FILE_ID_NAS_MM_ECALL_C,
/* 15533 */    PS_FILE_ID_NAS_MM_PREPORC_C,
/* 15534 */    PS_FILE_ID_NAS_MNTN_C,
/* 15535 */    PS_FILE_ID_NAS_SNDUSIMM_C,
/* 15536 */    PS_FILE_ID_NAS_MSCC_SND_IMSA_C,
/* 15537 */    PS_FILE_ID_NAS_MSCC_PRE_PROC_TBL_C,
/* 15538 */    PS_FILE_ID_NAS_MSCC_SND_MMA_C,
/* 15539 */    PS_FILE_ID_NAS_MSCC_CTX_C,
/* 15540 */    PS_FILE_ID_NAS_MSCC_TIMER_MGMT_C,
/* 15541 */    PS_FILE_ID_NAS_MSCC_PRE_PROC_ACT_C,
/* 15542 */    PS_FILE_ID_NAS_MSCC_PROC_NVIM_C,
/* 15543 */    PS_FILE_ID_NAS_MSCC_MAIN_C,
/* 15544 */    PS_FILE_ID_NAS_MSCC_FSM_POWER_OFF_TBL_C,
/* 15545 */    PS_FILE_ID_NAS_MSCC_FSM_POWER_OFF_C,
/* 15546 */    PS_FILE_ID_NAS_MSCC_SND_XSD_C,
/* 15547 */    PS_FILE_ID_NAS_MSCC_SND_HSD_C,
/* 15548 */    PS_FILE_ID_NAS_MSCC_SND_MMC_C,
/* 15549 */    PS_FILE_ID_NAS_MSCC_SND_RRM_C,
/* 15550 */    PS_FILE_ID_NAS_MSCC_FSM_SWITCH_ON_C,
/* 15551 */    PS_FILE_ID_NAS_MSCC_FSM_SWITCH_ON_TBL_C,
/* 15552 */    PS_FILE_ID_NAS_MSCC_FSM_SYS_ACQ_C,
/* 15553 */    PS_FILE_ID_NAS_MSCC_FSM_SYS_ACQ_TBL_C,
/* 15554 */    PS_FILE_ID_NAS_MSCC_SND_INTERNAL_MSG_C,
/* 15555 */    PS_FILE_ID_NAS_MSCC_FSM_MAIN_C,
/* 15556 */    PS_FILE_ID_NAS_MSCC_FSM_MAIN_TBL_C,
/* 15557 */    PS_FILE_ID_NAS_MSCC_MNTN_C,
/* 15558 */    PS_FILE_ID_NAS_MSCC_FSM_SYS_CFG_TBL_C,
/* 15559 */    PS_FILE_ID_NAS_MSCC_FSM_SYS_CFG_C,
/* 15560 */    PS_FILE_ID_NAS_MSCC_MSG_PRIO_COMPARE_C,
/* 15561 */    PS_FILE_ID_NAS_MSCC_COM_FUNC_C,
/* 15562 */    PS_FILE_ID_NAS_MSCC_SYS_ACQ_STRATEGY_C,
/* 15563 */    PS_FILE_ID_NAS_MSCC_FSM_BSR_TBL_C,
/* 15564 */    PS_FILE_ID_NAS_MSCC_FSM_BSR_C,
/* 15565 */    PS_FILE_ID_NAS_MSCC_MLPL_MSPL_PARSE_C,
/* 15566 */    PS_FILE_ID_NAS_MSCC_MLPL_MSPL_API_C,
/* 15567 */    PS_FILE_ID_NAS_MSCC_PROC_USIM_C,
/* 15568 */    PS_FILE_ID_NAS_MMC_FSM_GET_GEO_C,
/* 15569 */    PS_FILE_ID_NAS_MMC_FSM_GET_GEO_TBL_C,
/* 15570 */    PS_FILE_ID_NAS_MMC_SND_CSS_C,
/* 15571 */    PS_FILE_ID_NAS_MMC_SND_CDS_C,
/* 15572 */    PS_FILE_ID_NAS_MMC_SND_APS_C,
/* 15573 */    PS_FILE_ID_NAS_CC_CTX_C,
/* 15574 */    PS_FILE_ID_NAS_CC_PROC_NIVM_C,
/* 15575 */    PS_FILE_ID_NAS_CC_COMMON_C,
/* 15576 */    PS_FILE_ID_NAS_MMC_MSG_PRIO_COMPARE_C,
/* 15577 */    PS_FILE_ID_NAS_MSCC_FSM_CL_INTER_SYS_TBL_C,
/* 15578 */    PS_FILE_ID_NAS_MSCC_FSM_CL_INTER_SYS_C,
/* 15579 */    PS_FILE_ID_NAS_MMC_SND_MTA_C,
/* 15580 */    PS_FILE_ID_NAS_MM_LCS_C,
/* 15581 */    PS_FILE_ID_NAS_MM_SND_LCS_C,
/* 15582 */    PS_FILE_ID_NAS_MM_CTX_C,
/* 15583 */    PS_FILE_ID_NAS_ERRLOG_CCB_CTX_C,

/* 15584 */    PS_FILE_ID_NAS_MSCC_FSM_MODE_SELECTION_TBL_C,
/* 15585 */    PS_FILE_ID_NAS_MSCC_FSM_MODE_SELECTION_C,


/* 15586 */    PS_FILE_ID_NAS_MSCC_SND_EHSM_C,
/* 15587 */    PS_FILE_ID_NAS_MMC_PROC_APS_C,
/* 0x3FFF */    PS_FILE_ID_NAS_BUTT                        = TAF_TEAM_FILE_ID - 1
}PS_NAS_FILE_ID_DEFINE_ENUM;
typedef unsigned long  NAS_FILE_ID_DEFINE_ENUM_UINT32;

typedef enum
{
/* 16384 */     PS_FILE_ID_AT_CHECKFUNC_C                  = TAF_TEAM_FILE_ID,
/* 16385 */     PS_FILE_ID_AT_CMDMSGPROC_C,
/* 16386 */     PS_FILE_ID_AT_CMDPROC_C,
/* 16387 */     PS_FILE_ID_AT_DATAPROC_C,
/* 16388 */     PS_FILE_ID_AT_EVENTREPORT_C,
/* 16389 */     PS_FILE_ID_AT_INPUTPROC_C,
/* 16390 */     PS_FILE_ID_AT_OUTPUTPROC_C,
/* 16391 */     PS_FILE_ID_AT_PARSEBASICCMD_C,
/* 16392 */     PS_FILE_ID_AT_PARSECMD_C,
/* 16393 */     PS_FILE_ID_AT_PARSEDCMD_C,
/* 16394 */     PS_FILE_ID_AT_PARSEDMCMD_C,
/* 16395 */     PS_FILE_ID_AT_PARSEEXTENDCMD_C,
/* 16396 */     PS_FILE_ID_AT_PARSEPARA_C,
/* 16397 */     PS_FILE_ID_AT_PARSESCMD_C,
/* 16398 */     PS_FILE_ID_AT_QUERYPARACMD_C,
/* 16399 */     PS_FILE_ID_AT_SETPARACMD_C,
/* 16400 */     PS_FILE_ID_MNCALL_C,
/* 16401 */     PS_FILE_ID_MNCALL_API_C,
/* 16402 */     PS_FILE_ID_MNCALL_BC_PROC_C,
/* 16403 */     PS_FILE_ID_MNCALL_FACILITY_DECODE_C,
/* 16404 */     PS_FILE_ID_MNCALL_FACILITY_ENCODE_C,
/* 16405 */     PS_FILE_ID_MNCALL_MGMT_C,
/* 16406 */     PS_FILE_ID_MNCALL_MNCC_PROC_C,
/* 16407 */     PS_FILE_ID_MNCALL_REQ_PROC_C,
/* 16408 */     PS_FILE_ID_MNCALL_SEND_CC_C,
/* 16409 */     PS_FILE_ID_MN_COMM_C,
/* 16410 */     PS_FILE_ID_MNCALL_TASK_C,
/* 16411 */     PS_FILE_ID_MNMSG_USIM_PROC_C,
/* 16412 */     PS_FILE_ID_MNMSG_API_C,
/* 16413 */     PS_FILE_ID_MNMSG_DECODE_C,
/* 16414 */     PS_FILE_ID_MNMSG_ENCODE_C,
/* 16415 */     PS_FILE_ID_MNMSG_REQPROC_C,
/* 16416 */     PS_FILE_ID_MNMSG_REPORT_C,
/* 16417 */     PS_FILE_ID_MNMSG_SENDSMS_C,
/* 16418 */     PS_FILE_ID_MNMSG_COMM_PROC_C,
/* 16419 */     PS_FILE_ID_MNMSG_SMSPROC_C,
/* 16420 */     PS_FILE_ID_MNMSG_SM_COMM_PROC_C,
/* 16421 */     PS_FILE_ID_MNMSG_TIMERPROC_C,
/* 16422 */     PS_FILE_ID_MNMSG_TEST_C,
/* 16423 */     PS_FILE_ID_MNMSG_COMM_C,
/* 16424 */     PS_FILE_ID_MNMSG_CB_COMM_PROC_C,
/* 16425 */     PS_FILE_ID_AT_MSG_PRINT_C,
/* 16426 */     PS_FILE_ID_SSA_APP_C,
/* 16427 */     PS_FILE_ID_SSA_APP_REMOTE_C,
/* 16428 */     PS_FILE_ID_SSA_COMMON_C,
/* 16429 */     PS_FILE_ID_SSA_DECODE_C,
/* 16430 */     PS_FILE_ID_SSA_ENCODE_C,
/* 16431 */     PS_FILE_ID_SSA_PS_C,
/* 16432 */     PS_FILE_ID_TAF_APS_API_C,
/* 16433 */     PS_FILE_ID_TAF_APSASSISTANT_C,
/* 16434 */     PS_FILE_ID_TAF_APSDEALAPIFLOWMSGPARA_C,
/* 16435 */     PS_FILE_ID_TAF_APSDEALAPIFLOWMSGSMACT_C,
/* 16436 */     PS_FILE_ID_TAF_APSDEALAPIPARAMSG_C,
/* 16437 */     PS_FILE_ID_TAF_APSDEALRABMMSG_C,
/* 16438 */     PS_FILE_ID_TAF_APSDEALSMMSG_C,
/* 16439 */     PS_FILE_ID_TAF_APSDEALSNDCPMSG_C,
/* 16440 */     PS_FILE_ID_TAF_CCALOCAL_C,
/* 16441 */     PS_FILE_ID_TAF_CCARMOTE_C,
/* 16442 */     PS_FILE_ID_TAF_MMI_STRPARSE_C,
/* 16443 */     PS_FILE_ID_TAF_SPEECH_C,
/* 16444 */     PS_FILE_ID_TAF_SPEECH_PSACS_C,
/* 16445 */     PS_FILE_ID_TAF_STATUS_C,
/* 16446 */     PS_FILE_ID_TAF_TAFM_APP_C,
/* 16447 */     PS_FILE_ID_TAF_TAFM_APPLOCAL_C,
/* 16448 */     PS_FILE_ID_TAF_TAFM_APPREMOTE_C,
/* 16449 */     PS_FILE_ID_TAF_TAFM_DB_C,
/* 16450 */     PS_FILE_ID_TAF_TAFM_MSG_C,
/* 16451 */     PS_FILE_ID_TAF_TAFM_PS_C,
/* 16452 */     PS_FILE_ID_TAF_APPGNA_C,
/* 16453 */     PS_FILE_ID_TAF_APPSMA_C,
/* 16454 */     PS_FILE_ID_MNCALL_CSTPROC_C,
/* 16455 */     PS_FILE_ID_MNCALL_TIMER_C,
/* 16456 */     PS_FILE_ID_AT_CMDCAGPSPROC_C,
/* 16457 */     PS_FILE_ID_AT_SND_MSG_C,
/* 16458 */     PS_FILE_ID_DRVAGENT_TASK_C,
/* 16459 */     PS_FILE_ID_DRVAGENTMSGPROC_C,
/* 16460 */     PS_FILE_ID_MN_COMM_API_C,
/* 16461 */     PS_FILE_ID_AT_PARSECORE_C,
/* 16462 */     PS_FILE_ID_AT_MNTN_C,
/* 16463 */     PS_FILE_ID_AT_COMBINEDCMD_C,
/* 16464 */     PS_FILE_ID_TAF_MD5_C,
/* 16465 */     PS_FILE_ID_AT_DEVICECMD_C,
/* 16466 */     PS_FILE_ID_AT_BASICCMD_C,
/* 16467 */     PS_FILE_ID_AT_EXTENDCMD_C,
/* 16468 */     PS_FILE_ID_AT_EXTENDPRIVATECMD_C,
/* 16469 */     PS_FILE_ID_AT_TIMER_C,
/* 16470 */     PS_FILE_ID_APP_VCOM_DEV_C,
/* 16471 */     PS_FILE_ID_ADS_INIT_C,
/* 16472 */     PS_FILE_ID_ADS_UPLINK_C,
/* 16473 */     PS_FILE_ID_ADS_DOWNLINK_C,
/* 16474 */     PS_FILE_ID_ADS_CTX_C,
/* 16475 */     PS_FILE_ID_ADS_TIMERMGMT_C,
/* 16476 */     PS_FILE_ID_ADS_DEBUG_C,
/* 16477 */     PS_FILE_ID_ADS_FILTER_C,
/* 16478 */     PS_FILE_ID_ALINK_C,
/* 16479 */     PS_FILE_ID_CSD_UP_LINK_C,
/* 16480 */     PS_FILE_ID_CSD_DOWN_LINK_C,
/* 16481 */     PS_FILE_ID_CSD_CTX_C,
/* 16482 */     PS_FILE_ID_CSD_INIT_C,
/* 16483 */     PS_FILE_ID_RNIC_INITS_C,
/* 16484 */     PS_FILE_ID_RNIC_TIMERMGMT_C,
/* 16485 */     PS_FILE_ID_RNIC_CTX_C,
/* 16486 */     PS_FILE_ID_RNIC_ENTITY_C,
/* 16487 */     PS_FILE_ID_RNIC_DEV_C,
/* 16488 */     PS_FILE_ID_RNIC_PROCMSG_C,
/* 16489 */     PS_FILE_ID_RNIC_DEMAND_DIAL_FILE_IO_C,
/* 16490 */     PS_FILE_ID_TAF_APS_TIMERMGMT_C,
/* 16491 */     PS_FILE_ID_TAF_APS_CONTEXT_C,
/* 16492 */     PS_FILE_ID_TAF_APS_PROCNVIM_C,
/* 16493 */     PS_FILE_ID_TAF_APS_DSFLOWSTATS_C,
/* 16494 */     PS_FILE_ID_TAF_APS_SNDSNDCP_C,
/* 16495 */     PS_FILE_ID_TAF_APS_PROCFILTER_C,
/* 16496 */     PS_FILE_ID_TAF_APS_COMFUNC_C,
/* 16497 */     PS_FILE_ID_TAF_APS_DECODE_C,
/* 16498 */     PS_FILE_ID_TAF_APS_ENCODE_C,
/* 16499 */     PS_FILE_ID_TAF_APS_FSM_MAIN_C,
/* 16500 */     PS_FILE_ID_TAF_APS_FSM_MAIN_TBL_C,
/* 16501 */     PS_FILE_ID_TAF_APS_FSM_MSACTIVATING_C,
/* 16502 */     PS_FILE_ID_TAF_APS_FSM_MSACTIVATING_TBL_C,
/* 16503 */     PS_FILE_ID_TAF_APS_FSM_MSDEACTIVATING_C,
/* 16504 */     PS_FILE_ID_TAF_APS_FSM_MSDEACTIVATING_TBL_C,
/* 16505 */     PS_FILE_ID_TAF_APS_FSM_MSMODIFYING_C,
/* 16506 */     PS_FILE_ID_TAF_APS_FSM_MSMODIFYING_TBL_C,
/* 16507 */     PS_FILE_ID_TAF_APS_FSM_NWACTIVATING_C,
/* 16508 */     PS_FILE_ID_TAF_APS_FSM_NWACTIVATING_TBL_C,
/* 16509 */     PS_FILE_ID_TAF_APS_MAIN_C,
/* 16510 */     PS_FILE_ID_TAF_APS_PREPROC_C,
/* 16511 */     PS_FILE_ID_TAF_APS_PREPROCTAL_C,
/* 16512 */     PS_FILE_ID_TAF_APS_PROCTFT_C,
/* 16513 */     PS_FILE_ID_TAF_APS_SNDAT_C,
/* 16514 */     PS_FILE_ID_TAF_APS_SNDESM_C,
/* 16515 */     PS_FILE_ID_TAF_APS_SNDL4A_C,
/* 16516 */     PS_FILE_ID_TAF_APS_SNDSM_C,
/* 16517 */     PS_FILE_ID_TAF_APS_SNDRABM_C,
/* 16518 */     PS_FILE_ID_TAF_APS_SND_ND_C,
/* 16519 */     PS_FILE_ID_TAF_APS_GET_PDPID_LIST_C,
/* 16520 */     PS_FILE_ID_TAF_APS_MNTN_C,
/* 16521 */     PS_FILE_ID_TAF_APS_SND_XCC_C,
/* 16522 */     PS_FILE_ID_TAF_APS_SND_HSM_C,
/* 16523 */     PS_FILE_ID_TAF_APS_SND_DHCP_C,
/* 16524 */     PS_FILE_ID_TAF_APS_SND_EHSM_C,
/* 16525 */     PS_FILE_ID_TAF_APS_FSM_CDATA_DISCING_C,
/* 16526 */     PS_FILE_ID_TAF_APS_FSM_CDATA_ESTING_C,
/* 16527 */     PS_FILE_ID_TAF_APS_FSM_CDATA_ESTING_TBL_C,
/* 16528 */     PS_FILE_ID_TAF_APS_FSM_CDATA_DISCING_TBL_C,
/* 16529 */     PS_FILE_ID_TAF_APS_SND_PPP_C,
/* 16530 */     PS_FILE_ID_TAF_APS_SND_CDS_C,
/* 16531 */     PS_FILE_ID_TAF_APS_SND_RLP_C,
/* 16532 */     PS_FILE_ID_TAF_APS_SND_INTERNALMSG_C,
/* 16533 */     PS_FILE_ID_TAF_APS_PROC_EPDSZID_C,
/* 16534 */     PS_FILE_ID_TAF_FSM_C,
/* 16535 */     PS_FILE_ID_TAF_AGENT_C,
/* 16536 */     PS_FILE_ID_TAF_AGENT_CTX_C,
/* 16537 */     PS_FILE_ID_TAFSDC_CTX_C,
/* 16538 */     PS_FILE_ID_TAF_SDC_LIB_C,
/* 16539 */     PS_FILE_ID_TAF_MTA_UNSILICITED_REPORT_C,
/* 16540 */     PS_FILE_ID_TAF_APS_SNDADS_C,
/* 16541 */     PS_FILE_ID_TAF_MTC_API_C,
/* 16542 */     PS_FILE_ID_MN_CALL_CTX_C,
/* 16543 */     PS_FILE_ID_MN_CALL_PROC_NIVM_C,
/* 16544 */     PS_FILE_ID_MN_MSG_CTX_C,
/* 16545 */     PS_FILE_ID_MN_MSG_PROC_NIVM_C,
/* 16546 */     PS_FILE_ID_VC_MNTN_C,
/* 16547 */     PS_FILE_ID_VC_PROC_NIVM_C,
/* 16548 */     PS_FILE_ID_TAF_CBA_CTX_C,
/* 16549 */     PS_FILE_ID_TAF_CBA_MAIN_C,
/* 16550 */     PS_FILE_ID_TAF_CBA_PROC_AS_C,
/* 16551 */     PS_FILE_ID_TAF_CBA_PROC_ETWS_PRIM_NTF_C,
/* 16552 */     PS_FILE_ID_TAF_CBA_PROC_MMC_C,
/* 16553 */     PS_FILE_ID_TAF_CBA_PROC_MMA_C,
/* 16554 */     PS_FILE_ID_TAF_CBA_PROC_AT_C,
/* 16555 */     PS_FILE_ID_TAF_CBA_PROC_NVIM_C,
/* 16556 */     PS_FILE_ID_TAF_CBA_MNTN_C,
/* 16557 */     PS_FILE_ID_TAF_CBA_PROC_USIM_C,
/* 16558 */     PS_FILE_ID_TAF_CBA_COMM_FUNC_C,
/* 16559 */     PS_FILE_ID_TAF_CBA_PROC_TIMER_C,
/* 16560 */     PS_FILE_ID_XML_COMM_C,
/* 16561 */     PS_FILE_ID_TAF_MTA_COMM_C,
/* 16562 */     PS_FILE_ID_TAF_MTA_CTX_C,
/* 16563 */     PS_FILE_ID_TAF_MTA_MAIN_C,
/* 16564 */     PS_FILE_ID_TAF_MTA_AGPS_C,
/* 16565 */     PS_FILE_ID_TAF_MTA_AGPS_MSG_CONVERT_XML_C,
/* 16566 */     PS_FILE_ID_TAF_MTA_AGPS_XML_FILL_MSG_C,
/* 16567 */     PS_FILE_ID_TAF_MTA_TIMER_MGMT_C,
/* 16568 */     PS_FILE_ID_TAF_MTA_MNTN_C,
/* 16569 */     PS_FILE_ID_TAF_MTA_CAGPS_DECODE_C,
/* 16570 */     PS_FILE_ID_TAF_MTA_CAGPS_ENCODE_C,
/* 16571 */     PS_FILE_ID_TAF_MTA_CAGPS_CTX_C,
/* 16572 */     PS_FILE_ID_TAF_MTA_CAGPS_MNTN_C,
/* 16573 */     PS_FILE_ID_TAF_MTA_CAGPS_PROC_C,
/* 16574 */     PS_FILE_ID_TAF_MTA_SECURE_C,
/* 16575 */     PS_FILE_ID_TAF_MTA_PHY_C,
/* 16576 */     PS_FILE_ID_TAF_MTA_MBMS_C,
/* 16577 */     PS_FILE_ID_TAF_MTA_MODEM_INFO_QUERY_C,
/* 16578 */     PS_FILE_ID_AT_ABORTPARACMD_C,
/* 16579 */     PS_FILE_ID_AT_TESTPARACMD_C,
/* 16580 */     PS_FILE_ID_AT_CTX_C,
/* 16581 */     PS_FILE_ID_AT_INIT_C,
/* 16582 */     PS_FILE_ID_AT_CMD_CALL_PROC_C,
/* 16583 */     PS_FILE_ID_AT_CMD_SUPS_PROC_C,
/* 16584 */     PS_FILE_ID_AT_CMD_SMS_PROC_C,
/* 16585 */     PS_FILE_ID_AT_CMD_PACKET_PROC_C,
/* 16586 */     PS_FILE_ID_AT_CMD_PB_PROC_C,
/* 16587 */     PS_FILE_ID_AT_CMD_SIM_PROC_C,
/* 16588 */     PS_FILE_ID_AT_CMD_FTM_PROC_C,
/* 16589 */     PS_FILE_ID_AT_CMD_MISC_PROC_C,
/* 16590 */     PS_FILE_ID_TAF_SPM_FSM_MAIN_TBL_C,
/* 16591 */     PS_FILE_ID_TAF_SPM_FSM_MAIN_C,
/* 16592 */     PS_FILE_ID_TAF_SPM_FSM_SERVICE_CTRL_TBL_C,
/* 16593 */     PS_FILE_ID_TAF_SPM_FSM_SERVICE_CTRL_C,
/* 16594 */     PS_FILE_ID_TAF_SPM_MAIN_C,
/* 16595 */     PS_FILE_ID_TAF_SPM_MNTN_C,
/* 16596 */     PS_FILE_ID_TAF_SPM_CTX_C,
/* 16597 */     PS_FILE_ID_TAF_SPM_TIMERMGMT_C,
/* 16598 */     PS_FILE_ID_TAF_SPM_SND_INTERNAL_MSG_C,
/* 16599 */     PS_FILE_ID_TAF_SPM_PROC_NVIM_C,
/* 16600 */     PS_FILE_ID_TAF_SPM_SND_USIM_C,
/* 16601 */     PS_FILE_ID_TAF_SPM_SERVICE_DOMAIN_SEL_PROC_C,
/* 16602 */     PS_FILE_ID_TAF_MMA_SND_IMSA_C,
/* 16603 */     PS_FILE_ID_TAF_SPM_REDIAL_C,
/* 16604 */     PS_FILE_ID_TAF_MMA_API_C,
/* 16605 */     PS_FILE_ID_TAF_SPM_SND_IMSA_C,
/* 16606 */     PS_FILE_ID_TAF_SPM_PREPROC_TBL_C,
/* 16607 */     PS_FILE_ID_TAF_SPM_PREPROC_ACT_C,
/* 16608 */     PS_FILE_ID_TAF_SPM_COM_FUNC_C,
/* 16609 */     PS_FILE_ID_MNMSG_SENDSPM_C,
/* 16610 */     PS_FILE_ID_TAF_MMIENCODE_C,
/* 16611 */     PS_FILE_ID_MMA_NETWORKNAME_TBL_C,
/* 16612 */     PS_FILE_ID_TAF_STD_LIB_C,
/* 16613 */     PS_FILE_ID_DMS_CORE_C,
/* 16614 */     PS_FILE_ID_DMS_ACM_AT_RX_C,
/* 16615 */     PS_FILE_ID_DMS_ACM_AT_TX_C,
/* 16616 */     PS_FILE_ID_DMS_NDIS_C,
/* 16617 */     PS_FILE_ID_DMS_DEBUG_C,
/* 16618 */     PS_FILE_ID_TAF_MMA_MAIN_C,
/* 16619 */     PS_FILE_ID_TAF_MMA_FSM_MAIN_C,
/* 16620 */     PS_FILE_ID_TAF_MMA_PREPROC_ACT_C,
/* 16621 */     PS_FILE_ID_TAF_MMA_FSM_MAIN_TBL_C,
/* 16622 */     PS_FILE_ID_TAF_MMA_PREPROC_TBL_C,
/* 16623 */     PS_FILE_ID_TAF_MMA_FSM_PHONE_MODE_C,
/* 16624 */     PS_FILE_ID_TAF_MMA_FSM_PHONE_MODE_TBL_C,
/* 16625 */     PS_FILE_ID_TAF_MMA_PHONE_MODE_C,
/* 16626 */     PS_FILE_ID_TAF_MMA_PROC_NVIM_C,
/* 16627 */     PS_FILE_ID_TAF_MMA_CTX_C,
/* 16628 */     PS_FILE_ID_TAF_MMA_SND_INTERNAL_MSG_C,
/* 16629 */     PS_FILE_ID_TAF_MMA_MNTN_C,
/* 16630 */     PS_FILE_ID_TAF_MMA_MSG_PRIO_COMPARE_C,
/* 16631 */     PS_FILE_ID_TAF_MMA_TIMERMGMT_C,
/* 16632 */     PS_FILE_ID_TAF_MMA_FSM_IMS_SWITCH_C,
/* 16633 */     PS_FILE_ID_TAF_MMA_FSM_IMS_SWITCH_TBL_C,
/* 16634 */     PS_FILE_ID_TAF_MMA_COM_FUNC_C,
/* 16635 */     PS_FILE_ID_TAF_MMA_PROCUSIM_C,
/* 16636 */     PS_FILE_ID_TAF_MMA_FSM_SYS_CFG_C,
/* 16637 */     PS_FILE_ID_TAF_MMA_FSM_SYS_CFG_TBL_C,
/* 16638 */     PS_FILE_ID_TAF_MMA_SND_APP_C,
/* 16639 */     PS_FILE_ID_TAF_MMA_PROC_USIM_C,
/* 16640 */     PS_FILE_ID_TAF_MMA_SND_TAF_C,
/* 16641 */     PS_FILE_ID_TAF_MMA_SND_XSMS_C,
/* 16642 */     PS_FILE_ID_MN_CALL_IMSA_PROC_C,
/* 16643 */     PS_FILE_ID_TAF_MMA_SND_UPHY_C,
/* 16644 */     PS_FILE_ID_MTC_COMM_C,
/* 16645 */     PS_FILE_ID_MTC_CTX_C,
/* 16646 */     PS_FILE_ID_MTC_DEBUG_C,
/* 16647 */     PS_FILE_ID_MTC_INIT_C,
/* 16648 */     PS_FILE_ID_MTC_INTRUSION_C,
/* 16649 */     PS_FILE_ID_MTC_MAIN_C,
/* 16650 */     PS_FILE_ID_MTC_RF_LCD_INTRUSION_C,
/* 16651 */     PS_FILE_ID_MTC_CALC_FREQ_C,
/* 16652 */     PS_FILE_ID_MTC_MRMA_C,
/* 16653 */     PS_FILE_ID_AT_CMD_IMS_PROC_C,
/* 16654 */     PS_FILE_ID_MTC_PS_TRANSFER_C,
/* 16655 */     PS_FILE_ID_TAF_MTA_MODEM_CONTROL_C,
/* 16656 */     PS_FILE_ID_CMMCA_INIT_C,
/* 16657 */     PS_FILE_ID_CMMCA_MAIN_C,
/* 16658 */     PS_FILE_ID_CMMCA_MNTN_C,
/* 16659 */     PS_FILE_ID_CMMCA_CTX_C,
/* 16660 */     PS_FILE_ID_CMMCA_CTX_PKT_C,
/* 16661 */     PS_FILE_ID_CMMCA_PARSE_CMD_C,
/* 16662 */     PS_FILE_ID_CMMCA_PKT_MGMT_C,
/* 16663 */     PS_FILE_ID_CMMCA_MEAS_RESEL_MGMT_C,
/* 16664 */     PS_FILE_ID_CMMCA_TIMER_MGMT_C,
/* 16665 */     PS_FILE_ID_CMMCA_REG_MGMT_C,
/* 16666 */     PS_FILE_ID_MN_CALL_PROC_VC_C,
/* 16667 */     PS_FILE_ID_MN_CALL_SEND_APP_C,
/* 16668 */     PS_FILE_ID_MN_CALL_PROC_TAF_C,
/* 16669 */     PS_FILE_ID_MN_CALL_PROC_MMA_C,
/* 16670 */     PS_FILE_ID_TAF_MMA_SND_MSCC_C,
/* 16671 */     PS_FILE_ID_TAF_MMA_SND_STK_C,
/* 16672 */     PS_FILE_ID_TAF_CDMA_PLUS_TRANSLATE_C,
/* 16673 */     PS_FILE_ID_TAF_XSMS_API_C,
/* 16674 */     PS_FILE_ID_TAF_XSMS_CTX_C,
/* 16675 */     PS_FILE_ID_TAF_XSMS_DECODE_C,
/* 16676 */     PS_FILE_ID_TAF_XSMS_ENCODE_C,
/* 16677 */     PS_FILE_ID_TAF_XSMS_MO_FSM_MAIN_C,
/* 16678 */     PS_FILE_ID_TAF_XSMS_MO_FSM_MAIN_TBL_C,
/* 16679 */     PS_FILE_ID_TAF_XSMS_MSG_PROC_C,
/* 16680 */     PS_FILE_ID_TAF_XSMS_MT_FSM_MAIN_C,
/* 16681 */     PS_FILE_ID_TAF_XSMS_MT_FSM_MAIN_TBL_C,
/* 16682 */     PS_FILE_ID_TAF_XSMS_SND_AT_C,
/* 16683 */     PS_FILE_ID_TAF_XSMS_SND_XCC_C,
/* 16684 */     PS_FILE_ID_TAF_XSMS_SND_CAS_C,
/* 16685 */     PS_FILE_ID_TAF_XSMS_TIMER_C,
/* 16686 */     PS_FILE_ID_TAF_XSMS_UIM_PROC_C,
/* 16687 */     PS_FILE_ID_TAF_CS_CALL_MAIN_C,
/* 16688 */     PS_FILE_ID_TAF_CS_CALL_CTX_C,
/* 16689 */     PS_FILE_ID_TAF_X_CALL_MAIN_C,
/* 16690 */     PS_FILE_ID_TAF_X_CALL_CTX_C,
/* 16691 */     PS_FILE_ID_TAF_X_CALL_SND_MMA_C,
/* 16692 */     PS_FILE_ID_TAF_X_CALL_SND_XCC_C,
/* 16693 */     PS_FILE_ID_TAF_X_CALL_SND_APP_C,
/* 16694 */     PS_FILE_ID_TAF_X_CALL_SND_VC_C,
/* 16695 */     PS_FILE_ID_TAF_X_CALL_PROC_XCC_C,
/* 16696 */     PS_FILE_ID_TAF_X_CALL_PROC_APP_C,
/* 16697 */     PS_FILE_ID_TAF_X_CALL_PROC_MMA_C,
/* 16698 */     PS_FILE_ID_TAF_X_CALL_PROC_VC_C,
/* 16699 */     PS_FILE_ID_TAF_X_CALL_MNTN_C,
/* 16700 */     PS_FILE_ID_TAF_X_CALL_PROC_XSD_C,
/* 16701 */     PS_FILE_ID_TAF_X_CALL_TIMERMGMT_C,
/* 16702 */     PS_FILE_ID_TAF_X_CALL_PROC_TIMER_C,
/* 16703 */     PS_FILE_ID_TAF_X_CALL_PROC_USIM_C,
/* 16704 */     PS_FILE_ID_TAF_X_CALL_PROC_NVIM_C,
/* 16705 */     PS_FILE_ID_TAF_MMA_SND_OM_C,
/* 16706 */     PS_FILE_ID_TAF_APS_FSM_CDATA_HANDOFF_C,
/* 16707 */     PS_FILE_ID_TAF_APS_FSM_CDATA_HANDOFF_TBL_C,
/* 16708 */     PS_FILE_ID_TAF_XPDS_MAIN_C,
/* 16709 */     PS_FILE_ID_TAF_XPDS_CTX_C,
/* 16710 */     PS_FILE_ID_TAF_XPDS_TIMER_MGMT_C,
/* 16711 */     PS_FILE_ID_TAF_XPDS_COMM_FUNC_C,
/* 16712 */     PS_FILE_ID_TAF_XPDS_ENCODE_C,
/* 16713 */     PS_FILE_ID_TAF_XPDS_DECODE_C,
/* 16714 */     PS_FILE_ID_TAF_XPDS_MNTN_C,
/* 16715 */     PS_FILE_ID_TAF_XPDS_PRE_PROC_C,
/* 16716 */     PS_FILE_ID_TAF_XPDS_PRE_PROC_TBL_C,
/* 16717 */     PS_FILE_ID_TAF_XPDS_FSM_MAIN_C,
/* 16718 */     PS_FILE_ID_TAF_XPDS_FSM_MAIN_TBL_C,
/* 16719 */     PS_FILE_ID_TAF_XPDS_FSM_CP_LINK_CTRL_C,
/* 16720 */     PS_FILE_ID_TAF_XPDS_FSM_CP_LINK_CTRL_TBL_C,
/* 16721 */     PS_FILE_ID_TAF_XPDS_FSM_UP_LINK_CTRL_C,
/* 16722 */     PS_FILE_ID_TAF_XPDS_FSM_UP_LINK_CTRL_TBL_C,
/* 16723 */     PS_FILE_ID_TAF_XPDS_FSM_MPC_PROC_C,
/* 16724 */     PS_FILE_ID_TAF_XPDS_FSM_MPC_PROC_TBL_C,
/* 16725 */     PS_FILE_ID_TAF_XPDS_FSM_PDE_PROC_C,
/* 16726 */     PS_FILE_ID_TAF_XPDS_FSM_PDE_PROC_TBL_C,
/* 16727 */     PS_FILE_ID_TAF_XPDS_CP_FSM_PDE_PROC_C,
/* 16728 */     PS_FILE_ID_TAF_XPDS_CP_FSM_PDE_PROC_TBL_C,
/* 16729 */     PS_FILE_ID_TAF_XPDS_SND_XSMS_C,
/* 16730 */     PS_FILE_ID_TAF_XPDS_SND_CAS_C,
/* 16731 */     PS_FILE_ID_TAF_XPDS_SND_AT_C,
/* 16732 */     PS_FILE_ID_TAF_XPDS_SND_XCC_C,
/* 16733 */     PS_FILE_ID_TAF_XPDS_SND_INTERNAL_MSG_C,
/* 16734 */     PS_FILE_ID_AT_CMD_CSS_PROC_C,
/* 16735 */     PS_FILE_ID_TAF_X_CALL_ENC_KMC_MSG_C,
/* 16736 */     PS_FILE_ID_TAF_X_CALL_DEC_KMC_MSG_C,
/* 16737 */     PS_FILE_ID_TAF_X_CALL_PROC_XSMS_C,
/* 16738 */     PS_FILE_ID_TAF_X_CALL_PROC_ECC_SRV_C,
/* 16739 */     PS_FILE_ID_TAF_X_CALL_SND_XSMS_C,
/* 16740 */     PS_FILE_ID_TAF_X_CALL_SND_CTTF_C,
/* 16741 */     PS_FILE_ID_TAF_X_CALL_ECC_CIPHER_C,
/* 16742 */     PS_FILE_ID_TAF_X_CALL_PROC_APP_ECC_TEST_MODE_C,
/* 16743 */     PS_FILE_ID_TAF_X_CALL_SND_APP_ECC_TEST_MODE_C,
/* 16744 */     PS_FILE_ID_TAF_X_CALL_PROC_CTTF_C,
/* 16745 */     PS_FILE_ID_TAF_MMA_SND_MTC_C,
/* 16746*/      PS_FILE_ID_TAF_XSMS_SND_XCALL_C,
/* 16747*/      PS_FILE_ID_TAF_APS_PROC_USIM_C,
/* 16748 */     PS_FILE_ID_ADS_MNTN_C,
/* 16749*/      PS_FILE_ID_TAF_CS_CALL_COMM_FUNC_C,

/* 16750*/      PS_FILE_ID_TAF_XSMS_SND_LAC_C,
/* 16751 */     PS_FILE_ID_RNIC_SND_MSG_C,

/* 16752 */     PS_FILE_ID_TAF_SSA_API_C,
/* 16753 */     PS_FILE_ID_TAF_SSA_CTX_C,
/* 16754 */     PS_FILE_ID_TAF_SSA_MAIN_C,
/* 16755 */     PS_FILE_ID_TAF_SSA_PROC_APP_C,
/* 16756 */     PS_FILE_ID_TAF_SSA_PROC_LCS_C,
/* 16757 */     PS_FILE_ID_TAF_SSA_SND_APP_C,
/* 16758 */     PS_FILE_ID_TAF_SSA_SND_LCS_C,
/* 16759 */     PS_FILE_ID_TAF_MTA_CPOS_AGPS_CONVERT_C,
/* 16760 */     PS_FILE_ID_TAF_MTA_CPOS_LPP_CONVERT_C,
/* 16761 */     PS_FILE_ID_TAF_MTA_CPOS_FILL_STRUCT_C,
/* 16762 */     PS_FILE_ID_TAF_MTA_CPOS_CONVERT_XML_C,
/* 16763 */     PS_FILE_ID_TAF_MTA_LPP_C,

/* 16764 */     PS_FILE_ID_TAF_XSMS_OM_ERR_LOG_C,
/* 16765 */     PS_FILE_ID_EDA_COMM_C,
/* 16766 */     PS_FILE_ID_EDA_CTX_C,
/* 16767 */     PS_FILE_ID_EDA_MAIN_C,
/* 16768 */     PS_FILE_ID_EDA_TIMER_MGMT_C,
/* 16769 */     PS_FILE_ID_EDA_SENSORHUB_AGENT_C,
/* 16770 */     PS_FILE_ID_EDA_SENSORHUB_FSM_C,
/* 16771 */     PS_FILE_ID_MTC_SND_MSG_C,

/* 16772 */     PS_FILE_ID_TAF_SSA_PROC_NVIM_C,

/* 16773*/      PS_FILE_ID_TAF_LSMS_SND_IMSA_C,
/* 16774 */     PS_FILE_ID_TAF_LSMS_MO_FSM_MAIN_C,
/* 16775 */     PS_FILE_ID_TAF_LSMS_MO_FSM_MAIN_TBL_C,
/* 16776 */     PS_FILE_ID_TAF_LSMS_MSG_PROC_C,
/* 16777 */     PS_FILE_ID_TAF_LSMS_MT_FSM_MAIN_C,
/* 16778 */     PS_FILE_ID_TAF_LSMS_MT_FSM_MAIN_TBL_C,
/* 16779 */     PS_FILE_ID_TAF_LSMS_TIMER_C,
/* 16780 */     PS_FILE_ID_TAF_LSMS_UIM_PROC_C,
/* 16781 */     PS_FILE_ID_TAF_LSMS_CTX_C,
/* 16783 */     PS_FILE_ID_TAF_LSMS_SND_AT_C,


/* 16784 */     PS_FILE_ID_EDA_SENSORHUB_AR_FSM_C,
/* 16785 */     PS_FILE_ID_EDA_SENSORHUB_SAR_FSM_C,

/* 16786 */     PS_FILE_ID_TAF_SSA_PROC_MMA_C,
/* 16787 */     PS_FILE_ID_TAF_INTERNAL_MSG_C,
/* 16788 */      PS_FILE_ID_TAF_CS_CALL_COMM_APP_PROC_C,


/* 16786 */     PS_FILE_ID_EDA_SENSORHUB_MODEM_FSM_C,
/* 16786 */     PS_FILE_ID_TAF_APS_SND_MMC_C,

/* 16787 */     PS_FILE_ID_FTM_BASE_CMD_C,
/* 16788 */     PS_FILE_ID_FTM_COMM_CMD_C,
/* 16789 */     PS_FILE_ID_FTM_CT_CORE_C,
/* 16790 */     PS_FILE_ID_FTM_MAILBOX_PROC_C,
/* 16791 */     PS_FILE_ID_FTM_COMMON_API_C,
/* 16792 */     PS_FILE_ID_L4A_FUN_C,
/* 16793 */     PS_FILE_ID_L4A_PROC_C,

/* 17407 */     PS_FILE_ID_TAF_BUTT                        = CNAS_TEAM_FILE_ID - 1
}TAF_FILE_ID_DEFINE_ENUM;
typedef unsigned long  TAF_FILE_ID_DEFINE_ENUM_UINT32;

/* PS源文件ID号 */
typedef enum
{
                PS_FILE_ID_ACF_C = LOG_MIN_FILE_ID_PS,
/* 001  */      PS_FILE_ID_API_STUB_C,
/* 002  */      PS_FILE_ID_APP_API_C,
/* 003  */      PS_FILE_ID_APP_API_REG_C,
/* 004  */      PS_FILE_ID_APPINTERFACEAPI_C,

/* 006  */      PS_FILE_ID_ASYNC_C,

/* 023  */      PS_FILE_ID_AUTH_C,
/* 024  */      PS_FILE_ID_BBPTIMER_C,
/* 025  */      PS_FILE_ID_BITENCODE_C,
/* 026  */      PS_FILE_ID_CARDLOCKCIPHER_C,


/* 065  */      PS_FILE_ID_CFDCMPR_C,
/* 066  */      PS_FILE_ID_CFDCMPRV42_C,
/* 067  */      PS_FILE_ID_CFPCMPR_C,
/* 068  */      PS_FILE_ID_CFPCMPR1144_C,
/* 069  */      PS_FILE_ID_CFPCMPR2507_C,
/* 070  */      PS_FILE_ID_CFPCMPRCOMM_C,
/* 071  */      PS_FILE_ID_CM_RCVTAFADAPTER_C,
/* 072  */      PS_FILE_ID_CM_SNDTAFADAPTER_C,
/* 112  */      PS_FILE_ID_ENTHERSTUB_C,
/* 113  */      PS_FILE_ID_ETHERMAIN_C,
/* 201  */      PS_FILE_ID_GBBPTIMER_C,

/* 221  */      PS_FILE_ID_GNA_END_C,
/* 222  */      PS_FILE_ID_GNA_MGR_C,
/* 223  */      PS_FILE_ID_GNA_NPT_C,
/* 224  */      PS_FILE_ID_GNA_STUBSFORWIN_C,
/* 225  */      PS_FILE_ID_GNA_TRANSFER_C,
/* 226  */      PS_FILE_ID_GNA_ULDATA_C,
/* 238  */      PS_FILE_ID_GSLEEPFLOW_C,
/* 239  */      PS_FILE_ID_GSLEEPSLEEP_C,

/* 289  */      PS_FILE_ID_MUX_CORE_C,
/* 290  */      PS_FILE_ID_MUX_DOPRA_C,
/* 291  */      PS_FILE_ID_MUX_WIN_C,
/* 292  */      PS_FILE_ID_NAS_STUB_C,
/* 293  */      PS_FILE_ID_NETHOOK_C,
/* 340  */      PS_FILE_ID_PS_HELP_C,
/* 341  */      PS_FILE_ID_PS_INIT_C,
/* 342  */      PS_FILE_ID_PS_LIB_C,
/* 343  */      PS_FILE_ID_PS_NASHELP_C,
/* 344  */      PS_FILE_ID_PS_REG_RPT_C,
/* 345  */      PS_FILE_ID_PS_RLCSTUB_C,
/* 346  */      PS_FILE_ID_PS_STUB_C,
/* 347  */      PS_FILE_ID_PS_TAFHELP_C,

/* 360  */      PS_FILE_ID_RECURTEST_C,
/* 361  */      PS_FILE_ID_RFA_C,
/* 362  */      PS_FILE_ID_RTC_TIMER_C,
/* 363  */      PS_FILE_ID_SLEEP_FLOW_C,
/* 364  */      PS_FILE_ID_SLEEP_INIT_C,

/* 379  */      PS_FILE_ID_SMT_COM_C,
/* 380  */      PS_FILE_ID_SMT_RCVMMC_C,
/* 381  */      PS_FILE_ID_SMT_RCVSMR_C,
/* 382  */      PS_FILE_ID_SMT_RCVTAF_C,
/* 383  */      PS_FILE_ID_SMT_RCVTIMER_C,
/* 384  */      PS_FILE_ID_SMT_RCVUSIM_C,
/* 385  */      PS_FILE_ID_SMT_SNDSMR_C,
/* 386  */      PS_FILE_ID_SMT_SNDTAF_C,
/* 387  */      PS_FILE_ID_SMT_SNDUSIM_C,
/* 388  */      PS_FILE_ID_SMT_TASKMNG_C,
/* 394  */      PS_FILE_ID_SRCPARSEPRINTF_C,


/* 411  */      PS_FILE_ID_STUB_COMM_C,
/* 412  */      PS_FILE_ID_STUB_MAIN_C,

/* 436  */      PS_FILE_ID_THROUGHPUT_C,
/* 437  */      PS_FILE_ID_TS04_C,
/* 701  */      PS_FILE_ID_HPA_STUB_COMM_C,
/* 702  */      PS_FILE_ID_HPA_STUB_RCV_MSG_C,
/* 703  */      PS_FILE_ID_MONITOR_C,
/* 704  */      PS_FILE_ID_UPDATE_FROM_TF_C,
/* 705  */      PS_FILE_ID_NDIS_CTRL_C,
/* 706  */      PS_FILE_ID_NDIS_DHCPS_C,
/* 707  */      PS_FILE_ID_NDIS_DL_DATA_C,
/* 708  */      PS_FILE_ID_NDIS_COMM_C,
/* 709  */      PS_FILE_ID_NDIS_UL_DATA_C,
/* 710  */      PS_FILE_ID_NDIS_MNTN_C,
/* 711  */      PS_FILE_ID_NDIS_STUB_C,
/* 712  */      PS_FILE_ID_NDIS_USB_ST_STUB_C,
/* 713  */      PS_FILE_ID_SPYSYSTEM_C,



/* 721 */      PS_FILE_ID_VHWUEA1_C,
/* 722 */      PS_FILE_ID_VHWMAIN_C,
/* 723 */      PS_FILE_ID_VHWHDLC_C,
/* 724 */      PS_FILE_ID_VHWMEM_C,
/* 725 */      PS_FILE_ID_AT_AP_DL_DATA_C,
/* 726 */      PS_FILE_ID_AP_COMM_C,
/* 727 */      PS_FILE_ID_STK_API_C,
/* 728 */      PS_FILE_ID_STK_COMM_C,
/* 729 */      PS_FILE_ID_STK_GOBAL_C,
/* 730 */      PS_FILE_ID_STK_SPECIAL_PROC_C,
/* 731 */      PS_FILE_ID_STK_PROC_C,
/* 733 */      PS_FILE_ID_VHW_DATAMOVER_C,
/* V3 R7_7C1 End */
/*  735  */      PS_FILE_ID_GSLEEP_FLOW_C,
/*  736  */      PS_FILE_ID_AGING_TEST_C,
/*  737  */      PS_FILE_ID_OM_OPERATOR_C,
/*  738  */      PS_FILE_ID_DIAG_INIT_C,
/*  739  */      PS_FILE_ID_DIAG_UTILS_C,
/*  742 */       PS_FILE_ID_E5_API_C,
/*  743 */       PS_FILE_ID_E5_CTRI_C,
/*  744  */      DPM_DFS_C,
/*  748  */      PS_FILE_ID_OM_PC_VOICE_C,
/*  749  */      PS_FILE_ID_CSTCSTM_C,
/*  750  */      PS_FILE_ID_CSTL2R_C,
/*  751  */      PS_FILE_ID_CSTNTM_C,
/*  752  */      PS_FILE_ID_CSTRA0_C,
/*  753  */      PS_FILE_ID_CSTRA1M_C,
/*  754  */      PS_FILE_ID_CSTRINGBUF_C,
/*  755  */      PS_FILE_ID_CSTRLPDATA_C,
/*  756  */      PS_FILE_ID_CSTTRANSENTITY_C,
/*  757  */      PS_FILE_ID_CSTRLPE_C,
/*  758  */      PS_FILE_ID_FAXBUF_C,
/*  759  */      PS_FILE_ID_FAXGFA_C,
/*  760  */      PS_FILE_ID_FAXMGR_C,
/*  761  */      PS_FILE_ID_FAXT31_C,

/*  764  */      PS_FILE_ID_MNMSG_CB_SENDAS_C,
/*  765  */      PS_FILE_ID_MNMSG_CB_PROC_C,
/*  766  */      PS_FILE_ID_MNMSG_CB_ENCDEC_C,

/*  780  */      PS_FILE_ID_OM_PRINTF_C,
/*  781  */      PS_FILE_ID_OM_PCCOMM_C,

/*V3 ERRLOG Start */
/*  782  */      PS_FILE_ID_PS_LOG_C,
/*  783  */      PS_FILE_ID_CPU_FLOW_CTRL_C,
/*  784  */      PS_FILE_ID_R_ITF_FLOW_CTRL_C,

/*  793  */      PS_FILE_ID_PPP_PUBLIC_C,
/*  794  */      PS_FILE_ID_DEVMGR_C,
/*  795  */      PS_FILE_ID_DATADISPATCH_C,
/*  796  */      PS_FILE_ID_GUIPFPROC_C,
/*  797  */      PS_FILE_ID_IPV4DHCPSERVER_C,
/*  798  */      PS_FILE_ID_GUAT_NDIS_C,
/*  799  */      PS_FILE_ID_GUAT_MAIN_C,
/*  800  */      PS_FILE_ID_GUAT_PPP_C,
/*  801  */      PS_FILE_ID_GUAT_CMDTAB_C,
/*  836  */      PS_FILE_ID_XML_C,
/*  837  */      PS_FILE_ID_OAM_STUB_C,
/*  838  */      PS_FILE_ID_OMRINGBUFFER_C,
/*  793  */       PS_FILE_ID_L_ARPFUNC_C,
                  PS_FILE_ID_L_HPADLPROC_C,
                  PS_FILE_ID_L_HPADLENTRY_C,
                  PS_FILE_ID_L_HPAULENTRY_C,
                  PS_FILE_ID_L_HPACOMM_C,

/*  798  */       PS_FILE_ID_L_HPAULPROC_C,
                  PS_FILE_ID_MAIN_C,
                  PS_FILE_ID_LINTERMSGTEST_C,





                  PS_FILE_ID_DEFINE_BUTT        /* 下面大的枚举的偏移 */

}PS_FILE_ID_DEFINE_ENUM1;

/*解决VC6编译问题,大的枚举定义拆开*/
typedef enum
{

                  PS_FILE_ID_L_HPAGLOBAL_C = PS_FILE_ID_DEFINE_BUTT+1,

/*  937  */       PS_FILE_ID_L_HPAINIT_C,
                  PS_FILE_ID_L_HPAINTRSP_C,
                  PS_FILE_ID_L_HPAMSGDEBUG_C,
                  PS_FILE_ID_L_HPAMSGPROC_C,
                  PS_FILE_ID_L_HPARBUFFER_C,

/*  942  */       PS_FILE_ID_L_HPASIGNAL_C,
                  PS_FILE_ID_L_HPAUPSELFPROC_C,
                  PS_FILE_ID_L_PSRNGLIB_C,
                  PS_FILE_ID_L_CPU_UTILIZATION_C,
                  PS_FILE_ID_L_PSSOFTDEBUG_C,

/*  947  */       PS_FILE_ID_L_PSOM_C,
                  PS_FILE_ID_L_UPZEROCOPY_C,
                  PS_FILE_ID_L_PS_AUTH_DESALG_C,
                  PS_FILE_ID_L_PSAUTH_C,
                  PS_FILE_ID_L_PSMD5_C,

                  /*STUB文件*/
/*  952  */       PS_FILE_ID_L_SIML1SENDRRC_C,
                  PS_FILE_ID_L_RABMSTUB_C,
                  PS_FILE_ID_L_PSOM_ERRLOG_C,




                  /*L2环回测试文件*/

                  PS_FILE_ID_NASESMSMMSGPROC_C,
                  /*C50 code sync*/

/*  1064  */      PS_FILE_ID_L_PSSTUB_C,




            /*ERABM*/
            PS_FILE_ID_NASERABMCDSMSGPROC_C,


/* c00144034编译合入 */
                  PS_FILE_ID_MMC_LMMINTERFACE_C,

/* R9 DC+MIMO合入 */
                  PS_FILE_ID_ACPU_OM_C,
                  PS_FILE_ID_ACPU_OMRL_C,
                  PS_FILE_ID_OM_AGENT_C,
                  PS_FILE_ID_NVIM_AFUNC_C,
                  PS_FILE_ID_STK_ATPRINTF_C,
                  PS_FILE_ID_ACPU_OMAGENT_C,
                  PS_FILE_ID_OM_SD_LOG_C,
                  PS_FILE_ID_CPM_C,
                  PS_FILE_ID_OM_NO_SIG_C,
                  PS_FILE_ID_PCSC_APP_PROC_C,
                  PS_FILE_ID_OM_APP_OUTSIDE_C,
                  PS_FILE_ID_IMC_C,
                  PS_FILE_ID_UPD_C,
                  PS_FILE_ID_DICC_C,
                  PS_FILE_ID_IMCLINUX_C,
                  PS_FILE_ID_RNIC_C,



                  PS_FILE_ID_ACPU_NFEX_C,
                  PS_FILE_ID_ACPU_NFEX_CTRL_C,
                  PS_FILE_ID_ACPU_IPS_MNTN_C,
                  PS_FILE_ID_CPULOAD_C,
                  PS_FILE_ID_FLOW_CTRL_C,
                  PS_FILE_ID_ACORE_FLOW_CTRL_C,
                  PS_FILE_ID_CCORE_FLOW_CTRL_C,
                  PS_FILE_ID_TTF_MEM_RB_C,
                  /* Added by h00163499 for DSDA Project，2012-12-24,  Begin */
                  PS_FILE_ID_TTF_MEMCTRL_C,
                  /* Added by h0016399 for DSDA Project，2012-12-24,  end */
                  /* Added by s00164817 for PS Project，2011-12-13,  Begin */
                  PS_FILE_ID_IMM_RB_C,
                  PS_FILE_ID_IMM_ZC_C,
                  PS_FILE_ID_IMM_MNTN_C,


                  PS_FILE_ID_LITTLE_IMAGE_LOG_C,


                  /* Added by s00164817 for PS Project，2011-12-13,  End */


                  /*added by x59651 for balong V7R1 C50,20120221,begin*/
                  PS_FILE_ID_PSDIPC_C,
                  /*added by x59651 for balong V7R1 C50,20120221,end*/
                  PS_FILE_ID_PSMUX_C,
                  PS_FILE_ID_SOCP_C,



                  PS_FILE_ID_SC_PERSONALIZATION_C,
                  PS_FILE_ID_SC_FACTORY_C,
                  PS_FILE_ID_SC_COMM_C,
                  PS_FILE_ID_SC_CONTEXT_C,
                  PS_FILE_ID_SC_APSEC_C,

                  /*Tds begin*/


                  PS_FILE_ID_T_F8F9_C,
                  PS_FILE_ID_T_FSM01COM_C,
                  PS_FILE_ID_T_FSM02INI_C,


                  PS_FILE_ID_T_FSMRRC_C,




                  PS_FILE_ID_T_LCR_PS4_C,
                  PS_FILE_ID_T_LCR_ST_SYS_C,







                  PS_FILE_ID_T_RTOS02_PS_C,





                  PS_FILE_ID_T_TESTFSM_C,




                  PS_FILE_ID_T_TGL100PUB_PS_C,

                  /*Tds end*/

                  PS_FILE_ID_SCM_PROC_C,
                  PS_FILE_ID_SCM_SOFT_DECODE_C,
                  PS_FILE_ID_CBT_SCM_SOFT_DECODE_C,
                  PS_FILE_ID_CBT_PPM_C,
                  PS_FILE_ID_CBT_CPM_C,
                  PS_FILE_ID_OM_USB_PPM_C,
                  PS_FILE_ID_OM_VCOM_PPM_C,
                  PS_FILE_ID_OM_HSIC_PPM_C,
                  PS_FILE_ID_OM_SD_PPM_C,
                  PS_FILE_ID_OM_FS_PPM_C,
                  PS_FILE_ID_OM_COMMON_PPM_C,
                  PS_FILE_ID_OM_SOCKET_PPM_C,
                  PS_FILE_ID_OM_BUF_MMNGR_C,
                  PS_FILE_ID_ACPU_OMOPERATOR_C,
                  PS_FILE_ID_SOCP_STUB_C,
                  PS_FILE_ID_OAM_DMT_STUB_C,



                  PS_FILE_ID_OM_BBP_LOG_C,
                  PS_FILE_ID_OM_APP_BBP_LOG_C,
                  PS_FILE_ID_ACORE_CRESET_FLOW_CTRL_C,

                  PS_FILE_ID_NVIM_COMMFUNC_C,

                  PS_FILE_ID_ASN1APP_C,
                  PS_FILE_ID_ASN1MSGMEM_C,
                  PS_FILE_ID_RRCAPI_C,


                  PS_FILE_ID_USIMM_INSTANCE_API_C,

                  PS_FILE_ID_OM_ERRORLOG_C,


                  PS_FILE_ID_USIMM_VSIM_C,
                  PS_FILE_ID_USIMM_VSIM_AUTH_C,
                  PS_FILE_ID_VSIM_XML_C,







                  PS_FILE_ID_V_RTOSCK_SEM_C,
                  PS_FILE_ID_V_RTOSCK_TASK_C,


                  PS_FILE_ID_IMS_NIC_C,
                  PS_FILE_ID_IPS_MNTN_CCORE_C,

                  PS_FILE_ID_CBPACOMMAGENT_C,
                  PS_FILE_ID_CSIMAGENT_C,

                  PS_FILE_ID_USIMM_T1_DL_C,


                  PS_FILE_ID_OM_BBP_MASTER_C,




                  PS_FILE_ID_CNAS_CCB_C,
                  PS_FILE_ID_CNAS_MAIN_C,
                  PS_FILE_ID_CNAS_TIMER_MGMT_C,
                  PS_FILE_ID_CNAS_MNTN_C,
                  PS_FILE_ID_CNAS_PRL_API_C,
                  PS_FILE_ID_CNAS_PRL_MNTN_C,
                  PS_FILE_ID_CNAS_PRL_PARSE_C,
                  PS_FILE_ID_CNAS_PRL_MEM_C,
                  PS_FILE_ID_CNAS_MNTN_DUMP_C,

                  PS_FILE_ID_CNAS_XSD_CTX_C,
                  PS_FILE_ID_CNAS_XSD_FSM_MAIN_C,
                  PS_FILE_ID_CNAS_XSD_FSM_MAIN_TBL_C,
                  PS_FILE_ID_CNAS_XSD_FSM_POWER_OFF_C,
                  PS_FILE_ID_CNAS_XSD_FSM_POWER_OFF_TBL_C,
                  PS_FILE_ID_CNAS_XSD_FSM_SWITCH_ON_C,
                  PS_FILE_ID_CNAS_XSD_FSM_SWITCH_ON_TBL_C,
                  PS_FILE_ID_CNAS_XSD_MAIN_C,
                  PS_FILE_ID_CNAS_XSD_PRE_PROC_ACT_C,
                  PS_FILE_ID_CNAS_XSD_PRE_PROC_TBL_C,
                  PS_FILE_ID_CNAS_XSD_PROC_NVIM_C,
                  PS_FILE_ID_CNAS_XSD_PROC_CARD_C,
                  PS_FILE_ID_CNAS_XSD_SND_CAS_C,
                  PS_FILE_ID_CNAS_XSD_SND_INTERNAL_MSG_C,
                  PS_FILE_ID_CNAS_XSD_SND_MSCC_C,
                  PS_FILE_ID_CNAS_XSD_SND_XCC_C,
                  PS_FILE_ID_CNAS_XSD_SND_XREG_C,
                  PS_FILE_ID_CNAS_XSD_COM_FUNC_C,
                  PS_FILE_ID_CNAS_XSD_FSM_SYS_ACQ_C,
                  PS_FILE_ID_CNAS_XSD_FSM_SYS_ACQ_TBL_C,
                  /* Added by k902809 for CDMA 1X Iteration 6, 2014-12-26, begin */
                  PS_FILE_ID_CNAS_XSD_FSM_REDIR_TBL_C,
                  PS_FILE_ID_CNAS_XSD_FSM_REDIR_C,
                  /* Added by k902809 for CDMA 1X Iteration 6, 2014-12-26, end */

                  PS_FILE_ID_CNAS_XSD_SYS_ACQ_STRATEGY_C,
                  PS_FILE_ID_CNAS_XSD_MNTN_C,

                  PS_FILE_ID_CNAS_XSD_SND_TAF_C,


                  PS_FILE_ID_CNAS_XREG_MAIN_C,
                  PS_FILE_ID_CNAS_XREG_CTX_C,
                  PS_FILE_ID_CNAS_XREG_FSM_MAIN_TBL_C,
                  PS_FILE_ID_CNAS_XREG_FSM_MAIN_C,
                  PS_FILE_ID_CNAS_XREG_SND_XSD_C,
                  PS_FILE_ID_CNAS_XREG_SND_CAS_C,
                  PS_FILE_ID_CNAS_XREG_SND_INTERNAL_MSG_C,
                  PS_FILE_ID_CNAS_XREG_PROCESS_C,
                  PS_FILE_ID_CNAS_XREG_PRE_PROC_TBL_C,
                  PS_FILE_ID_CNAS_XREG_PRE_PROC_C,
                  PS_FILE_ID_CNAS_XREG_REGING_PROC_C,
                  PS_FILE_ID_CNAS_XREG_REGING_PROC_TBL_C,
                  PS_FILE_ID_CNAS_XREG_LIST_PROC_C,
                  PS_FILE_ID_CNAS_XREG_SND_APS_C,
                  PS_FILE_ID_CNAS_XCC_MAIN_C,
                  PS_FILE_ID_CNAS_XCC_CTX_C,
                  PS_FILE_ID_CNAS_XCC_INSTANCE_MGMT_C,
                  PS_FILE_ID_CNAS_XCC_FSM_MAIN_C,
                  PS_FILE_ID_CNAS_XCC_FSM_MAIN_TBL_C,
                  PS_FILE_ID_CNAS_XCC_MAIN_CTRL_C,
                  PS_FILE_ID_CNAS_XCC_PRE_PROC_TBL_C,
                  PS_FILE_ID_CNAS_XCC_SND_XSD_C,
                  PS_FILE_ID_CNAS_XCC_SND_XCALL_C,
                  PS_FILE_ID_CNAS_XCC_SND_CAS_C,
                  PS_FILE_ID_CNAS_XCC_FSM_MO_CALLING_C,
                  PS_FILE_ID_CNAS_XCC_FSM_MO_CALLING_TBL_C,
                  PS_FILE_ID_CNAS_XCC_FSM_MT_CALLING_C,
                  PS_FILE_ID_CNAS_XCC_FSM_MT_CALLING_TBL_C,
                  PS_FILE_ID_CNAS_XCC_SND_INTERNAL_MSG_C,
                  PS_FILE_ID_CNAS_XCC_SND_APS_C,
                  PS_FILE_ID_CNAS_XCC_COM_FUNC_C,
                  PS_FILE_ID_CNAS_XCC_SND_MMA_C,
                  /* Added by l60609 for CDMA 1X Phase0, 2014-7-3, end */
                  PS_FILE_ID_CNAS_XCC_SND_LMM_C,

                  PS_FILE_ID_CBT_FUNC_C,
                  PS_FILE_ID_CBT_RL_C,
                  PS_FILE_ID_APP_CBT_FUNC_C,
                  PS_FILE_ID_APP_CBT_RL_C,
                  PS_FILE_ID_USIMM_APP_BASE_C,
                  PS_FILE_ID_PAM_OM_C,
                  PS_FILE_ID_PAM_APP_OM_C,
                  PS_FILE_ID_V_PRIVATE_C,


                  /*BASTET*/
                  PS_FILE_ID_BST_SRV_TASKMNG_CPP,
                  PS_FILE_ID_BST_SRV_EVENT_CPP,
                  PS_FILE_ID_BST_SRV_ASEVNT_CPP,
                  PS_FILE_ID_BST_SRV_ASCTRL_CPP,
                  PS_FILE_ID_BST_SRV_CHNL_CTRL_CPP,
                  PS_FILE_ID_BST_PLATFORM_C,
                  PS_FILE_ID_BST_PAL_TIMER_C,
                  PS_FILE_ID_BST_PAL_THREAD_C,
                  PS_FILE_ID_BST_PAL_SYNC_C,
                  PS_FILE_ID_BST_PAL_NET_C,
                  PS_FILE_ID_BST_PAL_MEMORY_C,
                  PS_FILE_ID_BST_PAL_AS_C,
                  PS_FILE_ID_BST_PAL_ACOM_C,
                  PS_FILE_ID_BST_PAL_LINK_STA_C,
                  PS_FILE_ID_BST_OS_TIMER_CPP,
                  PS_FILE_ID_BST_OS_THREAD_C,
                  PS_FILE_ID_BST_OS_SYNC_C,
                  PS_FILE_ID_BST_OS_MEMORY_C,
                  PS_FILE_ID_BST_OS_LOG_C,
                  PS_FILE_ID_BST_DRV_NET_C,
                  PS_FILE_ID_BST_DRV_AS_C,
                  PS_FILE_ID_BST_DRV_ACOM_C,
                  PS_FILE_ID_BST_DRV_LINKSTA_C,
                  PS_FILE_ID_BST_DRV_CSFIREWALL_C,
                  PS_FILE_ID_BST_DRV_ASPEN_C,
                  PS_FILE_ID_BST_IP_SOCKETCLONE_C,
                  PS_FILE_ID_BST_IP_PREPROC_C,
                  PS_FILE_ID_BST_IP_SOCKET_CPP,
                  PS_FILE_ID_BST_IP_RCVERMNG_CPP,
                  PS_FILE_ID_BST_IP_LWIPAPI_CPP,
                  PS_FILE_ID_BST_DSPP_TRSLAYER_CPP,
                  PS_FILE_ID_BST_DSPP_REPORT_CPP,
                  PS_FILE_ID_BST_DSPP_LAYERPROCBASE_CPP,
                  PS_FILE_ID_BST_DSPP_CTRLAYER_CPP,
                  PS_FILE_ID_BST_DSPP_APPLAYER_CPP,
                  PS_FILE_ID_BST_LIB_STRINT8U_CPP,
                  PS_FILE_ID_BST_LIB_STRINGCHECK_CPP,
                  PS_FILE_ID_BST_LIB_SN_GENERATE_H,
                  PS_FILE_ID_BST_CORE_TASK_CPP,
                  PS_FILE_ID_BST_CORE_SCHD_CPP,
                  PS_FILE_ID_BST_CORE_PTASK_CPP,
                  PS_FILE_ID_BST_CORE_NPTASK_CPP,
                  PS_FILE_ID_BST_CORE_REGISTRYTBLMNG_CPP,
                  PS_FILE_ID_BST_CORE_REGEDIT_CPP,
                  PS_FILE_ID_BST_APP_HEARTBEAT_CPP,
                  PS_FILE_ID_BST_APP_EMAILPOP3_CPP,
                  PS_FILE_ID_BST_APP_EMAILIMAP_CPP,
                  PS_FILE_ID_BST_APP_EMAILEXCHANGE_CPP,
                  PS_FILE_ID_BST_APP_EMAILEXCGHTTP_CPP,
                  PS_FILE_ID_BST_APP_EMAILBASEPROC_CPP,
                  PS_FILE_ID_BST_APP_MAINTASK_CPP,
                  PS_FILE_ID_BST_LWIP_SYS_ARCH_C,
                  PS_FILE_ID_BST_LWIP_PBUF_C,
                  PS_FILE_ID_BST_PAL_FILE_C,
                  PS_FILE_ID_BST_PAL_LIST_LIB_C,
                  PS_FILE_ID_BST_MSGPROC_C,
                  PS_FILE_ID_CDS_BST_PROC_C,
                  PS_FILE_ID_BST_SYSMNTN_C,
                  PS_FILE_ID_BST_COMM_C,
                  PS_FILE_ID_BST_INIT_C,
                  PS_FILE_ID_BST_OS_OPENSSL_MEM_C,
                  PS_FILE_ID_BST_PAL_OPENSSL_GETSERVBY_C,
                  PS_FILE_ID_BST_PAL_OPENSSL_FILE_C,
                  PS_FILE_ID_BST_PAL_LOG_C,
                  PS_FILE_ID_MN_BASTET_C,

                  PS_FILE_ID_CNAS_XCC_SND_CSMS_C,
                  PS_FILE_ID_CNAS_XCC_SND_XPDS_C,

                  PS_FILE_ID_CNAS_HLU_CTX_C,
                  PS_FILE_ID_CNAS_HLU_MAIN_C,
                  PS_FILE_ID_CNAS_HLU_COMM_C,
                  PS_FILE_ID_CNAS_HLU_SND_HSM_C,
                  PS_FILE_ID_CNAS_HLU_SND_HSD_C,
                  PS_FILE_ID_CNAS_HLU_SND_HRM_C,
                  PS_FILE_ID_CNAS_HLU_PROC_NVIM_C,

                  PS_FILE_ID_CNAS_HSD_COM_FUNC_C,
                  PS_FILE_ID_CNAS_HSD_CTX_C,
                  PS_FILE_ID_CNAS_HSD_FSM_MAIN_C,
                  PS_FILE_ID_CNAS_HSD_FSM_MAIN_TBL_C,
                  PS_FILE_ID_CNAS_HSD_FSM_POWER_OFF_C,
                  PS_FILE_ID_CNAS_HSD_FSM_POWER_OFF_TBL_C,
                  PS_FILE_ID_CNAS_HSD_FSM_SWITCH_ON_C,
                  PS_FILE_ID_CNAS_HSD_FSM_SWITCH_ON_TBL_C,
                  PS_FILE_ID_CNAS_HSD_FSM_SYS_ACQ_C,
                  PS_FILE_ID_CNAS_HSD_FSM_SYS_ACQ_TBL_C,
                  PS_FILE_ID_CNAS_HSD_MAIN_C,
                  PS_FILE_ID_CNAS_HSD_MNTN_C,
                  PS_FILE_ID_CNAS_HSD_PRE_PROC_ACT_C,
                  PS_FILE_ID_CNAS_HSD_PRE_PROC_TBL_C,
                  PS_FILE_ID_CNAS_HSD_PROC_CARD_C,
                  PS_FILE_ID_CNAS_HSD_PROC_NVIM_C,
                  PS_FILE_ID_CNAS_HSD_SND_CAS_C,
                  PS_FILE_ID_CNAS_HSD_SND_HLU_C,
                  PS_FILE_ID_CNAS_HSD_SND_HSM_C,
                  PS_FILE_ID_CNAS_HSD_SND_INTERNAL_MSG_C,
                  PS_FILE_ID_CNAS_HSD_SND_MSCC_C,
                  PS_FILE_ID_CNAS_HSD_SYS_ACQ_STRATEGY_C,
                  PS_FILE_ID_CNAS_HSD_SND_HRM_C,

                  PS_FILE_ID_CNAS_XREG_FSM_SWITCH_ON_C,
                  PS_FILE_ID_CNAS_XREG_FSM_SWITCH_ON_TBL_C,
                  PS_FILE_ID_CNAS_HSD_SND_RRM_C,
                  PS_FILE_ID_CNAS_HSD_AVOID_STRATEGY_C,

                  PS_FILE_ID_CNAS_HSD_FSM_POWER_SAVE_C,
                  PS_FILE_ID_CNAS_HSD_FSM_POWER_SAVE_TBL_C,
                  PS_FILE_ID_CNAS_HSD_FSM_INTER_SYS_C,
                  PS_FILE_ID_CNAS_HSD_FSM_INTER_SYS_TBL_C,
                  PS_FILE_ID_CNAS_HSD_SND_EHSM_C,

                  PS_FILE_ID_CNAS_HSD_FSM_BG_SRCH_C,
                  PS_FILE_ID_CNAS_HSD_FSM_BG_SRCH_TBL_C,

                  PS_FILE_ID_CNAS_HSD_FSM_OOC_NTF_C,
                  PS_FILE_ID_CNAS_HSD_FSM_OOC_NTF_TBL_C,

                  PS_FILE_ID_USIMM_INIT_C,
                  PS_FILE_ID_USIMM_GLOBAL_C,
                  PS_FILE_ID_NASBACKOFFALGMAIN_C,



                  PS_FILE_ID_CNAS_HSM_MAIN_C,
                  PS_FILE_ID_CNAS_HSM_CTX_C,
                  PS_FILE_ID_CNAS_HSM_DECODE_C,
                  PS_FILE_ID_CNAS_HSM_ENCODE_C,
                  PS_FILE_ID_CNAS_HSM_FSM_CACHED_MSG_PRI_MNMT_C,
                  PS_FILE_ID_CNAS_HSM_FSM_MAIN_C,
                  PS_FILE_ID_CNAS_HSM_FSM_SESSION_ACT_C,
                  PS_FILE_ID_CNAS_HSM_FSM_SESSION_DEACT_C,
                  PS_FILE_ID_CNAS_HSM_FSM_TBL_C,
                  PS_FILE_ID_CNAS_HSM_FSM_UATI_REQUEST_C,
                  PS_FILE_ID_CNAS_HSM_PREPROC_ACT_C,
                  PS_FILE_ID_CNAS_HSM_PROC_NVIM_C,
                  PS_FILE_ID_CNAS_HSM_SND_AS_C,
                  PS_FILE_ID_CNAS_HSM_SND_TTF_C,
                  PS_FILE_ID_CNAS_HSM_SND_HSD_C,
                  PS_FILE_ID_CNAS_HSM_SND_APS_C,
                  PS_FILE_ID_CNAS_HSM_SND_HLU_C,
                  PS_FILE_ID_CNAS_HSM_PRE_PROC_TBL_C,
                  PS_FILE_ID_CNAS_HSM_COM_FUNC_C,
                  PS_FILE_ID_CNAS_HSM_SND_INTERNAL_MSG_C,
                  PS_FILE_ID_CNAS_HSM_SND_HRM_C,

                  PS_FILE_ID_CNAS_EHSM_CTX_C,
                  PS_FILE_ID_CNAS_EHSM_TIMER_MGMT_C,
                  PS_FILE_ID_CNAS_EHSM_FSM_MAIN_TBL_C,
                  PS_FILE_ID_CNAS_EHSM_FSM_MAIN_C,
                  PS_FILE_ID_CNAS_EHSM_MNTN_C,
                  PS_FILE_ID_CNAS_EHSM_MAIN_C,
                  PS_FILE_ID_CNAS_EHSM_PRE_PROC_ACT_C,
                  PS_FILE_ID_CNAS_EHSM_PRE_PROC_TBL_C,
                  PS_FILE_ID_CNAS_EHSM_SND_APS_C,
                  PS_FILE_ID_CNAS_EHSM_SND_ESM_C,
                  PS_FILE_ID_CNAS_EHSM_SND_HSD_C,
                  PS_FILE_ID_CNAS_EHSM_SND_HSM_C,
                  PS_FILE_ID_CNAS_EHSM_SND_INTERNAL_MSG_C,
                  PS_FILE_ID_CNAS_EHSM_SND_PPP_C,
                  PS_FILE_ID_CNAS_EHSM_FSM_ACTIVATING_C,
                  PS_FILE_ID_CNAS_EHSM_FSM_ACTIVATING_TBL_C,
                  PS_FILE_ID_CNAS_EHSM_FSM_DEACTIVATING_C,
                  PS_FILE_ID_CNAS_EHSM_FSM_DEACTIVATING_TBL_C,
                  PS_FILE_ID_CNAS_EHSM_PROC_NVIM_C,
                  PS_FILE_ID_CNAS_EHSM_COM_FUNC_C,
                  PS_FILE_ID_CNAS_EHSM_MSG_PRIO_COMPARE_C,
                  PS_FILE_ID_CNAS_EHSM_ENCODE_C,
                  PS_FILE_ID_CNAS_EHSM_DECODE_C,
                  PS_FILE_ID_CNAS_EHSM_SND_RRM_C,
                  PS_FILE_ID_CNAS_EHSM_SND_MSCC_C,

                  PS_FILE_ID_CNAS_HSM_SND_MMA_C,


                  PS_FILE_ID_CNAS_HSM_MNTN_C,



                  PS_FILE_ID_CNAS_HSM_SND_RRM_C,
                  PS_FILE_ID_CNAS_HSM_KEEP_ALIVE_C,
                  PS_FILE_ID_CNAS_HSM_SND_EHSM_C,
                  PS_FILE_ID_CNAS_HSM_PROC_USIM_C,
                  PS_FILE_ID_CNAS_HSM_FSM_SWITCH_ON_C,
                  PS_FILE_ID_CNAS_HSM_FSM_CONN_MNMT_C,

                  PS_FILE_ID_CNAS_HRM_CTX_C,
                  PS_FILE_ID_CNAS_HRM_MAIN_C,
                  PS_FILE_ID_CNAS_HRM_COMM_FUNC_C,
                  PS_FILE_ID_CNAS_HRM_SND_CAS_C,
                  PS_FILE_ID_CNAS_HRM_SND_TTF_C,
                  PS_FILE_ID_CNAS_HRM_SND_HLU_C,
                  PS_FILE_ID_CNAS_HRM_SND_HSM_C,
                  PS_FILE_ID_CNAS_HRM_SND_HSD_C,
                  PS_FILE_ID_CNAS_HRM_PROC_CAS_C,
                  PS_FILE_ID_CNAS_HRM_PROC_TTF_C,
                  PS_FILE_ID_CNAS_HRM_PROC_HLU_C,
                  PS_FILE_ID_CNAS_HRM_PROC_HSM_C,
                  PS_FILE_ID_CNAS_HRM_PROC_HSD_C,

                  PS_FILE_ID_ACPU_LOG_FILTER_C,
                  PS_FILE_ID_CCPU_LOG_FILTER_C,
                  PS_FILE_ID_GU_NAS_LOG_FILTER_C,
                  PS_FILE_ID_LOG_FILTER_COMM_C,


                  PS_FILE_ID_NAS_DYNLOAD_API_C,
                  PS_FILE_ID_NAS_DYNLOAD_MNTN_C,
                  PS_FILE_ID_CNAS_XREG_MNTN_C,
                  PS_FILE_ID_NASLCSMAIN_C,
                  PS_FILE_ID_NASLCSEMMMSGPROC_C,
                  PS_FILE_ID_NASLCSTAFMSGPROC_C,
                  PS_FILE_ID_NASLCSTIMERMSGPROC_C,
                  PS_FILE_ID_NASLCSLPPMSGPROC_C,
                  PS_FILE_ID_NASLCSPUBLIC_C,
                  PS_FILE_ID_NASLCSMMMSGPROC_C,
                  PS_FILE_ID_NASLCSOM_C,

                  PS_FILE_ID_NASLCSENCODE_C,
                  PS_FILE_ID_NASLCSDECODE_C,

                  PS_FILE_ID_USIMM_ISIM_INIT_C,
                  PS_FILE_ID_BUTT

}PS_FILE_ID_DEFINE_ENUM;

typedef unsigned long  PS_FILE_ID_DEFINE_ENUM_UINT32;

/* CTTF */
typedef enum
{
    /* CDMA L2 , 2013-9-4 start*/
    PS_FILE_ID_CTTF_1X_FLAC_CTRL_C = CTTF_TEAM_FILE_ID,
    PS_FILE_ID_CTTF_1X_FLAC_CFG_C,
    PS_FILE_ID_CTTF_1X_FLAC_CSCH_C,
    PS_FILE_ID_CTTF_1X_FLAC_DSCH_C,
    PS_FILE_ID_CTTF_1X_FLAC_PID_ENTRY_C,
    PS_FILE_ID_CTTF_1X_FMAC_CTRL_C,
    PS_FILE_ID_CTTF_1X_FMAC_DEMUX_ENT_PROC_C,
    PS_FILE_ID_CTTF_1X_FMAC_DEMUX_DATA_PROC_C,
    PS_FILE_ID_CTTF_1X_FRLP_CTRL_C,
    PS_FILE_ID_CTTF_1X_FRLP_DATA_BUF_C,
    PS_FILE_ID_CTTF_1X_FRLP_TYPE1_RX_C,
    PS_FILE_ID_CTTF_1X_FRLP_TYPE3_RX_C,
    PS_FILE_ID_CTTF_1X_LAC_MNTN_C,
    PS_FILE_ID_CTTF_1X_RLAC_SEND_MSG_C,
    PS_FILE_ID_CTTF_1X_FLAC_SEND_MSG_C,
    PS_FILE_ID_CTTF_1X_FLAC_ADDR_MATCH_C,
    PS_FILE_ID_CTTF_1X_RLOOPBACK_C,
    PS_FILE_ID_CTTF_1X_FLOOPBACK_C,
    PS_FILE_ID_CTTF_1X_VOICEAGENT_C,
    PS_FILE_ID_CTTF_1X_MAC_MNTN_C,
    PS_FILE_ID_CTTF_1X_RMARKOV_C,
    PS_FILE_ID_CTTF_1X_FMARKOV_C,
    PS_FILE_ID_CTTF_1X_MARKOV_UTILITY_C,
    PS_FILE_ID_CTTF_1X_RTDSO_C,
    PS_FILE_ID_CTTF_1X_FTDSO_C,
    PS_FILE_ID_CTTF_1X_TDSO_UTILITY_C,
    PS_FILE_ID_CTTF_1X_TESTSO_C,
    PS_FILE_ID_CTTF_1X_RLAC_CTRL_C,
    PS_FILE_ID_CTTF_1X_RLAC_CFG_C,
    PS_FILE_ID_CTTF_1X_RLAC_CSCH_C,
    PS_FILE_ID_CTTF_1X_RLAC_DSCH_C,
    PS_FILE_ID_CTTF_1X_RLAC_PID_ENTRY_C,
    PS_FILE_ID_CTTF_1X_RLAC_ADDR_MATCH_C,
    PS_FILE_ID_CTTF_1X_RLP_MNTN_C,
    PS_FILE_ID_CTTF_1X_RLP_SECURITY_C,
    PS_FILE_ID_CTTF_1X_RLP_SHARE_BUFFER_C,
    PS_FILE_ID_CTTF_1X_RLP_BLOB_C,
    PS_FILE_ID_CTTF_1X_RMAC_CTRL_C,
    PS_FILE_ID_CTTF_1X_RMAC_MUX_ENT_PROC_C,
    PS_FILE_ID_CTTF_1X_RMAC_MUX_DATA_PROC_C,
    PS_FILE_ID_CTTF_1X_RMAC_SRBP_ENT_PROC_C,
    PS_FILE_ID_CTTF_1X_RMAC_SRBP_DATA_PROC_C,
    PS_FILE_ID_CTTF_1X_RRLP_PIDENTRY_C,
    PS_FILE_ID_CTTF_1X_FRLP_PIDENTRY_C,
    PS_FILE_ID_CTTF_1X_FRLP_SEND_RRLP_MSG_C,
    PS_FILE_ID_CTTF_1X_RRLP_SEND_CAS_MSG_C,
    PS_FILE_ID_CTTF_1X_RRLP_SEND_FRLP_MSG_C,
    PS_FILE_ID_CTTF_1X_RRLP_SEND_RRLP_MSG_C,
    PS_FILE_ID_CTTF_1X_RRLP_CTRL_C,
    PS_FILE_ID_CTTF_1X_RRLP_BO_IF_C,
    PS_FILE_ID_CTTF_1X_RRLP_CDS_TX_IF_C,
    PS_FILE_ID_CTTF_1X_RRLP_TX_C,
    PS_FILE_ID_CTTF_1X_RRLP_TYPE1_TX_C,
    PS_FILE_ID_CTTF_1X_RRLP_TYPE3_TX_C,
    PS_FILE_ID_CTTF_RLP_COMM_C,
    PS_FILE_ID_CRC_C,
    PS_FILE_ID_SHA1_C,
    /*PS_FILE_ID_PS_TRACE_LOG_C,*/
    PS_FILE_ID_CTTF_COMM_C,
    PS_FILE_ID_CTTF_TIMER_C,
    PS_FILE_ID_CDMA_UTIL_C,
    PS_FILE_ID_CTTF_CTRL_C,
    PS_FILE_ID_CTTF_1X_REV_ENTRY_C,
    PS_FILE_ID_CTTF_1X_FWD_ENTRY_C,
    PS_FILE_ID_CTTF_ISR_C,
    PS_FILE_ID_PS_QNODE_C,
    PS_FILE_ID_CTTF_LOG_C,
    PS_FILE_ID_CTTF_MNTN_C,
    /*PS_FILE_ID_TTF_TRACE_COMM_C,*/
    PS_FILE_ID_CTTF_1X_FMAC_COMMCH_ENT_PROC_C,
    PS_FILE_ID_CTTF_1X_FMAC_COMMCH_DATA_PROC_C,
    PS_FILE_ID_CTTF_1X_MAC_UTILITY_C,
    PS_FILE_ID_CTTF_1X_MAC_CTRL_EXT_C,
    PS_FILE_ID_CTTF_HRPD_CCMAC_DATA_PROC_C,
    PS_FILE_ID_CTTF_HRPD_CCMAC_ENT_PROC_C,
    PS_FILE_ID_CTTF_HRPD_FMAC_CTRL_C,
    PS_FILE_ID_CTTF_HRPD_RMAC_CTRL_C,
    PS_FILE_ID_CTTF_HRPD_MAC_UTILITY_C,
    PS_FILE_ID_CTTF_HRPD_FWD_ENTRY_C,
    PS_FILE_ID_CTTF_HRPD_SIG_ENTRY_C,
    PS_FILE_ID_CTTF_HRPD_REV_ENTRY_C,
    PS_FILE_ID_CTTF_HRPD_RSIG_PID_ENTRY_C,
    PS_FILE_ID_CTTF_HRPD_FSIG_PID_ENTRY_C,
    PS_FILE_ID_CTTF_HRPD_SIG_PID_ENTRY_C,
    PS_FILE_ID_CTTF_HRPD_FSLP_PID_ENTRY_C,
    PS_FILE_ID_CTTF_HRPD_RSLP_PID_ENTRY_C,
    PS_FILE_ID_CTTF_HRPD_FTCMAC_DATA_PROC_C,
    PS_FILE_ID_CTTF_HRPD_FTCMAC_ENT_PROC_C,
    PS_FILE_ID_CTTF_HRPD_RMAC_SEND_MSG_C,
    PS_FILE_ID_CTTF_HRPD_ACMAC_ACC_PROC_C,
    PS_FILE_ID_CTTF_HRPD_ACMAC_CFG_PROC_C,
    PS_FILE_ID_CTTF_HRPD_ACMAC_CTRL_PROC_C,
    PS_FILE_ID_CTTF_HRPD_FSPS_CTRL_C,
    PS_FILE_ID_CTTF_HRPD_RSPS_CTRL_C,
    PS_FILE_ID_CTTF_HRPD_FSPS_PC_C,
    PS_FILE_ID_CTTF_HRPD_RSPS_PC_C,
    PS_FILE_ID_CTTF_HRPD_FSPS_SECURITY_C,
    PS_FILE_ID_CTTF_HRPD_RSPS_SECURITY_C,
    PS_FILE_ID_CTTF_HRPD_FSPS_STREAM_C,
    PS_FILE_ID_CTTF_HRPD_RSPS_STREAM_C,
    PS_FILE_ID_CTTF_HRPD_FSPS_PIDENTRY_C,
    PS_FILE_ID_CTTF_HRPD_RSPS_PIDENTRY_C,
    PS_FILE_ID_CTTF_HRPD_FPA_CTRL_C,
    PS_FILE_ID_CTTF_HRPD_FDOS_C,
    PS_FILE_ID_CTTF_HRPD_RDOS_C,
    PS_FILE_ID_CTTF_HRPD_FPA_PID_ENTRY_C,
    PS_FILE_ID_CTTF_HRPD_FRLP_C,
    PS_FILE_ID_CTTF_HRPD_PA_MNTN_C,
    PS_FILE_ID_CTTF_HRPD_RPA_CTRL_C,
    PS_FILE_ID_CTTF_HRPD_RPA_PID_ENTRY_C,
    PS_FILE_ID_CTTF_HRPD_RPA_SEND_PPP_MSG_C,
    PS_FILE_ID_CTTF_HRPD_RPA_SEND_SNP_MSG_C,
    PS_FILE_ID_CTTF_HRPD_RPA_SEND_NAS_MSG_C,
    PS_FILE_ID_CTTF_HRPD_RPA_SEND_CAS_MSG_C,
    PS_FILE_ID_CTTF_HRPD_FPA_SEND_RPA_MSG_C,
    PS_FILE_ID_CTTF_HRPD_RPA_SEND_FPA_MSG_C,
    PS_FILE_ID_CTTF_HRPD_RRLP_C,
    PS_FILE_ID_CTTF_HRPD_RTCMAC_CTRL_PROC_C,
    PS_FILE_ID_CTTF_HRPD_RTCMAC_DATA_PROC_C,
    PS_FILE_ID_CTTF_HRPD_RTCMAC_ENT_PROC_C,
    PS_FILE_ID_CTTF_HRPD_RTC3MAC_DATAPROC_C,
    PS_FILE_ID_CTTF_HRPD_MAC_MNTN_C,
    PS_FILE_ID_CTTF_HRPD_RTAP_C,
    PS_FILE_ID_CTTF_HRPD_FTAP_C,
    PS_FILE_ID_TTF_TPE_C,
    PS_FILE_ID_CTTF_DATA_MOVE_DRIVER_C,
    PS_FILE_ID_CTTF_DATA_MOVE_SERVICE_C,
    PS_FILE_ID_CTTF_HRPD_MNTN_C,
    PS_FILE_ID_CTTF_HRPD_RPA_FCP_CTRL_C,
    PS_FILE_ID_CTTF_HRPD_RTAP_CTRL_C,
    PS_FILE_ID_CTTF_HRPD_RDOS_CTRL_C,
    PS_FILE_ID_CTTF_HRPD_RPA_RRLP_CTRL_C,
    PS_FILE_ID_CTTF_1X_MNTN_C,
    PS_FILE_ID_AS_COMM_DUMP_C,
    PS_FILE_ID_AS_COMM_LOG_C,
    PS_FILE_ID_CTTF_MNTN_COMM_C,
    PS_FILE_ID_CTTF_BUTT
    /* CDMA L2 , 2013-9-4 end*/
}CTTF_FILE_ID_DEFINE_ENUM;
typedef unsigned long  CTTF_FILE_ID_DEFINE_ENUM_UINT32;


/* TTFCOMM */
typedef enum
{
    PS_FILE_ID_PPPC_SHEL_C = TTFCOMM_TEAM_FILE_ID,
    PS_FILE_ID_PPPC_ENTITY_C,
    PS_FILE_ID_PPPC_CORE_C,
    PS_FILE_ID_PPPC_CHAP_C,
    PS_FILE_ID_PPPC_PAP_C,
    PS_FILE_ID_PPPC_CVT_C,
    PS_FILE_ID_PPPC_CAP_C,
    PS_FILE_ID_PPPC_CTRL_C,
    PS_FILE_ID_PPPC_PA_AGENT_C,
    PS_FILE_ID_PPPC_LCP_C,
    PS_FILE_ID_PPPC_FSM_C,
    PS_FILE_ID_PPPC_IPCP_C,
    PS_FILE_ID_PPPC_IPV6CP_C,
    PS_FILE_ID_PPPC_MNTN_CTRL_C,
    PS_FILE_ID_PPPC_ERR_LOG_C,
    PS_FILE_ID_PPPC_DIAG_C,
    PS_FILE_ID_PPPC_UTILITY_C,
    PS_FILE_ID_PPPC_1X_HRPD_PROC_C,
    PS_FILE_ID_PPPC_EHPRD_PROC_C,
    PS_FILE_ID_PPPC_MEM_C,
    PS_FILE_ID_PPPC_VSNCP_C,
    PS_FILE_ID_PPPC_VSNCP_DECODE_C,
    PS_FILE_ID_PPPC_VSNCP_ENCODE_C,
    PS_FILE_ID_PPPC_PAP_DBG_C,
    PS_FILE_ID_PPPC_CHAP_DBG_C,
    PS_FILE_ID_PPPC_CCP_C,
    PS_FILE_ID_PPPC_UIM_C,
    PS_FILE_ID_PPPC_UTIL_SHA1_C,
    PS_FILE_ID_PPPC_UTIL_AES_C,
    PS_FILE_ID_PPPC_UTIL_SHA256_C,
    PS_FILE_ID_PPPC_EAP_C,
    PS_FILE_ID_PPPC_EAP_MGR_C,
    PS_FILE_ID_PPPC_EAP_PEER_C,
    PS_FILE_ID_PPPC_MD5_C,
    PS_FILE_ID_PPPC_EAP_AKA_C,
    PS_FILE_ID_PPPC_HDLC_HARDWARE_C,
    PS_FILE_ID_PPPC_IPCP_DBG_C,
    PS_FILE_ID_PPPC_EAP_DBG_C,
    PS_FILE_ID_PPPC_VSNCP_DBG_C,
    PS_FILE_ID_PPPC_IPV6CP_DBG_C,
    PS_FILE_ID_PPPC_LCP_DBG_C,
    PS_FILE_ID_PPPC_DATA_COMMON_C,
    PS_FILE_ID_PPPC_DATA_PROC_C,
    PS_FILE_ID_PPPC_ADAPTER_COMMON_C,

    PS_FILE_ID_DHCP_PUB_C,
    PS_FILE_ID_DHCPM_COMP_C,
    PS_FILE_ID_DHCPM_DBG_C,
    PS_FILE_ID_DHCPC_C,
    PS_FILE_ID_DHCPC_BLOCK_C,
    PS_FILE_ID_DHCPC_COMP_C,
    PS_FILE_ID_DHCP_LOG_C,
    PS_FILE_ID_DHCPC_MSG_C,
    PS_FILE_ID_DHCPC_PKT_C,
    PS_FILE_ID_DHCPC_TIMER_C,
    PS_FILE_ID_DHCPC_SERVER_C,
    PS_FILE_ID_DHCPV6_PROC_C,
    PS_FILE_ID_DHCPV6C_C,
    PS_FILE_ID_DHCPV6C_FSM_C,
    PS_FILE_ID_DHCPV6C_PKT_C,
    PS_FILE_ID_DHCPV4S_COMP_C,
    PS_FILE_ID_DHCPV4S_CFG_C,
    PS_FILE_ID_DHCPV4S_DBGCMD_C,
    PS_FILE_ID_DHCPV4S_DEC_C,
    PS_FILE_ID_DHCPV4S_PUB_C,
    PS_FILE_ID_DHCPV4S_TIMER_C,
    PS_FILE_ID_DHCPV6S_COMP_C,
    PS_FILE_ID_DHCP_ADAPTER_C,

    PS_FILE_ID_HDLC_C,
    PS_FILE_ID_IPCP_C,
    PS_FILE_ID_KASUMI_C,
    PS_FILE_ID_LCP_C,
    PS_FILE_ID_LINK_C,
    PS_FILE_ID_PAP_C,
    PS_FILE_ID_PDCP_STUB_C,
    PS_FILE_ID_PPP_ATCMD_C,
    PS_FILE_ID_PPP_FSM_C,
    PS_FILE_ID_PPP_INIT_C,
    PS_FILE_ID_PPP_INPUT_C,
    PS_FILE_ID_PPP_MBUF_C,
    PS_FILE_ID_CHAP_C,
    PS_FILE_ID_PPPID_C,
    PS_FILE_ID_PPPOE_DISCOVERY_C,
    PS_FILE_ID_PPPOE_ETHERNETIO_C,
    PS_FILE_ID_PPPOE_MANAGER_C,
    PS_FILE_ID_PPPOE_SESSION_C,
    PS_FILE_ID_PPPOE_STUBFORWIN_C,
    PS_FILE_ID_PROTO_C,
    PS_FILE_ID_PS_MEM_C,
    PS_FILE_ID_PS_MEMCHK_C,
    PS_FILE_ID_PS_BBPSTUB_C,
    PS_FILE_ID_PS_BSPSTUB_C,
    PS_FILE_ID_PS_CFG_C,
    PS_FILE_ID_PS_GTFHELP_C,
    PS_FILE_ID_HDLC_HARDWARE_C,
    PS_FILE_ID_HDLC_SOFTWARE_C,
    PS_FILE_ID_PS_TRACE_LOG_C,
    PS_FILE_ID_TTF_TRACE_COMM_C,
    PS_FILE_ID_TTF_IP_COMM_C,
    PS_FILE_ID_RRM_MGM_C,
    PS_FILE_ID_RRM_INIT_C,
    PS_FILE_ID_RRM_CTRL_C,
    PS_FILE_ID_RRM_TIMER_C,
    PS_FILE_ID_RRM_OMMNTN_C,
    PS_FILE_ID_RRM_LOG_C,
    PS_FILE_ID_RRM_DEBUG_C,
    PS_FILE_ID_RRM_API_C,
    PS_FILE_ID_RRM_COMM_C,
    PS_FILE_ID_TTF_ERR_LOG_C,
    PS_FILE_ID_CPU_UTILIZATION_C,
    PS_FILE_ID_CPU_VIEW_C,
    PS_FILE_ID_TTF_LINK_C,
    PS_FILE_ID_TTF_MEM_C,
    PS_FILE_ID_TTF_MEMCHK_C,
    PS_FILE_ID_TTF_MSGCHK_C,
    PS_FILE_ID_TTF_TRACE_C,
    PS_FILE_ID_TTF_UTIL_C,
    PS_FILE_ID_TTFCICOM_C,

    PS_FILE_ID_ACPU_VIEW_C,

    PS_FILE_ID_TTF_NODE_MEM_C,

    PS_FILE_ID_TTFCOMM_BUTT
}TTFCOMM_FILE_ID_DEFINE_ENUM;
typedef unsigned long  TTFCOMM_FILE_ID_DEFINE_ENUM_UINT32;


typedef enum
{
    /* for CDMA 1X, 2013-9-3, start */
    PS_FILE_ID_CAS_1X_IDLECOMMCHCFG_C = CAS_TEAM_FILE_ID,
    PS_FILE_ID_CAS_1X_IDLEFSM_C             = CAS_TEAM_FILE_ID + 0x0001,
    PS_FILE_ID_CAS_1X_IDLEFLOW_C            = CAS_TEAM_FILE_ID + 0x0002,
    PS_FILE_ID_CAS_1X_IDLEHANDOFF_C         = CAS_TEAM_FILE_ID + 0x0003,
    PS_FILE_ID_CAS_1X_MAIN_C                = CAS_TEAM_FILE_ID + 0x0004,
    PS_FILE_ID_CAS_1X_MAINFSM_C             = CAS_TEAM_FILE_ID + 0x0005,
    PS_FILE_ID_CAS_1XCASM_ENTRY_C           = CAS_TEAM_FILE_ID + 0x0006,
    PS_FILE_ID_CAS_1XCMEAS_ENTRY_C          = CAS_TEAM_FILE_ID + 0x0007,
    PS_FILE_ID_CAS_1X_INITFSM_C             = CAS_TEAM_FILE_ID + 0x0008,
    PS_FILE_ID_CAS_1X_PRINTFSM_C            = CAS_TEAM_FILE_ID + 0x0009,
    PS_FILE_ID_CAS_1X_MSGCOMM_C             = CAS_TEAM_FILE_ID + 0x000a,
    PS_FILE_ID_CAS_1X_NASITF_C              = CAS_TEAM_FILE_ID + 0x000b,
    PS_FILE_ID_CAS_1X_INITENTRY_C           = CAS_TEAM_FILE_ID + 0x000c,
    PS_FILE_ID_CAS_1X_INITFLOW_C            = CAS_TEAM_FILE_ID + 0x000d,
    PS_FILE_ID_CAS_1X_INITRELALL_C          = CAS_TEAM_FILE_ID + 0x000e,
    PS_FILE_ID_CAS_1X_INITUIM_C             = CAS_TEAM_FILE_ID + 0x000f,
    PS_FILE_ID_CAS_1X_CSRCHENTRY_C          = CAS_TEAM_FILE_ID + 0x0010,
    PS_FILE_ID_CAS_1X_MNTN_C                = CAS_TEAM_FILE_ID + 0x0011,
    PS_FILE_ID_CAS_1X_MAINCCB_C             = CAS_TEAM_FILE_ID + 0x0012,
    PS_FILE_ID_CAS_1X_TIMER_C               = CAS_TEAM_FILE_ID + 0x0013,
    PS_FILE_ID_CAS_1X_MAINOTA_C             = CAS_TEAM_FILE_ID + 0x0014,
    PS_FILE_ID_CAS_1X_FSMCOMM_C             = CAS_TEAM_FILE_ID + 0x0015,
    PS_FILE_ID_CAS_1X_PHYITFCOMM_C          = CAS_TEAM_FILE_ID + 0x0016,
    PS_FILE_ID_CAS_1X_PHYITFCHCFG_C         = CAS_TEAM_FILE_ID + 0x0017,
    PS_FILE_ID_CAS_1X_PHYITFFSM_C           = CAS_TEAM_FILE_ID + 0x0018,
    PS_FILE_ID_CAS_1X_PHYITFSRCHCFG_C       = CAS_TEAM_FILE_ID + 0x0019,
    PS_FILE_ID_CAS_1X_SRCHCOMPROC_C         = CAS_TEAM_FILE_ID + 0x001a,
    PS_FILE_ID_CAS_1X_SRCHFSM_C             = CAS_TEAM_FILE_ID + 0x001b,
    PS_FILE_ID_CAS_1X_SRCHMSG_C             = CAS_TEAM_FILE_ID + 0x001c,
    PS_FILE_ID_CAS_1X_SRCHSYSACQ_C          = CAS_TEAM_FILE_ID + 0x001d,
    PS_FILE_ID_CAS_1X_TTFITFENTRY_C         = CAS_TEAM_FILE_ID + 0x001e,
    PS_FILE_ID_CAS_1X_TTFITFMACCFG_C        = CAS_TEAM_FILE_ID + 0x001f,
    PS_FILE_ID_CAS_1X_TTFITFLACCFG_C        = CAS_TEAM_FILE_ID + 0x0020,
    PS_FILE_ID_CAS_1X_TTFITFRLPCFG_C        = CAS_TEAM_FILE_ID + 0x0021,
    PS_FILE_ID_CAS_1X_TTFITFRRMITF_C        = CAS_TEAM_FILE_ID + 0x0022,
    PS_FILE_ID_CAS_MNTN_C                   = CAS_TEAM_FILE_ID + 0x0023,
    PS_FILE_ID_CAS_FSM_C                    = CAS_TEAM_FILE_ID + 0x0024,
    PS_FILE_ID_CAS_PRINTFSM_C               = CAS_TEAM_FILE_ID + 0x0025,
    PS_FILE_ID_CAS_FSMCOMM_C                = CAS_TEAM_FILE_ID + 0x0026,
    PS_FILE_ID_CAS_1X_OHMUPDATE_C           = CAS_TEAM_FILE_ID + 0x0027,
    PS_FILE_ID_CAS_1X_OHMSAVEIE_C           = CAS_TEAM_FILE_ID + 0x0028,
    PS_FILE_ID_CAS_1X_COMMFUN_C             = CAS_TEAM_FILE_ID + 0x0029,
    PS_FILE_ID_CAS_1X_COMMSAVEIE_C          = CAS_TEAM_FILE_ID + 0x002a,
    PS_FILE_ID_CAS_1X_CCHGLOBAL_C           = CAS_TEAM_FILE_ID + 0x002b,
    PS_FILE_ID_CAS_1X_CCHCOMM_C             = CAS_TEAM_FILE_ID + 0x002c,
    PS_FILE_ID_CAS_1X_CCHMSG_C              = CAS_TEAM_FILE_ID + 0x002d,
    PS_FILE_ID_CAS_1X_ACSFLOW_C             = CAS_TEAM_FILE_ID + 0x002e,
    PS_FILE_ID_CAS_1X_AUTHENTICATION_C      = CAS_TEAM_FILE_ID + 0x002f,
    PS_FILE_ID_CAS_1X_SSDUPDATE_C           = CAS_TEAM_FILE_ID + 0x0030,
    PS_FILE_ID_CAS_1X_ACSFSM_C              = CAS_TEAM_FILE_ID + 0x0031,
    PS_FILE_ID_CAS_1X_ACSHANDOFF_C          = CAS_TEAM_FILE_ID + 0x0032,
    PS_FILE_ID_CAS_1X_ACSREGFLOW_C          = CAS_TEAM_FILE_ID + 0x0033,
    PS_FILE_ID_CAS_1X_CCHLOST_C             = CAS_TEAM_FILE_ID + 0x0034,
    PS_FILE_ID_CAS_1X_ACSHOFLOW_C           = CAS_TEAM_FILE_ID + 0x0035,
    PS_FILE_ID_CAS_1X_MEASCFG_C             = CAS_TEAM_FILE_ID + 0x0036,
    PS_FILE_ID_CAS_1X_MEASFSM_C             = CAS_TEAM_FILE_ID + 0x0037,
    PS_FILE_ID_CAS_1X_MEASMSG_C             = CAS_TEAM_FILE_ID + 0x0038,
    PS_FILE_ID_CAS_1X_MEASCOMPROC_C         = CAS_TEAM_FILE_ID + 0x0039,
    PS_FILE_ID_CAS_1X_MEASSAVEIE_C          = CAS_TEAM_FILE_ID + 0x003a,
    PS_FILE_ID_CAS_1X_PHYITFMEASCFG_C       = CAS_TEAM_FILE_ID + 0x003b,
    PS_FILE_ID_CAS_1X_TCHFLOW_C             = CAS_TEAM_FILE_ID + 0x003c,
    PS_FILE_ID_CAS_1X_TCHFSM_C              = CAS_TEAM_FILE_ID + 0x003d,
    PS_FILE_ID_CAS_1X_TCHENTRY_C            = CAS_TEAM_FILE_ID + 0x003e,
    PS_FILE_ID_CAS_1X_TCHSNDMSG_C           = CAS_TEAM_FILE_ID + 0x003f,
    PS_FILE_ID_CAS_1X_TCHCOMM_C             = CAS_TEAM_FILE_ID + 0x0040,
    PS_FILE_ID_CAS_1X_TCHCTRLSERVICE_C      = CAS_TEAM_FILE_ID + 0x0041,
    PS_FILE_ID_CAS_1X_TCHRELEASE_C          = CAS_TEAM_FILE_ID + 0x0042,
    PS_FILE_ID_CAS_1X_TCHPWRCTRL_C          = CAS_TEAM_FILE_ID + 0x0043,
    PS_FILE_ID_CAS_1X_TCHHARDHANDOFF_C      = CAS_TEAM_FILE_ID + 0x0044,
    PS_FILE_ID_CAS_1X_TCHSOFTHANDOFF_C      = CAS_TEAM_FILE_ID + 0x0045,
    PS_FILE_ID_CAS_1X_TCHSAVEIE_C           = CAS_TEAM_FILE_ID + 0x0046,
    PS_FILE_ID_CAS_1X_TCHPARA_C             = CAS_TEAM_FILE_ID + 0x0047,
    PS_FILE_ID_CAS_1X_TCHPWRUPFUNC_C        = CAS_TEAM_FILE_ID + 0x0048,
    PS_FILE_ID_CAS_1X_PAGE_RESPONSE_C       = CAS_TEAM_FILE_ID + 0x0049,
    PS_FILE_ID_CAS_1X_ACSORIGATTEMPT_C      = CAS_TEAM_FILE_ID + 0x004a,
    PS_FILE_ID_CAS_1X_CAPABILITY_C          = CAS_TEAM_FILE_ID + 0x004b,
    PS_FILE_ID_CAS_1X_MSG_TRANSMIT_C        = CAS_TEAM_FILE_ID + 0x004c,
    PS_FILE_ID_CAS_1X_ORD_OR_MSG_RSP_C      = CAS_TEAM_FILE_ID + 0x004d,
    PS_FILE_ID_CAS_1X_SLOTTEDMODE_C         = CAS_TEAM_FILE_ID + 0x004e,
    PS_FILE_ID_CAS_1X_SRV_RED_C             = CAS_TEAM_FILE_ID + 0x004f,
    PS_FILE_ID_CAS_1X_SRDFSM_C              = CAS_TEAM_FILE_ID + 0x0050,
    PS_FILE_ID_CAS_1X_MEASMNTN_C            = CAS_TEAM_FILE_ID + 0x0051,
    PS_FILE_ID_CAS_1X_TESTDATASO_C          = CAS_TEAM_FILE_ID + 0x0052,
    PS_FILE_ID_CAS_1X_HRPDITF_C             = CAS_TEAM_FILE_ID + 0x0053,
    PS_FILE_ID_CAS_1X_USIMITFCFG_C          = CAS_TEAM_FILE_ID + 0x0054,
    /* for CDMA 1X, 2013-9-3, end */

    /* CAS, for CDMA HRPD, 2013-9-3, begin */
    PS_FILE_ID_CAS_HRPD_MSGCOMM_C                       = CAS_TEAM_FILE_ID + 0x0100,
    PS_FILE_ID_CAS_HRPD_TIMER_C                         = CAS_TEAM_FILE_ID + 0x0101,
    PS_FILE_ID_CAS_HRPD_MNTN_C                          = CAS_TEAM_FILE_ID + 0x0102,
    PS_FILE_ID_CAS_HSCP_ENTRY_C                         = CAS_TEAM_FILE_ID + 0x0103,
    PS_FILE_ID_CAS_TIMER_C                              = CAS_TEAM_FILE_ID + 0x0104,
    PS_FILE_ID_CAS_HRPDFSM_C                            = CAS_TEAM_FILE_ID + 0x0105,
    PS_FILE_ID_CAS_HRPDHALMP_ENTRY_C                    = CAS_TEAM_FILE_ID + 0x0106,
    PS_FILE_ID_CAS_HRPDHALMP_FLOW_C                     = CAS_TEAM_FILE_ID + 0x0107,
    PS_FILE_ID_CAS_HRPD_HALMP_FLOW_EUTRAN_C             = CAS_TEAM_FILE_ID + 0x0108,
    PS_FILE_ID_CAS_HRPDHALMP_RESELTOEUTRAN_C            = CAS_TEAM_FILE_ID + 0x0109,
    PS_FILE_ID_CAS_HRPD_HALMP_EUTRAN_RESEL_TO_HRPD_C    = CAS_TEAM_FILE_ID + 0x010a,
    PS_FILE_ID_CAS_HRPDHALMP_L2CBSR_C                   = CAS_TEAM_FILE_ID + 0x010b,
    PS_FILE_ID_CAS_HSP_ENTRY_C                          = CAS_TEAM_FILE_ID + 0x010c,
    PS_FILE_ID_CAS_HRPD_MAIN_C                          = CAS_TEAM_FILE_ID + 0x010d,
    PS_FILE_ID_CAS_HRPD_MAINCCB_C                       = CAS_TEAM_FILE_ID + 0x010e,
    PS_FILE_ID_CAS_HRPD_HALMP_SYS_SYNC_C                = CAS_TEAM_FILE_ID + 0x010f,
    PS_FILE_ID_CAS_HRPD_INIT_ENTRY_C                    = CAS_TEAM_FILE_ID + 0x0110,
    PS_FILE_ID_CAS_HRPD_INIT_PILOTSEARCH_C              = CAS_TEAM_FILE_ID + 0x0111,
    PS_FILE_ID_CAS_HRPDHALMP_FSM_C                      = CAS_TEAM_FILE_ID + 0x0112,
    PS_FILE_ID_CAS_HRPDINIT_FSM_C                       = CAS_TEAM_FILE_ID + 0x0113,
    PS_FILE_ID_CAS_HRPDHRUP_ENTRY_C                     = CAS_TEAM_FILE_ID + 0x0114,
    PS_FILE_ID_CAS_HRPD_NASITF_C                        = CAS_TEAM_FILE_ID + 0x0115,
    PS_FILE_ID_CAS_HRPD_PHYITFCHCFG_C                   = CAS_TEAM_FILE_ID + 0x0116,
    PS_FILE_ID_CAS_INTRA_MSG_COMM_C                     = CAS_TEAM_FILE_ID + 0x0117,
    PS_FILE_ID_CAS_HRPD_OHMUPDATE_C                     = CAS_TEAM_FILE_ID + 0x0118,
    PS_FILE_ID_CAS_HRPD_MAINFSM_C                       = CAS_TEAM_FILE_ID + 0x0119,
    PS_FILE_ID_CAS_HRPD_TTFITF_C                        = CAS_TEAM_FILE_ID + 0x011a,
    PS_FILE_ID_CAS_HRPD_TTFITFFSM_C                     = CAS_TEAM_FILE_ID + 0x011b,
    PS_FILE_ID_CAS_HRPDIDLE_FLOW_C                      = CAS_TEAM_FILE_ID + 0x011c,
    PS_FILE_ID_CAS_HRPDIDLE_FSM_C                       = CAS_TEAM_FILE_ID + 0x011d,
    PS_FILE_ID_CAS_HRPD_HSCP_MSG_C                      = CAS_TEAM_FILE_ID + 0x011e,
    PS_FILE_ID_CAS_HRPD_HSCP_FLOW_C                     = CAS_TEAM_FILE_ID + 0x011f,
    PS_FILE_ID_CAS_HRPD_HSCP_AN_NEG_C                   = CAS_TEAM_FILE_ID + 0x0120,
    PS_FILE_ID_CAS_HRPD_HSCP_AT_NEG_C                   = CAS_TEAM_FILE_ID + 0x0121,
    PS_FILE_ID_CAS_HRPD_HSCP_COMMONPROC_C               = CAS_TEAM_FILE_ID + 0x0122,
    PS_FILE_ID_CAS_COMMFUNC_C                           = CAS_TEAM_FILE_ID + 0x0123,
    PS_FILE_ID_CAS_HRPD_HSCP_FSM_C                      = CAS_TEAM_FILE_ID + 0x0124,
    PS_FILE_ID_CAS_HRPDCONN_FLOW_C                      = CAS_TEAM_FILE_ID + 0x0125,
    PS_FILE_ID_CAS_HRPDCONN_FSM_C                       = CAS_TEAM_FILE_ID + 0x0126,
    PS_FILE_ID_CAS_HRPDHALMP_CONNSETUP_C                = CAS_TEAM_FILE_ID + 0x0127,
    PS_FILE_ID_CAS_HRPDHALMP_CONNSETUP_SEND_MSG_C       = CAS_TEAM_FILE_ID + 0x0128,
    PS_FILE_ID_CAS_HRPDRUP_ROUTE_UPDATE_C               = CAS_TEAM_FILE_ID + 0x0129,
    PS_FILE_ID_CAS_HRPDRUP_MEAS_C                       = CAS_TEAM_FILE_ID + 0x012a,
    PS_FILE_ID_CAS_HRPD_RUP_SLAVE_MEAS_C                = CAS_TEAM_FILE_ID + 0x012b,
    PS_FILE_ID_CAS_HRPDRUP_FLOW_C                       = CAS_TEAM_FILE_ID + 0x012c,
    PS_FILE_ID_CAS_HRPDRUP_FSM_C                        = CAS_TEAM_FILE_ID + 0x012d,
    PS_FILE_ID_CAS_HRPD_RUPMNTN_C                       = CAS_TEAM_FILE_ID + 0x012e,
    PS_FILE_ID_CAS_HRPD_HSCP_APPLICATION_C              = CAS_TEAM_FILE_ID + 0x012f,
    PS_FILE_ID_CAS_HRPD_HSCP_SESSION_C                  = CAS_TEAM_FILE_ID + 0x0130,
    PS_FILE_ID_CAS_HRPD_HSCP_CONNECTION_NEG_C           = CAS_TEAM_FILE_ID + 0x0131,
    PS_FILE_ID_CAS_HRPDHSCP_MAC_NEG_C                   = CAS_TEAM_FILE_ID + 0x0132,
    PS_FILE_ID_CAS_HRPDHSCP_STREAM_NEG_C                = CAS_TEAM_FILE_ID + 0x0133,
    PS_FILE_ID_CAS_HRPDHSCP_SECURITY_NEG_C              = CAS_TEAM_FILE_ID + 0x0134,
    PS_FILE_ID_CAS_HRPD_HSCP_KEYEXCHANGE_C              = CAS_TEAM_FILE_ID + 0x0135,
    PS_FILE_ID_CAS_HRPD_LTEITF_C                        = CAS_TEAM_FILE_ID + 0x0136,
    PS_FILE_ID_CAS_HRPDRUP_MEAS_EUTRAN_C                = CAS_TEAM_FILE_ID + 0x0137,
    PS_FILE_ID_CAS_HRPD_OHMUPDATEEUTRAN_C               = CAS_TEAM_FILE_ID + 0x0138,
    PS_FILE_ID_CAS_HRPD_HRPDRRM_C                       = CAS_TEAM_FILE_ID + 0x0139,
    PS_FILE_ID_CAS_HRPD_INIT_BSR_EUTRAN_C               = CAS_TEAM_FILE_ID + 0x013a,
    PS_FILE_ID_CAS_HRPD_HALMP_L2C_DEDIRECT_C            = CAS_TEAM_FILE_ID + 0x013b,
    PS_FILE_ID_CAS_HRPD_HALMP_MNTN_C                    = CAS_TEAM_FILE_ID + 0x013c,
    PS_FILE_ID_CAS_HRPD_INIT_MNTN_C                     = CAS_TEAM_FILE_ID + 0x013d,
    PS_FILE_ID_CAS_HRPDHSP_FSM_C                        = CAS_TEAM_FILE_ID + 0x013e,
    /* CAS, for CDMA HRPD, 2013-9-3, end */

    CAS_FILE_ID_BUTT                                    = 0x0fff
}CAS_FILE_ID_DEFINE_ENUM;
typedef unsigned long  CAS_FILE_ID_DEFINE_ENUM_UINT32;
/* DRV源文件ID号 */
typedef enum
{
                 DRV_FILE_ID_AMBADMTIMERDRV_C = DRV_TEAM_FILE_ID,
/* 2049  */      DRV_FILE_ID_AMBAINTRCTL_C,
/* 2050  */      DRV_FILE_ID_AMBASIO_C,
/* 2051  */      DRV_FILE_ID_AMBASYSCTRL_C,
/* 2052  */      DRV_FILE_ID_AMBATIMER_C,
/* 2053  */      DRV_FILE_ID_AMBAWDT_C,
/* 2054  */      DRV_FILE_ID_AMTS_C,
/* 2055  */      DRV_FILE_ID_BOOTCONFIG_C,
/* 2056  */      DRV_FILE_ID_BOOTINIT_C,
/* 2057  */      DRV_FILE_ID_CONTRLDRV_C,
/* 2058  */      DRV_FILE_ID_DBG_C,
/* 2059  */      DRV_FILE_ID_DEVICE_C,
/* 2060  */      DRV_FILE_ID_DIRLIB_C,
/* 2061  */      DRV_FILE_ID_DMA_C,
/* 2062  */      DRV_FILE_ID_DMAPI_C,
/* 2063  */      DRV_FILE_ID_DMCORE_C,
/* 2064  */      DRV_FILE_ID_DMDRV_C,
/* 2065  */      DRV_FILE_ID_DMERTCDRV_C,
/* 2066  */      DRV_FILE_ID_DMHKADCDRV_C,
/* 2067  */      DRV_FILE_ID_DMIRTCDRV_C,
/* 2068  */      DRV_FILE_ID_DMKEYPADDRV_C,
/* 2069  */      DRV_FILE_ID_DMLIB_C,
/* 2070  */      DRV_FILE_ID_DMLOGCTRL_C,
/* 2071  */      DRV_FILE_ID_DMSPY_C,
/* 2072  */      DRV_FILE_ID_DMSPY2_C,
/* 2073  */      DRV_FILE_ID_DOSFSFAT_C,
/* 2074  */      DRV_FILE_ID_DOSVDIRLIB_C,
/* 2075  */      DRV_FILE_ID_DRVFLASH_C,
/* 2076  */      DRV_FILE_ID_DRVLOG_C,
/* 2077  */      DRV_FILE_ID_DRVRTC_C,
/* 2078  */      DRV_FILE_ID_DWLD_L18_C,
/* 2079  */      DRV_FILE_ID_DWLD_M18_C,
/* 2080  */      DRV_FILE_ID_ECSUSBDEVICEDL_C,
/* 2081  */      DRV_FILE_ID_ECSUSBDEVICE_C,
/* 2082  */      DRV_FILE_ID_ECSUSBDMADL_C,
/* 2083  */      DRV_FILE_ID_ECSUSBDMA_C,
/* 2084  */      DRV_FILE_ID_ECSUSBINITDL_C,
/* 2085  */      DRV_FILE_ID_ECSUSBINIT_C,
/* 2086  */      DRV_FILE_ID_ECSUSBNET_C,
/* 2087  */      DRV_FILE_ID_ECSUSBTARGLIBDL_C,
/* 2088  */      DRV_FILE_ID_ECSUSBTARGLIB_C,
/* 2089  */      DRV_FILE_ID_ECSVERSION_C,
/* 2090  */      DRV_FILE_ID_EDMREG_C,
/* 2091  */      DRV_FILE_ID_EDRVNAMEPUBLIC_C,
/* 2092  */      DRV_FILE_ID_EDRVNAME_C,
/* 2093  */      DRV_FILE_ID_ENC28J60_C,
/* 2094  */      DRV_FILE_ID_ENC28J60END_C,
/* 2095  */      DRV_FILE_ID_FDIDRV_C,
/* 2096  */      DRV_FILE_ID_FDI_ACCTEST_C,
/* 2097  */      DRV_FILE_ID_FDI_FILE_TEST_C,
/* 2098  */      DRV_FILE_ID_FDI_INIT_MOUNT_C,
/* 2099  */      DRV_FILE_ID_FFS_HASHTBL_C,
/* 2100  */      DRV_FILE_ID_FFS_MALLOC_C,
/* 2101  */      DRV_FILE_ID_FI_RTOS_C,
/* 2102  */      DRV_FILE_ID_FLASHDAVAPI_C,
/* 2103  */      DRV_FILE_ID_GPIO_C,
/* 2104  */      DRV_FILE_ID_GPIOINT_C,
/* 2105  */      DRV_FILE_ID_HI6411SPI_C,
/* 2106  */      DRV_FILE_ID_HI_SD_MMC_BUS_C,
/* 2107  */      DRV_FILE_ID_HI_SD_MMC_HOST_C,
/* 2108  */      DRV_FILE_ID_HKADC_C,
/* 2109  */      DRV_FILE_ID_I28F256L18FLASH_C,
/* 2110  */      DRV_FILE_ID_I28F256M18FLASH_C,
/* 2111  */      DRV_FILE_ID_I28F256MTD_C,
/* 2112  */      DRV_FILE_ID_I2C_CORE_C,
/* 2113  */      DRV_FILE_ID_IFM_API_C,
/* 2114  */      DRV_FILE_ID_IFM_CMN_C,
/* 2115  */      DRV_FILE_ID_IFM_MFM_C,
/* 2116  */      DRV_FILE_ID_IFM_SYS_C,
/* 2117  */      DRV_FILE_ID_IFM_VM_C,
/* 2118  */      DRV_FILE_ID_INT_C,
/* 2119  */      DRV_FILE_ID_INTTST_C,
/* 2120  */      DRV_FILE_ID_IOLIB_C,
/* 2121  */      DRV_FILE_ID_IOSLIB_C,
/* 2122  */      DRV_FILE_ID_KEYPAD_C,
/* 2123  */      DRV_FILE_ID_KPDGPIO_C,
/* 2124  */      DRV_FILE_ID_LOGGER_C,
/* 2125  */      DRV_FILE_ID_MAIN_C,
/* 2126  */      DRV_FILE_ID_MFM_FM_API_C,
/* 2127  */      DRV_FILE_ID_MFM_INT_DLT_C,
/* 2128  */      DRV_FILE_ID_MFM_INT_FLT_C,
/* 2129  */      DRV_FILE_ID_MFM_INT_FORMAT_C,
/* 2130  */      DRV_FILE_ID_MFM_INT_OST_C,
/* 2131  */      DRV_FILE_ID_MFM_INT_PBT_C,
/* 2132  */      DRV_FILE_ID_MFM_INT_RBAPI_C,
/* 2133  */      DRV_FILE_ID_MFM_INT_RBFSH_C,
/* 2134  */      DRV_FILE_ID_MFM_INT_RBINT_C,
/* 2135  */      DRV_FILE_ID_MFM_INT_RECLAIM_C,
/* 2136  */      DRV_FILE_ID_MFM_INT_SCAN_C,
/* 2137  */      DRV_FILE_ID_MFM_INT_SYSTEM_C,
/* 2138  */      DRV_FILE_ID_MFM_LOW_FLASH_C,
/* 2139  */      DRV_FILE_ID_MFM_MUSB_API_C,
/* 2140  */      DRV_FILE_ID_MFM_MUSB_BOOT_C,
/* 2141  */      DRV_FILE_ID_MFM_MUSB_CACHE_C,
/* 2142  */      DRV_FILE_ID_MFM_MUSB_COMMON_C,
/* 2143  */      DRV_FILE_ID_MFM_MUSB_DCF_C,
/* 2144  */      DRV_FILE_ID_MFM_MUSB_DECF_C,
/* 2145  */      DRV_FILE_ID_MFM_MUSB_ENTRY_C,
/* 2146  */      DRV_FILE_ID_MFM_MUSB_EXT_C,
/* 2147  */      DRV_FILE_ID_MFM_MUSB_FILE_C,
/* 2148  */      DRV_FILE_ID_MFM_MUSB_FS_WRAP_C,
/* 2149  */      DRV_FILE_ID_MFM_MUSB_INFO_C,
/* 2150  */      DRV_FILE_ID_MFM_MUSB_LIST_C,
/* 2151  */      DRV_FILE_ID_MFM_MUSB_PLR_C,
/* 2152  */      DRV_FILE_ID_MFM_MUSB_REGROUP_C,
/* 2153  */      DRV_FILE_ID_MFM_MUSB_SCANDIR_C,
/* 2154  */      DRV_FILE_ID_MFM_MUSB_UCF_C,
/* 2155  */      DRV_FILE_ID_MFM_MUSB_VFAT_C,
/* 2156  */      DRV_FILE_ID_MNTNDRV_C,
/* 2157  */      DRV_FILE_ID_MTD_CARR_C,
/* 2158  */      DRV_FILE_ID_MTD_CFI_C,
/* 2159  */      DRV_FILE_ID_MTD_CFIR_C,
/* 2160  */      DRV_FILE_ID_MTD_GEN_C,
/* 2161  */      DRV_FILE_ID_MTD_GENR_C,
/* 2162  */      DRV_FILE_ID_MTD_INIT_C,
/* 2163  */      DRV_FILE_ID_MTD_LIB_C,
/* 2164  */      DRV_FILE_ID_MTD_PARR_C,
/* 2165  */      DRV_FILE_ID_MTD_SIB_C,
/* 2166  */      DRV_FILE_ID_MTD_SIBR_C,
/* 2167  */      DRV_FILE_ID_MTD_STARR_C,
/* 2168  */      DRV_FILE_ID_MUSB_DEMO_C,
/* 2169  */      DRV_FILE_ID_OS_C,
/* 2170  */      DRV_FILE_ID_OSSLIBDL_C,
/* 2171  */      DRV_FILE_ID_OSSLIB_C,
/* 2172  */      DRV_FILE_ID_OS_API_C,
/* 2173  */      DRV_FILE_ID_PL131_C,
/* 2174  */      DRV_FILE_ID_PMHI6402_C,
/* 2175  */      DRV_FILE_ID_PMUDMINTF_C,
/* 2176  */      DRV_FILE_ID_POS_API_C,
/* 2177  */      DRV_FILE_ID_PWRINTERFACE_C,
/* 2178  */      DRV_FILE_ID_RTC_C,
/* 2179  */      DRV_FILE_ID_RTCBOTH_C,
/* 2180  */      DRV_FILE_ID_RTCHI6402_C,
/* 2181  */      DRV_FILE_ID_SCI_C,
/* 2182  */      DRV_FILE_ID_SCIINTERFACE_C,
/* 2183  */      DRV_FILE_ID_SPIDRV_C,
/* 2184  */      DRV_FILE_ID_STANDLIB_C,
/* 2185  */      DRV_FILE_ID_SYSSERIAL_C,
/* 2186  */      DRV_FILE_ID_SYSTFFS_C,
/* 2187  */      DRV_FILE_ID_TEST_C,
/* 2188  */      DRV_FILE_ID_TEST_BOOT_DIS_C,
/* 2189  */      DRV_FILE_ID_TFFSCONFIG_C,
/* 2190  */      DRV_FILE_ID_TIMER_C,
/* 2191  */      DRV_FILE_ID_TIMERTST_C,
/* 2192  */      DRV_FILE_ID_TT_ANALYSECALLSTACK_C,
/* 2193  */      DRV_FILE_ID_USB4DOWNLOAD_C,
/* 2194  */      DRV_FILE_ID_USBCDROM_C,
/* 2195  */      DRV_FILE_ID_USBDESCRCOPYLIBDL_C,
/* 2196  */      DRV_FILE_ID_USBDESCRCOPYLIB_C,
/* 2197  */      DRV_FILE_ID_USBDISK_C,
/* 2198  */      DRV_FILE_ID_USBHANDLELIBDL_C,
/* 2199  */      DRV_FILE_ID_USBHANDLELIB_C,
/* 2200  */      DRV_FILE_ID_USBLISTLIBDL_C,
/* 2201  */      DRV_FILE_ID_USBLISTLIB_C,
/* 2202  */      DRV_FILE_ID_USBMODEMBULK_C,
/* 2203  */      DRV_FILE_ID_USBMODEMINT_C,
/* 2204  */      DRV_FILE_ID_USBMUX_C,
/* 2205  */      DRV_FILE_ID_USBSERIAL_C,
/* 2206  */      DRV_FILE_ID_USBTARGLIBDL_C,
/* 2207  */      DRV_FILE_ID_USBTARGLIB_C,
/* 2208  */      DRV_FILE_ID_USBTCDLIBDL_C,
/* 2209  */      DRV_FILE_ID_USBTCDLIB_C,
/* 2210  */      DRV_FILE_ID_USIMDMINTF_C,
/* 2211  */      DRV_FILE_ID_USIMSYSTEST_C,
/* 2212  */      DRV_FILE_ID_USRAPPINIT_C,
/* 2213  */      DRV_FILE_ID_USRCONFIG_C,
/* 2214  */      DRV_FILE_ID_USRENTRY_C,
/* 2215  */      DRV_FILE_ID_USRFSLIB_C,
/* 2216  */      DRV_FILE_ID_UTILITY_FS_C,
/* 2217  */      DRV_FILE_ID_VMBASELIB_C,
/* 2218  */      DRV_FILE_ID_WDTDRV_C,
/* 2219  */      DRV_FILE_ID_WDTTEST_C,

                DRV_FILE_ID_BUTT
}DRV_FILE_ID_DEFINE_ENUM;


/*媒体源文件ID号*/
typedef enum
{
                 CODEC_FILE_ID_FSM_C = HIFI_TEAM_FILE_ID,
/* 4097  */      CODEC_FILE_ID_UCOM_COMM_C,
/* 4098  */      CODEC_FILE_ID_UCOM_MEM_C,
/* 4099  */      CODEC_FILE_ID_UCOM_STUB_C,
/* 4100  */      CODEC_FILE_ID_VOICE_AMR_MODE_C,
/* 4101  */      CODEC_FILE_ID_VOICE_API_C,
/* 4102  */      CODEC_FILE_ID_VOICE_DEBUG_C,
/* 4103  */      CODEC_FILE_ID_VOICE_LOG_C,
/* 4104  */      CODEC_FILE_ID_VOICE_MC_C,
/* 4105  */      CODEC_FILE_ID_VOICE_PCM_C,
/* 4106  */      CODEC_FILE_ID_VOICE_PROC_C,
/* 4107  */      PS_FILE_ID_OM_COMMRX_C,
/* 4108  */      PS_FILE_ID_PS_LOG_APP_C,
                 MED_FILE_ID_BUTT
}MED_FILE_ID_DEFINE_ENUM;

/*APP源文件ID号*/
typedef enum
{
                 APP_FILE_ID_TEL_CLIENTSESSION_C = APP_TEAM_FILE_ID,
/* 6145  */      APP_FILE_ID_VOS_ADAPTER_C,
/* 6146  */      APP_FILE_ID_TAF_ADAPTER_C,
                 APP_FILE_ID_BUTT
}APP_FILE_ID_DEFINE_ENUM;


/*MSP源文件ID号*/
typedef enum
{
                 MSP_FILE_ID_AT_LTE_COMMON_C = MSP_TEAM_FILE_ID,
                 MSP_FILE_ID_AT_LTE_UPGRADE_PROC_C,
                 MSP_FILE_ID_AT_LTE_EVENTREPORT_C,
                 MSP_FILE_ID_AT_LTE_CT_PROC_C,
                 MSP_FILE_ID_AT_LTE_ST_PROC_C,
                 MSP_FILE_ID_AT_LTE_MS_PROC_C,
                 MSP_FILE_ID_FTM_CT_CORE_C,
                 MSP_FILE_ID_MSP_SERVICE_C,
                 MSP_FILE_ID_MSP_DEBUG_C,
                 MSP_FILE_ID_DIAG_ACORE_COMMON_C,
                 MSP_FILE_ID_DIAG_CCORE_COMMON_C,
                 MSP_FILE_ID_DIAG_SERVICE_C,
                 MSP_FILE_ID_DIAG_ERRORLOG_C,
                 MSP_FILE_ID_DIAG_MESSAGE_C,
                 MSP_FILE_ID_DIAG_MSGMSP_C,
                 MSP_FILE_ID_DIAG_MSGBSP_C,
                 MSP_FILE_ID_DIAG_MSGDSP_C,
                 MSP_FILE_ID_DIAG_MSGBBP_C,
                 MSP_FILE_ID_DIAG_MSGPS_C,
                 MSP_FILE_ID_DIAG_MSGHIFI_C,
                 MSP_FILE_ID_DIAG_API_C,
                 MSP_FILE_ID_DIAG_CFG_C,
                 MSP_FILE_ID_DIAG_DEBUG_C,
                 MSP_FILE_ID_DIAG_BUF_CTRL_C,
                 MSP_FILE_ID_DIAG_FS_PROC_C,
                 MSP_FILE_ID_BBP_AGENT_C,
                 MSP_FILE_ID_L4A_PROC_C,
                 MSP_FILE_ID_L4A_FUN_C,
                 MSP_FILE_ID_DRX_API_C,
                 MSP_FILE_ID_DRX_TEST_C,
                 MSP_FILE_ID_FTM_TDS_CMD_C,
                 MSP_FILE_ID_FTM_MAILBOX_PROC_C,
                 MSP_FILE_ID_FTM_COMMON_API_C,
                 MSP_FILE_ID_FTM_COMM_CMD_C,
                 MSP_FILE_ID_FTM_BASE_CMD_C,
                 MSP_FILE_ID_FTM_LTE_NONSIGNAL_BT_C,
                 MSP_FILE_ID_FTM_LTE_QUICK_CT_C,
                 MSP_FILE_ID_AT_COMM_CMD_C,
                 MSP_FILE_ID_LTE_SLEEPFLOW_C,
                 MSP_FILE_ID_FTM_MNTN_C,

                 MSP_FILE_ID_BUTT
}MSP_FILE_ID_DEFINE_ENUM;

/* CPROC */
typedef enum
{
    /* CDMA CPROC FILE ID START, l00322531, 2015/8/10
     * 如果要增加新的FILE ID,请添加此列表最后,PS_FILE_ID_CPROC_BUTT之前。
     */
    /* FWK */
    PS_FILE_ID_FWK_DLLIST_C = CPROC_TEAM_FILE_ID,
    PS_FILE_ID_FWK_ESS_C,
    PS_FILE_ID_FWK_ESS_MALLOC_C,
    PS_FILE_ID_FWK_FSM_C,
    PS_FILE_ID_UFSM_C,
    PS_FILE_ID_UFSM_LOGING_C,
    PS_FILE_ID_IFF_DUMPER_C,
    /* 1X */
    PS_FILE_ID_CDMA_SYSTEM_TIME_C,
    PS_FILE_ID_CPORC_1X_LOG_C,
    PS_FILE_ID_CPROC_1X_UTIL_ESS_DRIVER_C,
    PS_FILE_ID_CPROC_ENTRY_C,
    PS_FILE_ID_CPROC_UTIL_BOOT_C,
    PS_FILE_ID_CPROC_1X_CM_C,
    PS_FILE_ID_CPROC_1X_CM_AFC_PPM_C,
    PS_FILE_ID_CPROC_1X_CM_COMMON_CH_CONFIG_C,
    PS_FILE_ID_CPROC_1X_CM_IDLE_NON_SLOTTED_MODE_C,
    PS_FILE_ID_CPROC_1X_CM_COMMON_CH_CONFIG_PARAMS_C,
    PS_FILE_ID_CPROC_1X_CM_COMMON_CH_CONFIG_SDRC_C,
    PS_FILE_ID_CPROC_1X_CM_ENTRY_C,
    PS_FILE_ID_CPROC_1X_CM_FCH_DCCH_C,
    PS_FILE_ID_CPROC_1X_CM_FTCH_SUPERVISION_C,
    PS_FILE_ID_CPROC_1X_CM_PC_C,
    PS_FILE_ID_CPROC_1X_CM_PILOT_SEARCH_C,
    PS_FILE_ID_CPROC_1X_CM_POWER_UP_C,
    PS_FILE_ID_CPROC_1X_CM_SET_TIMING_C,
    PS_FILE_ID_CPROC_1X_CM_SET_WORK_MODE_C,
    PS_FILE_ID_CPROC_1X_CM_SIGNAL_LEVEL_SCAN_C,
    PS_FILE_ID_CPROC_1X_CM_TRAFFIC_CH_CONFIG_C,
    PS_FILE_ID_CPROC_1X_SM_MEAS_HANDLING_C,
    PS_FILE_ID_CPROC_1X_SM_MPS_HANDLING_C,
    PS_FILE_ID_CPROC_1X_PDB_C,
    PS_FILE_ID_CPROC_1X_PDB_MEAS_C,
    PS_FILE_ID_CPROC_1X_PDB_MEASCFG_C,
    PS_FILE_ID_CPROC_1X_DRX_RFA_C,
    PS_FILE_ID_CPROC_1X_DRX_AGPS_C,
    PS_FILE_ID_CPROC_1X_DRX_RFA_RELEASE_ALL_C,
    PS_FILE_ID_CPROC_1X_SM_C,
    PS_FILE_ID_CPROC_1X_DRX_SM_C,
    PS_FILE_ID_CPROC_1X_SM_IPS_C,
    PS_FILE_ID_CPROC_1X_DSP_ENTRY_C,
    PS_FILE_ID_CPROC_1X_SM_ENTRY_C,
    PS_FILE_ID_CPROC_1X_CM_IDLE_SLOTTED_MODE_C,
    PS_FILE_ID_CPROC_1X_CM_RELEASE_ALL_C,
    PS_FILE_ID_CPROC_1X_DRX_CM_C,
    PS_FILE_ID_CPROC_1X_DRX_CM_QPCH_C,
    PS_FILE_ID_CPROC_1X_RFA_C,
    PS_FILE_ID_CPROC_1X_SM_RELEASE_ALL_C,
    PS_FILE_ID_CPROC_1x_UTIL_NV_C,
    PS_FILE_ID_CPROC_1X_DM_C,
    PS_FILE_ID_CPROC_1X_DM_RULE_OF_ACCESS_C,
    PS_FILE_ID_CPROC_1X_DM_RULE_OF_FER_C,
    PS_FILE_ID_CPROC_1X_DM_RULE_OF_IDLE_CRC_C,
    PS_FILE_ID_CPROC_1X_DM_RULE_OF_IDLE_MEAS_C,
    PS_FILE_ID_CPROC_1X_DRX_RFA_RF_RESET_C,
    PS_FILE_ID_CPROC_1X_ERIC_MANAGE_C,
    PS_FILE_ID_CPROC_1X_ET_DELAY_C,
    /* RM */
    PS_FILE_ID_CPROC_RM_ASSIGNMENT_C,
    PS_FILE_ID_CPROC_RM_COMM_FUNC_C,
    PS_FILE_ID_CPROC_RM_COMM_MSG_C,
    PS_FILE_ID_CPROC_RM_PRIO_C,
    PS_FILE_ID_CPROC_RM_RAT_TOP_C,
    PS_FILE_ID_CPROC_RM_C,
    PS_FILE_ID_CPROC_RM_ENTRY_C,
    PS_FILE_ID_CPROC_RM_TIME_UTIL_C,
    PS_FILE_ID_CPROC_RM_WAIT_PAGING_C,
    /* HRPD */
    PS_FILE_ID_CPROC_HRPD_ENTRY_C,
    PS_FILE_ID_CPROC_HRPD_UTIL_NV_C,
    PS_FILE_ID_CPROC_HRPD_ESS_DRIVER_C,
    PS_FILE_ID_CPROC_HRPD_CM_C,
    PS_FILE_ID_CPROC_HRPD_CM_AC_CH_C,
    PS_FILE_ID_CPROC_HRPD_CM_CC_CH_C,
    PS_FILE_ID_CPROC_HRPD_CM_DCXO_C,
    PS_FILE_ID_CPROC_HRPD_CM_DRX_C,
    PS_FILE_ID_CPROC_HRPD_CM_DRX_IRAT_C,
    PS_FILE_ID_CPROC_HRPD_CM_LTE_IRAT_C,
    PS_FILE_ID_CPROC_HRPD_CM_PAGING_C,
    PS_FILE_ID_CPROC_HRPD_CM_SLS_C,
    PS_FILE_ID_CPROC_HRPD_CM_SUSPEND_C,
    PS_FILE_ID_CPROC_HRPD_CM_TCH_C,
    PS_FILE_ID_CPROC_HRPD_CM_TCH_HO_C,
    PS_FILE_ID_CPROC_HRPD_CM_CC_C,
    PS_FILE_ID_CPROC_HRPD_CM_SLAVE_C,
    PS_FILE_ID_CPROC_HRPD_CM_AC_C,
    PS_FILE_ID_CPROC_HRPD_CM_PILOT_SEARCH_C,
    PS_FILE_ID_CPROC_HRPD_CM_POWER_ON_C,
    PS_FILE_ID_CPROC_HRPD_CM_RESET_C,
    PS_FILE_ID_CPROC_HRPD_CM_SET_MODE_C,
    PS_FILE_ID_CPROC_HRPD_CM_ENTRY_C,
    PS_FILE_ID_CPROC_HRPD_CM_TCH_COMMON_C,
    PS_FILE_ID_CPROC_HRPD_SM_MEASUREMENT_C,
    PS_FILE_ID_CPROC_HRPD_SM_PILOTDATABASE_C,
    PS_FILE_ID_CPROC_HRPD_SM_MEASMODE_C,
    PS_FILE_ID_CPROC_HRPD_SM_SLAVEMEASUREMENT_C,
    PS_FILE_ID_CPROC_HRPD_SM_ENTRY_C,
    PS_FILE_ID_CPROC_HRPD_SM_MPS_C,
    PS_FILE_ID_CPROC_HRPD_SM_PS_C,
    PS_FILE_ID_CPROC_HRPD_SM_RESET_C,
    PS_FILE_ID_CPROC_HRPD_SM_SLS_C,
    PS_FILE_ID_CPROC_HRPD_CM_LPHY_WAKEUP_C,
    PS_FILE_ID_CPROC_HRPD_CM_ET_DELAY_C,
    PS_FILE_ID_CPROC_1X_CCBT_C,
    PS_FILE_ID_CPROC_1X_CM_SCH_C,


    /* TAS */
    PS_FILE_ID_CPROC_TAS_PROXY_C,
    PS_FILE_ID_CPROC_TAS_C,
    PS_FILE_ID_CPROC_TAS_ACCESS_ON_C,
    PS_FILE_ID_CPROC_TAS_TCH_ON_C,
    PS_FILE_ID_CPROC_TAS_SLS_C,

    PS_FILE_ID_CPROC_1X_NONPROTOCOL_C,
    PS_FILE_ID_CPROC_HRPD_CM_NONPROTOCOL_C,

    PS_FILE_ID_CPROC_1X_CM_CH_SUPERVISION_C,
    PS_FILE_ID_CPROC_1X_CM_CH_TCH_C,
    PS_FILE_ID_CPROC_1X_CM_TCH_C,
    PS_FILE_ID_CPROC_1X_CM_TCH_CSDR_CMD_MUX_C,
    PS_FILE_ID_CPROC_1X_CM_TCH_DEFAULT_SEQ_C,
    PS_FILE_ID_CPROC_1X_CM_TCH_ESTABLISH_SEQ_C,
    PS_FILE_ID_CPROC_1X_CM_TCH_EVENT_C,
    PS_FILE_ID_CPROC_1X_CM_TCH_HANDOFF_REVERT_SEQ_C,
    PS_FILE_ID_CPROC_1X_CM_TCH_HANDOFF_SEQ_C,
    PS_FILE_ID_CPROC_1X_CM_TCH_RECONFIG_SEQ_C,
    PS_FILE_ID_CPROC_1X_CM_TCH_RELEASE_SEQ_C,
    PS_FILE_ID_CPROC_1X_CM_TCH_SUSPEND_CTRL_C,
    PS_FILE_ID_CPROC_1X_CM_TCH_LONG_CODE_TOP_C,
    PS_FILE_ID_CPROC_1X_CM_TCH_LONG_CODE_SUB_C,
    PS_FILE_ID_CPROC_1X_CM_STATISTICS_C,
    PS_FILE_ID_CPROC_1X_ERR_LOG_C,
    PS_FILE_ID_CPROC_HRPD_ERR_LOG_C,
    PS_FILE_ID_CPROC_1X_LOG_C,
    PS_FILE_ID_CPROC_STATISTICS_C,
    PS_FILE_ID_CPROC_1X_STATISTICS_C,
    PS_FILE_ID_CPROC_HRPD_STATISTICS_C,

    PS_FILE_ID_CPROC_UTIL_FUNC_C,
    PS_FILE_ID_CPROC_MNTN_C,
    PS_FILE_ID_CPROC_1X_MNTN_C,
    PS_FILE_ID_CPROC_HRPD_MNTN_C,
    PS_FILE_ID_CPROC_RM_MNTN_C,
    PS_FILE_ID_CPROC_1X_CCB_C,
    PS_FILE_ID_CPROC_HRPD_CCB_C,
    PS_FILE_ID_CDMA_TIMING_DRV_C,

    PS_FILE_ID_CPROC_BUTT
    /* CDMA CPROC FILE ID END */
}CPROC_FILE_ID_DEFINE_ENUM;
typedef unsigned long  CPROC_FILE_ID_DEFINE_ENUM_UINT32;

typedef enum
{
    PS_FILE_ID_ED_CSN1CLIB_C = ENCODIX_TEAM_FILE_ID,
    PS_FILE_ID_ED_DYNAMIC_C,
    PS_FILE_ID_ED_CDMA_LIB_C,

    PS_FILE_ID_ED_CS0004_C,
    PS_FILE_ID_ED_C_CS0004_C,
    PS_FILE_ID_ED_USER_DEFINED_DATA_TYPES_CS0004_C,

    PS_FILE_ID_ED_C_CS0005_C,
    PS_FILE_ID_ED_USER_DEFINED_DATA_TYPES_CS0005_C,

    PS_FILE_ID_ED_C_CS0024_C,
    PS_FILE_ID_ED_C_RECOG_CS0024_C,

    PS_FILE_ID_ED_C_CS0063_C,
    PS_FILE_ID_ED_C_RECOG_CS0065_C,

    PS_FILE_ID_ED_C_CS0087_C,
    PS_FILE_ID_ED_C_RECOG_CS0087_C,
}ENCODIX_FILE_ID_DEFINE_ENUM;

/* 模块ID号 */
typedef unsigned int LOG_MODULE_ID_EN;

typedef enum
{
    LOG_SUBMOD_ID_BUTT = 0
}LOG_SUBMOD_ID_EN;




#ifdef OSA_DEBUG
/*#define OSA_ASSERT(exp) ( (exp)?(VOS_VOID)0:vos_assert(__FILE__, __LINE__) )
 */
#define OSA_ASSERT(exp) \
    if(!(exp))\
    {\
        vos_assert(__FILE__, __LINE__);\
        return; }
#define OSA_ASSERT_RTN(exp, ret) \
    if(!(exp))\
    {\
        vos_assert(__FILE__, __LINE__);\
        return ret; }
#else
#define OSA_ASSERT( exp ) ( (void)0 )
#define OSA_ASSERT_RTN(exp, ret) ( (void)0 )
#endif


/*****************************************************************************
  #pragma pack(*)    设置字节对齐方式
*****************************************************************************/
#if (VOS_OS_VER != VOS_WIN32)
#pragma pack()
#else
#pragma pack(pop)
#endif

/*******************************************************************************
  3 STRUCT定义
*****************************************************************************/


/*****************************************************************************
  4 UNION定义
*****************************************************************************/

/*****************************************************************************
  5 OTHERS定义
*****************************************************************************/

#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __PSLOGDEF_H__ */


