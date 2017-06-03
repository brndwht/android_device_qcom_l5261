
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

$Header: //Commercial/MPSS.DPM.2.0.2.c1/Main/modem_proc/rfc_dimepm/rf_card/rfc_wtr4905_china_v2/lte/src/rfc_wtr4905_china_v2_lte_config_data_ag.c#2 $ 


=============================================================================*/

/*=============================================================================
                           INCLUDE FILES
=============================================================================*/
#include "comdef.h"

#include "rfc_wtr4905_china_v2_cmn_ag.h" 
#include "rfc_common.h" 
#include "rfcom.h" 
#include "wtr4905_typedef_ag.h" 
#include "rfdevice_qtuner_api.h" 



rfc_device_info_type rf_card_wtr4905_china_v2_init_lte_rx_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  0 /* Warning: Not Specified */,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0 /*Warning: Not specified*/,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        0  /* Invalid TRx port*/ ,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_init_lte_rx_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_init_lte_tx_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  0 /* Warning: Not Specified */,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0 /*Warning: Not specified*/,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        0  /* Invalid TRx port*/ ,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_init_lte_tx_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b1_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND1_PMB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (7)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b1_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_11,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b1_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND1_DMB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b1_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_15,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_05,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_24,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b1_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  5,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND1_THMLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */  /* SKY77648 */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x1E << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (9)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (7)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b1_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b2_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND2_PMB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      2,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (3)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b2_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
   // { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_09,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b2_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND2_DMB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b2_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_15,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_05,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_24,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b2_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  5,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND2_THMLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */  /* SKY77648 */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x1E << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (9)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (3)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b2_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b3_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND3_PMB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (6)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b3_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
  //  { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_09,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b3_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND3_DMB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b3_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_15,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_05,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_24,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b3_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  5,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND3_THMLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */  /* SKY77648 */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x1E << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (6)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
     
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b3_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b4_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  3,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND4_PHB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (6)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b4_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
   // { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_11,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b4_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND4_DMB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b4_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_15,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_05,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_24,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b4_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  5,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND4_THMLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */  /* SKY77648 */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x1E << 14)/*prd_id*/ | (3)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (6)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
     
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b4_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b5_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  3,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND5_PLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_LB,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b5_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b5_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND5_DLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP12T */,  /* NAME */
      5,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x81 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b5_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b5_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND5_THMLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE3320_EPT,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (6)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (12)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_TX,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_LB,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b5_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b7_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND7_PHB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b7_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
     { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_20,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_12,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b7_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND7_DHB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b7_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_15,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_05,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_24,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b7_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  5,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND7_THMLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */  /* sky77781 u2703 */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x15 << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b7_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_03,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_20,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_12,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b8_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  3,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND8_PLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_LB,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b8_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b8_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND8_DLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP12T */,  /* NAME */
      5,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x81 << 14)/*prd_id*/ | (11)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b8_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b8_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND8_THMLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE3320_EPT,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (7)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (12)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_TX,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (11)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_LB,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b8_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};




rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b12_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,	/* NUM_DEVICES_TO_CONFIGURE */
  {
    {
	RFDEVICE_TRANSCEIVER,
	WTR4905,  /* NAME */
	0,	/* DEVICE_MODULE_TYPE_INSTANCE */
	0,	/* PHY_PATH_NUM */
	{
	  0 /*Warning: Not specified*/,  /* INTF_REV */
	  (int)WTR4905_LTEFDD_PRXLGY1_BAND12_PLB1,  /* PORT */
         ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
         FALSE,  /* TXAGC_LUT */
	  WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
	  0,  /* Array Filler */
	  },
	},
       {
			RFDEVICE_ASM,
			GEN_ASM /* RF1496A */,  /* NAME */
		       0,  /* DEVICE_MODULE_TYPE_INSTANCE */
			0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
			{
			  0  /* Orig setting:  */,	/* INTF_REV */
			  (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (9)/*port_num*/,	/* PORT_NUM */
			  0,  /* Array Filler */
			  0,  /* Array Filler */
			  0,  /* Array Filler */
			  0,  /* Array Filler */
			},
		  },
		},
	  };


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b12_sig_cfg = 
{
   0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_20,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_12,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b12_device_info = 
{
   0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
		{
		  {
			RFDEVICE_TRANSCEIVER,
			WTR4905,  /* NAME */
			0,	/* DEVICE_MODULE_TYPE_INSTANCE */
			1,	/* PHY_PATH_NUM */
			{
			  0 /*Warning: Not specified*/,  /* INTF_REV */
			  (int)WTR4905_LTEFDD_DRXLGY1_BAND12_DLB1,	/* PORT */
			 ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
			  FALSE,  /* TXAGC_LUT */
			  WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
			  0,  /* Array Filler */
			},
		  },
		},
	  };


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b12_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
     //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_09,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_15,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_05,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_24,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
	 
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b12_device_info = 
{
    0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
		5,	/* NUM_DEVICES_TO_CONFIGURE */
		{
		  {
			RFDEVICE_TRANSCEIVER,
			WTR4905,  /* NAME */
			0,	/* DEVICE_MODULE_TYPE_INSTANCE */
			0,	/* PHY_PATH_NUM */
			{
			  0 /*Warning: Not specified*/,  /* INTF_REV */
			  (int)WTR4905_LTEFDD_TX_BAND12_THMLB4,  /* PORT */
			  ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */

			  FALSE,  /* TXAGC_LUT */
			  WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
			  0,  /* Array Filler */
			},
		  },
			{
			  RFDEVICE_PA,
			  GEN_PA,  /* NAME */  /* SKY77648 */
			  0,  /* DEVICE_MODULE_TYPE_INSTANCE */
			  0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
			  {
				0  /* Orig setting:  */,  /* INTF_REV */
					(0x01A5 << 22)/*mfg_id*/ | (0x1E << 14)/*prd_id*/ | (6)/*port_num*/,	/* PORT_NUM */
				0,	/* Array Filler */
				0,	/* Array Filler */
				0,	/* Array Filler */
				0,	/* Array Filler */
			  },
			},
			{
			  RFDEVICE_PAPM,
			  QFE2101,	/* NAME */
			  0,  /* DEVICE_MODULE_TYPE_INSTANCE */
			  0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
			  {
				0  /* Orig setting:  */,  /* INTF_REV */
				(0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (11)/*port_num*/,   /* PORT_NUM */
				0,	/* Array Filler */
				0,	/* Array Filler */
				0,	/* Array Filler */
				0,	/* Array Filler */
			  },
			},
			{
			  RFDEVICE_ASM,
		         GEN_ASM /* RF1496A */,  /* NAME */
			  0,  /* DEVICE_MODULE_TYPE_INSTANCE */
			  0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
			  {
				0  /* Orig setting:  */,  /* INTF_REV */
					(0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (9)/*port_num*/,  /* PORT_NUM */
				0,	/* Array Filler */
				0,	/* Array Filler */
				0,	/* Array Filler */
				0,	/* Array Filler */
			  },
			},		  
		  {
			RFDEVICE_HDET,
			TRX_HDET,  /* NAME */
			0,	/* DEVICE_MODULE_TYPE_INSTANCE */
			0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
			{
			  0  /* Orig setting:  */,	/* INTF_REV */
			  0,  /* Array Filler */
			  0,  /* Array Filler */
			  0,  /* Array Filler */
			  0,  /* Array Filler */
			  0,  /* Array Filler */
			},
		  },
		},
	  };


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b12_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
 //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_14,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },  
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_20,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_12,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b17_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND17_PLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (9)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};



rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b17_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_20,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_12,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b17_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND17_DLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b17_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_09,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_15,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_05,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_24,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b17_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  5,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND17_THMLB4,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */  /* SKY77648 */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x1E << 14)/*prd_id*/ | (6)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (11)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (9)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
    
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b17_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_14,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_20,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_12,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b20_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */ 
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND20_PLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (9)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b20_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b20_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND20_DLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b20_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_15,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_05,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_24,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b20_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  4,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND20_THMLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */  /* SKY77648 */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x1E << 14)/*prd_id*/ | (7)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (11)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (9)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
   
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b20_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b26_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  3,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND26_PLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_LB,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b26_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b26_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND26_DLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP12T */,  /* NAME */
      5,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x81 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b26_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b26_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND26_THMLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE3320_EPT,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (13)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (11)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_TX,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_LB,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b26_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b27_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  3,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND27_PLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_LB,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b27_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b27_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND27_DLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP12T */,  /* NAME */
      5,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x81 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b27_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b27_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND27_THMLB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE3320_EPT,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (14)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (11)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_TX,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_LB,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b27_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b28_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  4,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND28_PLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_LB,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP4T */,  /* NAME */
      4,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x1B0 << 22)/*mfg_id*/ | (0x02 << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b28_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b28_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND28_DLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP12T */,  /* NAME */
      5,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x81 << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b28_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_09,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b28_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  8,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND28_THMLB4,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE3320_EPT,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (15)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (12)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_TX,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (9)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_LB,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP4T */,  /* NAME */
      4,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x1B0 << 22)/*mfg_id*/ | (0x02 << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b28_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_14,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b28_b_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  4,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_PRXLGY1_BAND28_PLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_LB,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP4T */,  /* NAME */
      4,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x1B0 << 22)/*mfg_id*/ | (0x02 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b28_b_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b28_b_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_DRXLGY1_BAND28_DLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP12T */,  /* NAME */
      5,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x81 << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b28_b_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
   // { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_09,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b28_b_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  8,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTEFDD_TX_BAND28_THMLB4,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE3320_EPT,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (16)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (12)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_TX,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (8)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_LB,  /* NAME */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (2)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP4T */,  /* NAME */
      4,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x1B0 << 22)/*mfg_id*/ | (0x02 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b28_b_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b38_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  4,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTETDD_PRXLGY1_BAND38_PHB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2340,  /* NAME */
      3,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_MB,  /* NAME */
      2,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b38_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b38_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTETDD_DRXLGY1_BAND38_DHB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP12T */,  /* NAME */
      5,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x81 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b38_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
   // { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_14,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b38_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTETDD_TX_BAND38_THMLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE2340,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (25)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2340,  /* NAME */
      3,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_MB,  /* NAME */
      2,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b38_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b39_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  3,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTETDD_PRXLGY1_BAND39_PMB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_MB,  /* NAME */
      2,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (7)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b39_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_11,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b39_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTETDD_DRXLGY1_BAND39_DMB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP12T */,  /* NAME */
      5,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x81 << 14)/*prd_id*/ | (8)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b39_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_14,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b39_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTETDD_TX_BAND39_THMLB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE3320_TDD,  /* NAME */
      3,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (3)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (10)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_TX,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (26)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_MB,  /* NAME */
      2,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (9)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b39_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_INTERNAL_GNSS_BLANK_CONCURRENCY,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b40_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTETDD_PRXLGY1_BAND40_PHB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b40_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_00,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b40_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTETDD_DRXLGY1_BAND40_DHB1,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b40_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
     { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_15,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_05,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_24,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b40_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  5,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTETDD_TX_BAND40_THMLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_LUT_PWR_INVALID << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      GEN_PA,  /* NAME */  /* sky77781 u2703 */
      1,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x01A5 << 22)/*mfg_id*/ | (0x15 << 14)/*prd_id*/ | (0)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (25)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },

    {
      RFDEVICE_ASM,
      GEN_ASM /* RF1496A */,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0134 << 22)/*mfg_id*/ | (0x20 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b40_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_00,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_03,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx0_lte_b41_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  5,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTETDD_PRXLGY1_BAND41_PHB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2340,  /* NAME */
      3,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_MB,  /* NAME */
      2,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx0_lte_b41_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    //{ (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_06,   { RFC_HIGH, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_rx1_lte_b41_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  1,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  2,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      1,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTETDD_DRXLGY1_BAND41_DHB2,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      GEN_ASM /* ASM_SP12T */,  /* NAME */
      5,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x020C << 22)/*mfg_id*/ | (0x81 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_rx1_lte_b41_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
   // { (int)RFC_WTR4905_CHINA_V2_RF_PATH_SEL_14,   { RFC_LOW, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_tx0_lte_b41_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_TX_MODEM_CHAIN_0,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  7,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        (int)WTR4905_LTETDD_TX_BAND41_THMLB3,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_VALID | WTR4905_LP_LUT_TYPE << RFDEVICE_PA_STATE_0_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_1_BSHFT | WTR4905_HP_LUT_TYPE << RFDEVICE_PA_STATE_2_BSHFT | WTR4905_LUT_PWR_INVALID << RFDEVICE_PA_STATE_3_BSHFT ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_LOW_ATTN_MODE,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PA,
      QFE2340,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (1)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_PAPM,
      QFE2101,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x217 << 22)/*mfg_id*/ | (0x31 << 14)/*prd_id*/ | (25)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE2340,  /* NAME */
      3,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x21 << 14)/*prd_id*/ | (5)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_ASM,
      QFE3320_MB,  /* NAME */
      2,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        (0x0217 << 22)/*mfg_id*/ | (0x26 << 14)/*prd_id*/ | (4)/*port_num*/,  /* PORT_NUM */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_HDET,
      TRX_HDET,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
    {
      RFDEVICE_TUNER,
      QFE2550,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0 /*Warning: Not specified*/,  /* PHY_PATH_NUM */
      {
        0  /* Orig setting:  */,  /* INTF_REV */
        0  /* Orig setting:  */,  /* DISTORION_CONFIG */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_tx0_lte_b41_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_WTR4905_CHINA_V2_TX_GTR_TH,   { RFC_CONFIG_ONLY, 0 }, {RFC_LOW, 0 }  },
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_lte_en_et_cal0_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        0  /* Invalid TRx port*/ ,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_lte_en_et_cal0_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_device_info_type rf_card_wtr4905_china_v2_lte_dis_et_cal0_device_info = 
{
  0x04200394,   /* Revision: v4.32.916 */
  RFC_RX_MODEM_CHAIN_1,   /* Modem Chain */
  0 /* Warning: Not Specified */,   /* ET Modem Chain */
  0 /* Warning: Not Specified */,   /* NV Container */
  RFC_INVALID_PARAM /* Warning: Not Specified */,   /* Antenna */
  1,  /* NUM_DEVICES_TO_CONFIGURE */
  {
    {
      RFDEVICE_TRANSCEIVER,
      WTR4905,  /* NAME */
      0,  /* DEVICE_MODULE_TYPE_INSTANCE */
      0,  /* PHY_PATH_NUM */
      {
        0 /*Warning: Not specified*/,  /* INTF_REV */
        0  /* Invalid TRx port*/ ,  /* PORT */
        ( RFDEVICE_PA_LUT_MAPPING_INVALID ),  /* RF_ASIC_BAND_PA_LUT_MAP */
        FALSE,  /* TXAGC_LUT */
        WTR4905_FBRX_ATTN_DEFAULT,  /* FBRX_ATTN_STATE */
        0,  /* Array Filler */
      },
    },
  },
};


rfc_sig_info_type rf_card_wtr4905_china_v2_lte_dis_et_cal0_sig_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { (int)RFC_SIG_LIST_END,   { RFC_LOW, 0 }, {RFC_LOW, 0 } }
  },
};


rfc_band_split_info_type rf_card_wtr4905_china_v2_rx0_lte_b28_split_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { 9210, 9434, (int)RFCOM_BAND_LTE_B28, RFC_FILTER_CFG_NOT_APP, RFC_BW_ALL, 255 },
    { 9435, 9659, (int)RFCOM_BAND_LTE_B28_B, RFC_FILTER_CFG_NOT_APP, RFC_BW_ALL, 255 },
    { RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM }
  }
};

rfc_band_split_info_type rf_card_wtr4905_china_v2_rx1_lte_b28_split_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { 9210, 9434, (int)RFCOM_BAND_LTE_B28, RFC_FILTER_CFG_NOT_APP, RFC_BW_ALL, 255 },
    { 9435, 9659, (int)RFCOM_BAND_LTE_B28_B, RFC_FILTER_CFG_NOT_APP, RFC_BW_ALL, 255 },
    { RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM }
  }
};

rfc_band_split_info_type rf_card_wtr4905_china_v2_tx0_lte_b28_split_cfg = 
{
  0x04200394,   /* Revision: v4.32.916 */
  {
    { 27210, 27434, (int)RFCOM_BAND_LTE_B28, RFC_FILTER_CFG_NOT_APP, RFC_BW_ALL, 255 },
    { 27435, 27659, (int)RFCOM_BAND_LTE_B28_B, RFC_FILTER_CFG_NOT_APP, RFC_BW_ALL, 255 },
    { RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM, RFC_INVALID_PARAM }
  }
};

