
#ifndef RFC_WTR4905_CHINA_V2_CMN_AG
#define RFC_WTR4905_CHINA_V2_CMN_AG


#ifdef __cplusplus
extern "C" {
#endif

/*
WARNING: This file is auto-generated.

Generated using: rfc_autogen.exe
Generated from:  v4.32.916 of DPM2_RFC_HWSWCD.xlsm
*/

/*=============================================================================

          R F C     A U T O G E N    F I L E

GENERAL DESCRIPTION
  This file is auto-generated and it captures the configuration of the RF Card.

Copyright (c) 2014 Qualcomm Technologies Incorporated.  All Rights Reserved.

$Header: //Commercial/MPSS.DPM.2.0.2.c1/Main/modem_proc/rfc_dimepm/rf_card/rfc_wtr4905_china_v2/common/inc/rfc_wtr4905_china_v2_cmn_ag.h#2 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include "rfc_common.h" 



typedef enum
{
  RFC_WTR4905_CHINA_V2_TIMING_PA_CTL,
  RFC_WTR4905_CHINA_V2_TIMING_PA_RANGE,
  RFC_WTR4905_CHINA_V2_TIMING_ASM_CTL,
  RFC_WTR4905_CHINA_V2_TIMING_PAPM_CTL,
  RFC_WTR4905_CHINA_V2_TIMING_PAPM_MULTISLOT_CTL,
  RFC_WTR4905_CHINA_V2_TIMING_TX_TX_RF_ON0,
  RFC_WTR4905_CHINA_V2_TIMING_TX_RX_RF_ON0,
  RFC_WTR4905_CHINA_V2_TIMING_ASM_TRIGGER,
  RFC_WTR4905_CHINA_V2_TIMING_PAPM_TX_TX_TRIGGER,
  RFC_WTR4905_CHINA_V2_TIMING_PAPM_OFF_TX_RX_TX_TRIGGER,
  RFC_WTR4905_CHINA_V2_TIMING_PA_TRIGGER,
  RFC_WTR4905_CHINA_V2_TIMING_PAPM_OFF_TX_RX_TX_CTL,
  RFC_WTR4905_CHINA_V2_TIMING_PAPM_TX_TX_CTL,
  RFC_WTR4905_CHINA_V2_RF_PATH_SEL_14,
  RFC_WTR4905_CHINA_V2_RF_PATH_SEL_09,
  RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,
  RFC_WTR4905_CHINA_V2_RF_PATH_SEL_11,
  RFC_WTR4905_CHINA_V2_RF_PATH_SEL_00,
  RFC_WTR4905_CHINA_V2_RF_PATH_SEL_03,
  RFC_WTR4905_CHINA_V2_RF_PATH_SEL_05,
  RFC_WTR4905_CHINA_V2_RF_PATH_SEL_15,
  RFC_WTR4905_CHINA_V2_RF_PATH_SEL_24,
  RFC_WTR4905_CHINA_V2_GPDATA0_0,
  RFC_WTR4905_CHINA_V2_RFFE5_CLK,
  RFC_WTR4905_CHINA_V2_RFFE5_DATA,
  RFC_WTR4905_CHINA_V2_RFFE1_CLK,
  RFC_WTR4905_CHINA_V2_RFFE1_DATA,
  RFC_WTR4905_CHINA_V2_RFFE2_CLK,
  RFC_WTR4905_CHINA_V2_RFFE2_DATA,
  RFC_WTR4905_CHINA_V2_RFFE3_CLK,
  RFC_WTR4905_CHINA_V2_RFFE3_DATA,
  RFC_WTR4905_CHINA_V2_INTERNAL_GNSS_BLANK,
  RFC_WTR4905_CHINA_V2_INTERNAL_GNSS_BLANK_CONCURRENCY,
  RFC_WTR4905_CHINA_V2_TX_GTR_TH,
  RFC_WTR4905_CHINA_V2_PA_IND,
  RFC_WTR4905_CHINA_V2_SIG_NUM,
  RFC_WTR4905_CHINA_V2_SIG_INVALID,
}wtr4905_china_v2_sig_type;


#ifdef __cplusplus

#include "rfc_common_data.h"

class rfc_wtr4905_china_v2_cmn_ag:public rfc_common_data
{
  public:
    uint32 sig_info_table_get(rfc_signal_info_type **rfc_info_table);
    rfc_phy_device_info_type* get_phy_device_cfg( void );
    rfc_logical_device_info_type* get_logical_device_cfg( void );
    boolean get_logical_path_config(rfm_devices_configuration_type* dev_cfg);
    boolean get_cmn_properties(rfc_cmn_properties_type **ptr);
    static rfc_common_data * get_instance(rf_hw_type rf_hw);

  protected:
    rfc_wtr4905_china_v2_cmn_ag(rf_hw_type rf_hw);
};

#endif   /*  __cplusplus  */


#ifdef __cplusplus
}
#endif



#endif


