
#ifndef __CFG_FILE_INFO_CUSTOM_H__
#define __CFG_FILE_INFO_CUSTOM_H__

#include "CFG_file_public.h"
#include "CFG_file_lid.h"
#include "Custom_NvRam_LID.h"
#include "../../../common/cgen/cfgfileinc/CFG_AUDIO_File.h"
#include "../../../common/cgen/cfgdefault/CFG_Audio_Default.h"
#include "../cfgfileinc/CFG_GPS_File.h"
#include "../cfgdefault/CFG_GPS_Default.h"
#include "../cfgfileinc/CFG_Wifi_File.h"
#include "../cfgdefault/CFG_WIFI_Default.h"
#include "../cfgfileinc/CFG_PRODUCT_INFO_File.h"
#include "../cfgdefault/CFG_PRODUCT_INFO_Default.h"
#include <stdio.h>
#ifdef __cplusplus
extern "C"
{
#endif
/*porting SH audio parameters customization by yi.zheng.hz*/
#ifdef JRD_AUDIO_PARAMS_CUST//Modified by jrd.lipeng for audio parameters customization.(PR408943)
/*--------> EU HD voice param <----------*/
    const TCFG_FILE g_akCFG_File_Custom_EU_HD_def[]=
    {
        {
            "/data/nvram/APCFG/APRDCL/Audio_Sph",       VER(AP_CFG_RDCL_FILE_AUDIO_LID),         CFG_FILE_SPEECH_REC_SIZE,
            CFG_FILE_SPEECH_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                                   (char *)&speech_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/GPS",         VER(AP_CFG_CUSTOM_FILE_GPS_LID),	           CFG_FILE_GPS_CONFIG_SIZE,
            CFG_FILE_GPS_CONFIG_TOTAL,                  SIGNLE_DEFUALT_REC,                (char *)&stGPSConfigDefault, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_CompFlt",       VER(AP_CFG_RDCL_FILE_AUDIO_COMPFLT_LID),         CFG_FILE_AUDIO_COMPFLT_REC_SIZE,
            CFG_FILE_AUDIO_COMPFLT_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Effect",       VER(AP_CFG_RDCL_FILE_AUDIO_EFFECT_LID),         CFG_FILE_AUDIO_EFFECT_REC_SIZE,
            CFG_FILE_AUDIO_EFFECT_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_effect_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/WIFI",	    	VER(AP_CFG_RDEB_FILE_WIFI_LID),		    CFG_FILE_WIFI_REC_SIZE,
            CFG_FILE_WIFI_REC_TOTAL,		    	SIGNLE_DEFUALT_REC,				    (char *)&stWifiCfgDefault, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/WIFI_CUSTOM",	VER(AP_CFG_RDEB_WIFI_CUSTOM_LID),	CFG_FILE_WIFI_CUSTOM_REC_SIZE,
            CFG_FILE_WIFI_CUSTOM_REC_TOTAL,		    SIGNLE_DEFUALT_REC,				    (char *)&stWifiCustomDefault, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Sph_Med",       VER(AP_CFG_RDCL_FILE_AUDIO_PARAM_MED_LID),         CFG_FILE_AUDIO_PARAM_MED_REC_SIZE,
            CFG_FILE_AUDIO_PARAM_MED_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_param_med_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Vol_custom",       VER(AP_CFG_RDCL_FILE_AUDIO_VOLUME_CUSTOM_LID),         CFG_FILE_AUDIO_VOLUME_CUSTOM_REC_SIZE,
            CFG_FILE_AUDIO_VOLUME_CUSTOM_REC_TOTAL,           SIGNLE_DEFUALT_REC,                (char *)&audio_volume_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Sph_Dual_Mic",       VER(AP_CFG_RDCL_FILE_DUAL_MIC_CUSTOM_LID),         CFG_FILE_SPEECH_DUAL_MIC_SIZE,
            CFG_FILE_SPEECH_DUAL_MIC_TOTAL,           SIGNLE_DEFUALT_REC,                (char *)&dual_mic_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Wb_Sph",       VER(AP_CFG_RDCL_FILE_AUDIO_WB_PARAM_LID),         CFG_FILE_WB_SPEECH_REC_SIZE,
            CFG_FILE_WB_SPEECH_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                                   (char *)&wb_speech_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/PRODUCT_INFO",       VER(AP_CFG_REEB_PRODUCT_INFO_LID),         CFG_FILE_PRODUCT_INFO_SIZE,
            CFG_FILE_PRODUCT_INFO_TOTAL,                   SIGNLE_DEFUALT_REC,                                   (char *)&stPRODUCT_INFOConfigDefault,DataReset, NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Headphone_CompFlt",       VER(AP_CFG_RDCL_FILE_HEADPHONE_COMPFLT_LID),         CFG_FILE_AUDIO_COMPFLT_REC_SIZE,
            CFG_FILE_HEADPHONE_COMPFLT_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_hcf_custom_default, DataReset , NULL
        },

        { "/data/nvram/APCFG/APRDCL/Audio_gain_table",   VER(AP_CFG_RDCL_FILE_AUDIO_GAIN_TABLE_LID), CFG_FILE_AUDIO_GAIN_TABLE_CUSTOM_REC_SIZE,
            CFG_FILE_AUDIO_GAIN_TABLE_CUSTOM_REC_TOTAL, SIGNLE_DEFUALT_REC  ,	 (char *)&Gain_control_table_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_ver1_Vol_custom",       VER(AP_CFG_RDCL_FILE_AUDIO_VER1_VOLUME_CUSTOM_LID),         CFG_FILE_AUDIO_VER1_VOLUME_CUSTOM_REC_SIZE,
            CFG_FILE_AUDIO_VER1_VOLUME_CUSTOM_REC_TOTAL,           SIGNLE_DEFUALT_REC,                (char *)&audio_ver1_custom_default, DataReset , NULL
        },
        
        { "/data/nvram/APCFG/APRDCL/Audio_Hd_Record_Param",   VER(AP_CFG_RDCL_FILE_AUDIO_HD_REC_PAR_LID), CFG_FILE_AUDIO_HD_REC_PAR_SIZE,
            CFG_FILE_AUDIO_HD_REC_PAR_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Hd_Recrod_Par_default, DataReset , NULL
        },
        
        { "/data/nvram/APCFG/APRDCL/Audio_Hd_Record_Scene_Table",   VER(AP_CFG_RDCL_FILE_AUDIO_HD_REC_SCENE_LID), CFG_FILE_AUDIO_HD_REC_SCENE_TABLE_SIZE,
            CFG_FILE_AUDIO_HD_REC_SCENE_TABLE_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Hd_Recrod_Scene_Table_default, DataReset , NULL
        },

		{ "/data/nvram/APCFG/APRDCL/Audio_Hd_Record_48k_Param",   VER(AP_CFG_RDCL_FILE_AUDIO_HD_REC_48K_PAR_LID), CFG_FILE_AUDIO_HD_REC_48K_PAR_SIZE,
            CFG_FILE_AUDIO_HD_REC_48K_PAR_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Hd_Recrod_48k_Par_default, DataReset , NULL
        },
        
        { "/data/nvram/APCFG/APRDCL/Audio_Buffer_DC_Calibration_Param",   VER(AP_CFG_RDCL_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_LID), CFG_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_SIZE,
            CFG_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Audio_Buffer_DC_Calibration_Par_default, DataReset , NULL
        },
/*porting for ALPS00712639(For_JRDHZ72_WE_JB3_ALPS.JB3.MP.V1_P18) start*/
        { "/data/nvram/APCFG/APRDCL/VibSpk_CompFlt",   VER(AP_CFG_RDCL_FILE_VIBSPK_COMPFLT_LID), CFG_FILE_AUDIO_COMPFLT_REC_SIZE,
            CFG_FILE_VIBSPK_COMPFLT_REC_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&audio_vibspk_custom_default, DataReset , NULL
        },
/*porting for ALPS00712639(For_JRDHZ72_WE_JB3_ALPS.JB3.MP.V1_P18) end*/
    };

    /* Add another audio parameters set here. 
      * The size of g_akCFG_File_Custom1 & g_akCFG_File_Custom2 must be the same.*/
    /*
      * For example: 
      * Assume "/data/nvram/APCFG/APRDCL/Audio_Sph" is different. 
      * 1. Change pDefaultValue of g_akCFG_File_Custom2[0] to "speech_custom_default2";
      * 2. Add an "AUDIO_CUSTOM_PARAM_STRUCT speech_custom_default2" in CFG_Audio_Default.h;
      * 3. Change the values in speech_custom_default2 which are different with speech_custom_default.	*/

/* ----------> US, no HD voice, Default <---------*/
    const TCFG_FILE g_akCFG_File_Custom_US_NHD_def[]=
    {
        {
            "/data/nvram/APCFG/APRDCL/Audio_Sph",       VER(AP_CFG_RDCL_FILE_AUDIO_LID),         CFG_FILE_SPEECH_REC_SIZE,
            CFG_FILE_SPEECH_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                                   (char *)&speech_custom_default2, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/GPS",         VER(AP_CFG_CUSTOM_FILE_GPS_LID),	           CFG_FILE_GPS_CONFIG_SIZE,
            CFG_FILE_GPS_CONFIG_TOTAL,                  SIGNLE_DEFUALT_REC,                (char *)&stGPSConfigDefault, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_CompFlt",       VER(AP_CFG_RDCL_FILE_AUDIO_COMPFLT_LID),         CFG_FILE_AUDIO_COMPFLT_REC_SIZE,
            CFG_FILE_AUDIO_COMPFLT_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Effect",       VER(AP_CFG_RDCL_FILE_AUDIO_EFFECT_LID),         CFG_FILE_AUDIO_EFFECT_REC_SIZE,
            CFG_FILE_AUDIO_EFFECT_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_effect_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/WIFI",	    	VER(AP_CFG_RDEB_FILE_WIFI_LID),		    CFG_FILE_WIFI_REC_SIZE,
            CFG_FILE_WIFI_REC_TOTAL,		    	SIGNLE_DEFUALT_REC,				    (char *)&stWifiCfgDefault, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/WIFI_CUSTOM",	VER(AP_CFG_RDEB_WIFI_CUSTOM_LID),	CFG_FILE_WIFI_CUSTOM_REC_SIZE,
            CFG_FILE_WIFI_CUSTOM_REC_TOTAL,		    SIGNLE_DEFUALT_REC,				    (char *)&stWifiCustomDefault, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Sph_Med",       VER(AP_CFG_RDCL_FILE_AUDIO_PARAM_MED_LID),         CFG_FILE_AUDIO_PARAM_MED_REC_SIZE,
            CFG_FILE_AUDIO_PARAM_MED_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_param_med_default2, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Vol_custom",       VER(AP_CFG_RDCL_FILE_AUDIO_VOLUME_CUSTOM_LID),         CFG_FILE_AUDIO_VOLUME_CUSTOM_REC_SIZE,
            CFG_FILE_AUDIO_VOLUME_CUSTOM_REC_TOTAL,           SIGNLE_DEFUALT_REC,                (char *)&audio_volume_custom_default2, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Sph_Dual_Mic",       VER(AP_CFG_RDCL_FILE_DUAL_MIC_CUSTOM_LID),         CFG_FILE_SPEECH_DUAL_MIC_SIZE,
            CFG_FILE_SPEECH_DUAL_MIC_TOTAL,           SIGNLE_DEFUALT_REC,                (char *)&dual_mic_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Wb_Sph",       VER(AP_CFG_RDCL_FILE_AUDIO_WB_PARAM_LID),         CFG_FILE_WB_SPEECH_REC_SIZE,
            CFG_FILE_WB_SPEECH_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                                   (char *)&wb_speech_custom_default2, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/PRODUCT_INFO",       VER(AP_CFG_REEB_PRODUCT_INFO_LID),         CFG_FILE_PRODUCT_INFO_SIZE,
            CFG_FILE_PRODUCT_INFO_TOTAL,                   SIGNLE_DEFUALT_REC,                                   (char *)&stPRODUCT_INFOConfigDefault,DataReset, NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Headphone_CompFlt",       VER(AP_CFG_RDCL_FILE_HEADPHONE_COMPFLT_LID),         CFG_FILE_AUDIO_COMPFLT_REC_SIZE,
            CFG_FILE_HEADPHONE_COMPFLT_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_hcf_custom_default, DataReset , NULL
        },

        { "/data/nvram/APCFG/APRDCL/Audio_gain_table",   VER(AP_CFG_RDCL_FILE_AUDIO_GAIN_TABLE_LID), CFG_FILE_AUDIO_GAIN_TABLE_CUSTOM_REC_SIZE,
            CFG_FILE_AUDIO_GAIN_TABLE_CUSTOM_REC_TOTAL, SIGNLE_DEFUALT_REC  ,	 (char *)&Gain_control_table_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_ver1_Vol_custom",       VER(AP_CFG_RDCL_FILE_AUDIO_VER1_VOLUME_CUSTOM_LID),         CFG_FILE_AUDIO_VER1_VOLUME_CUSTOM_REC_SIZE,
            CFG_FILE_AUDIO_VER1_VOLUME_CUSTOM_REC_TOTAL,           SIGNLE_DEFUALT_REC,                (char *)&audio_ver1_custom_default2, DataReset , NULL
        },
        
        { "/data/nvram/APCFG/APRDCL/Audio_Hd_Record_Param",   VER(AP_CFG_RDCL_FILE_AUDIO_HD_REC_PAR_LID), CFG_FILE_AUDIO_HD_REC_PAR_SIZE,
            CFG_FILE_AUDIO_HD_REC_PAR_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Hd_Recrod_Par_default, DataReset , NULL
        },
        
        { "/data/nvram/APCFG/APRDCL/Audio_Hd_Record_Scene_Table",   VER(AP_CFG_RDCL_FILE_AUDIO_HD_REC_SCENE_LID), CFG_FILE_AUDIO_HD_REC_SCENE_TABLE_SIZE,
            CFG_FILE_AUDIO_HD_REC_SCENE_TABLE_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Hd_Recrod_Scene_Table_default, DataReset , NULL
        },

		{ "/data/nvram/APCFG/APRDCL/Audio_Hd_Record_48k_Param",   VER(AP_CFG_RDCL_FILE_AUDIO_HD_REC_48K_PAR_LID), CFG_FILE_AUDIO_HD_REC_48K_PAR_SIZE,
            CFG_FILE_AUDIO_HD_REC_48K_PAR_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Hd_Recrod_48k_Par_default, DataReset , NULL
        },

        { "/data/nvram/APCFG/APRDCL/Audio_Buffer_DC_Calibration_Param",   VER(AP_CFG_RDCL_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_LID), CFG_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_SIZE,
            CFG_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Audio_Buffer_DC_Calibration_Par_default, DataReset , NULL
        },
/*porting for ALPS00712639(For_JRDHZ72_WE_JB3_ALPS.JB3.MP.V1_P18) start*/
        { "/data/nvram/APCFG/APRDCL/VibSpk_CompFlt",   VER(AP_CFG_RDCL_FILE_VIBSPK_COMPFLT_LID), CFG_FILE_AUDIO_COMPFLT_REC_SIZE,
            CFG_FILE_VIBSPK_COMPFLT_REC_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&audio_vibspk_custom_default, DataReset , NULL
        },
/*porting for ALPS00712639(For_JRDHZ72_WE_JB3_ALPS.JB3.MP.V1_P18) end*/
    };

/*Added by yi.zheng.hz for CR597006 at 2014-01-25 begin*/
    const TCFG_FILE g_akCFG_File_Custom_US_receiver[]=
    {
        {
            "/data/nvram/APCFG/APRDCL/Audio_Sph",       VER(AP_CFG_RDCL_FILE_AUDIO_LID),         CFG_FILE_SPEECH_REC_SIZE,
            CFG_FILE_SPEECH_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                                   (char *)&speech_custom_default3, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/GPS",         VER(AP_CFG_CUSTOM_FILE_GPS_LID),	           CFG_FILE_GPS_CONFIG_SIZE,
            CFG_FILE_GPS_CONFIG_TOTAL,                  SIGNLE_DEFUALT_REC,                (char *)&stGPSConfigDefault, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_CompFlt",       VER(AP_CFG_RDCL_FILE_AUDIO_COMPFLT_LID),         CFG_FILE_AUDIO_COMPFLT_REC_SIZE,
            CFG_FILE_AUDIO_COMPFLT_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Effect",       VER(AP_CFG_RDCL_FILE_AUDIO_EFFECT_LID),         CFG_FILE_AUDIO_EFFECT_REC_SIZE,
            CFG_FILE_AUDIO_EFFECT_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_effect_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/WIFI",	    	VER(AP_CFG_RDEB_FILE_WIFI_LID),		    CFG_FILE_WIFI_REC_SIZE,
            CFG_FILE_WIFI_REC_TOTAL,		    	SIGNLE_DEFUALT_REC,				    (char *)&stWifiCfgDefault, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/WIFI_CUSTOM",	VER(AP_CFG_RDEB_WIFI_CUSTOM_LID),	CFG_FILE_WIFI_CUSTOM_REC_SIZE,
            CFG_FILE_WIFI_CUSTOM_REC_TOTAL,		    SIGNLE_DEFUALT_REC,				    (char *)&stWifiCustomDefault, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Sph_Med",       VER(AP_CFG_RDCL_FILE_AUDIO_PARAM_MED_LID),         CFG_FILE_AUDIO_PARAM_MED_REC_SIZE,
            CFG_FILE_AUDIO_PARAM_MED_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_param_med_default3, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Vol_custom",       VER(AP_CFG_RDCL_FILE_AUDIO_VOLUME_CUSTOM_LID),         CFG_FILE_AUDIO_VOLUME_CUSTOM_REC_SIZE,
            CFG_FILE_AUDIO_VOLUME_CUSTOM_REC_TOTAL,           SIGNLE_DEFUALT_REC,                (char *)&audio_volume_custom_default3, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Sph_Dual_Mic",       VER(AP_CFG_RDCL_FILE_DUAL_MIC_CUSTOM_LID),         CFG_FILE_SPEECH_DUAL_MIC_SIZE,
            CFG_FILE_SPEECH_DUAL_MIC_TOTAL,           SIGNLE_DEFUALT_REC,                (char *)&dual_mic_custom_default3, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Wb_Sph",       VER(AP_CFG_RDCL_FILE_AUDIO_WB_PARAM_LID),         CFG_FILE_WB_SPEECH_REC_SIZE,
            CFG_FILE_WB_SPEECH_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                                   (char *)&wb_speech_custom_default3, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/PRODUCT_INFO",       VER(AP_CFG_REEB_PRODUCT_INFO_LID),         CFG_FILE_PRODUCT_INFO_SIZE,
            CFG_FILE_PRODUCT_INFO_TOTAL,                   SIGNLE_DEFUALT_REC,                                   (char *)&stPRODUCT_INFOConfigDefault,DataReset, NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Headphone_CompFlt",       VER(AP_CFG_RDCL_FILE_HEADPHONE_COMPFLT_LID),         CFG_FILE_AUDIO_COMPFLT_REC_SIZE,
            CFG_FILE_HEADPHONE_COMPFLT_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_hcf_custom_default, DataReset , NULL
        },

        { "/data/nvram/APCFG/APRDCL/Audio_gain_table",   VER(AP_CFG_RDCL_FILE_AUDIO_GAIN_TABLE_LID), CFG_FILE_AUDIO_GAIN_TABLE_CUSTOM_REC_SIZE,
            CFG_FILE_AUDIO_GAIN_TABLE_CUSTOM_REC_TOTAL, SIGNLE_DEFUALT_REC  ,	 (char *)&Gain_control_table_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_ver1_Vol_custom",       VER(AP_CFG_RDCL_FILE_AUDIO_VER1_VOLUME_CUSTOM_LID),         CFG_FILE_AUDIO_VER1_VOLUME_CUSTOM_REC_SIZE,
            CFG_FILE_AUDIO_VER1_VOLUME_CUSTOM_REC_TOTAL,           SIGNLE_DEFUALT_REC,                (char *)&audio_ver1_custom_default3, DataReset , NULL
        },
        
        { "/data/nvram/APCFG/APRDCL/Audio_Hd_Record_Param",   VER(AP_CFG_RDCL_FILE_AUDIO_HD_REC_PAR_LID), CFG_FILE_AUDIO_HD_REC_PAR_SIZE,
            CFG_FILE_AUDIO_HD_REC_PAR_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Hd_Recrod_Par_default, DataReset , NULL
        },
        
        { "/data/nvram/APCFG/APRDCL/Audio_Hd_Record_Scene_Table",   VER(AP_CFG_RDCL_FILE_AUDIO_HD_REC_SCENE_LID), CFG_FILE_AUDIO_HD_REC_SCENE_TABLE_SIZE,
            CFG_FILE_AUDIO_HD_REC_SCENE_TABLE_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Hd_Recrod_Scene_Table_default, DataReset , NULL
        },

		{ "/data/nvram/APCFG/APRDCL/Audio_Hd_Record_48k_Param",   VER(AP_CFG_RDCL_FILE_AUDIO_HD_REC_48K_PAR_LID), CFG_FILE_AUDIO_HD_REC_48K_PAR_SIZE,
            CFG_FILE_AUDIO_HD_REC_48K_PAR_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Hd_Recrod_48k_Par_default, DataReset , NULL
        },

        { "/data/nvram/APCFG/APRDCL/Audio_Buffer_DC_Calibration_Param",   VER(AP_CFG_RDCL_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_LID), CFG_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_SIZE,
            CFG_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Audio_Buffer_DC_Calibration_Par_default, DataReset , NULL
        },
/*porting for ALPS00712639(For_JRDHZ72_WE_JB3_ALPS.JB3.MP.V1_P18) start*/
        { "/data/nvram/APCFG/APRDCL/VibSpk_CompFlt",   VER(AP_CFG_RDCL_FILE_VIBSPK_COMPFLT_LID), CFG_FILE_AUDIO_COMPFLT_REC_SIZE,
            CFG_FILE_VIBSPK_COMPFLT_REC_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&audio_vibspk_custom_default, DataReset , NULL
        },
/*porting for ALPS00712639(For_JRDHZ72_WE_JB3_ALPS.JB3.MP.V1_P18) end*/
    };
/*Added by yi.zheng.hz for CR597006 at 2014-01-25 end*/


#else
    const TCFG_FILE g_akCFG_File_Custom[]=
    {
        {
            "/data/nvram/APCFG/APRDCL/Audio_Sph",       VER(AP_CFG_RDCL_FILE_AUDIO_LID),         CFG_FILE_SPEECH_REC_SIZE,
            CFG_FILE_SPEECH_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                                   (char *)&speech_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/GPS",         VER(AP_CFG_CUSTOM_FILE_GPS_LID),	           CFG_FILE_GPS_CONFIG_SIZE,
            CFG_FILE_GPS_CONFIG_TOTAL,                  SIGNLE_DEFUALT_REC,                (char *)&stGPSConfigDefault, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_CompFlt",       VER(AP_CFG_RDCL_FILE_AUDIO_COMPFLT_LID),         CFG_FILE_AUDIO_COMPFLT_REC_SIZE,
            CFG_FILE_AUDIO_COMPFLT_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Effect",       VER(AP_CFG_RDCL_FILE_AUDIO_EFFECT_LID),         CFG_FILE_AUDIO_EFFECT_REC_SIZE,
            CFG_FILE_AUDIO_EFFECT_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_effect_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/WIFI",	    	VER(AP_CFG_RDEB_FILE_WIFI_LID),		    CFG_FILE_WIFI_REC_SIZE,
            CFG_FILE_WIFI_REC_TOTAL,		    	SIGNLE_DEFUALT_REC,				    (char *)&stWifiCfgDefault, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/WIFI_CUSTOM",	VER(AP_CFG_RDEB_WIFI_CUSTOM_LID),	CFG_FILE_WIFI_CUSTOM_REC_SIZE,
            CFG_FILE_WIFI_CUSTOM_REC_TOTAL,		    SIGNLE_DEFUALT_REC,				    (char *)&stWifiCustomDefault, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Sph_Med",       VER(AP_CFG_RDCL_FILE_AUDIO_PARAM_MED_LID),         CFG_FILE_AUDIO_PARAM_MED_REC_SIZE,
            CFG_FILE_AUDIO_PARAM_MED_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_param_med_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Vol_custom",       VER(AP_CFG_RDCL_FILE_AUDIO_VOLUME_CUSTOM_LID),         CFG_FILE_AUDIO_VOLUME_CUSTOM_REC_SIZE,
            CFG_FILE_AUDIO_VOLUME_CUSTOM_REC_TOTAL,           SIGNLE_DEFUALT_REC,                (char *)&audio_volume_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Sph_Dual_Mic",       VER(AP_CFG_RDCL_FILE_DUAL_MIC_CUSTOM_LID),         CFG_FILE_SPEECH_DUAL_MIC_SIZE,
            CFG_FILE_SPEECH_DUAL_MIC_TOTAL,           SIGNLE_DEFUALT_REC,                (char *)&dual_mic_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_Wb_Sph",       VER(AP_CFG_RDCL_FILE_AUDIO_WB_PARAM_LID),         CFG_FILE_WB_SPEECH_REC_SIZE,
            CFG_FILE_WB_SPEECH_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                                   (char *)&wb_speech_custom_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDEB/PRODUCT_INFO",       VER(AP_CFG_REEB_PRODUCT_INFO_LID),         CFG_FILE_PRODUCT_INFO_SIZE,
            CFG_FILE_PRODUCT_INFO_TOTAL,                   SIGNLE_DEFUALT_REC,                                   (char *)&stPRODUCT_INFOConfigDefault,DataReset, NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Headphone_CompFlt",       VER(AP_CFG_RDCL_FILE_HEADPHONE_COMPFLT_LID),         CFG_FILE_AUDIO_COMPFLT_REC_SIZE,
            CFG_FILE_HEADPHONE_COMPFLT_REC_TOTAL,                   SIGNLE_DEFUALT_REC,                (char *)&audio_hcf_custom_default, DataReset , NULL
        },

        { "/data/nvram/APCFG/APRDCL/Audio_gain_table",   VER(AP_CFG_RDCL_FILE_AUDIO_GAIN_TABLE_LID), CFG_FILE_AUDIO_GAIN_TABLE_CUSTOM_REC_SIZE,
            CFG_FILE_AUDIO_GAIN_TABLE_CUSTOM_REC_TOTAL, SIGNLE_DEFUALT_REC  ,	 (char *)&Gain_control_table_default, DataReset , NULL
        },

        {
            "/data/nvram/APCFG/APRDCL/Audio_ver1_Vol_custom",       VER(AP_CFG_RDCL_FILE_AUDIO_VER1_VOLUME_CUSTOM_LID),         CFG_FILE_AUDIO_VER1_VOLUME_CUSTOM_REC_SIZE,
            CFG_FILE_AUDIO_VER1_VOLUME_CUSTOM_REC_TOTAL,           SIGNLE_DEFUALT_REC,                (char *)&audio_ver1_custom_default, DataReset , NULL
        },
        
        { "/data/nvram/APCFG/APRDCL/Audio_Hd_Record_Param",   VER(AP_CFG_RDCL_FILE_AUDIO_HD_REC_PAR_LID), CFG_FILE_AUDIO_HD_REC_PAR_SIZE,
            CFG_FILE_AUDIO_HD_REC_PAR_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Hd_Recrod_Par_default, DataReset , NULL
        },
        
        { "/data/nvram/APCFG/APRDCL/Audio_Hd_Record_Scene_Table",   VER(AP_CFG_RDCL_FILE_AUDIO_HD_REC_SCENE_LID), CFG_FILE_AUDIO_HD_REC_SCENE_TABLE_SIZE,
            CFG_FILE_AUDIO_HD_REC_SCENE_TABLE_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Hd_Recrod_Scene_Table_default, DataReset , NULL
        },

		{ "/data/nvram/APCFG/APRDCL/Audio_Hd_Record_48k_Param",   VER(AP_CFG_RDCL_FILE_AUDIO_HD_REC_48K_PAR_LID), CFG_FILE_AUDIO_HD_REC_48K_PAR_SIZE,
            CFG_FILE_AUDIO_HD_REC_48K_PAR_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Hd_Recrod_48k_Par_default, DataReset , NULL
        },
        
        { "/data/nvram/APCFG/APRDCL/Audio_Buffer_DC_Calibration_Param",   VER(AP_CFG_RDCL_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_LID), CFG_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_SIZE,
            CFG_FILE_AUDIO_BUFFER_DC_CALIBRATION_PAR_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&Audio_Buffer_DC_Calibration_Par_default, DataReset , NULL
        },
/*porting for ALPS00712639(For_JRDHZ72_WE_JB3_ALPS.JB3.MP.V1_P18) start*/
        { "/data/nvram/APCFG/APRDCL/VibSpk_CompFlt",   VER(AP_CFG_RDCL_FILE_VIBSPK_COMPFLT_LID), CFG_FILE_AUDIO_COMPFLT_REC_SIZE,
            CFG_FILE_VIBSPK_COMPFLT_REC_TOTAL, SIGNLE_DEFUALT_REC  ,    (char *)&audio_vibspk_custom_default, DataReset , NULL
        },
/*porting for ALPS00712639(For_JRDHZ72_WE_JB3_ALPS.JB3.MP.V1_P18) end*/
    };
#endif


    int iNvRamFileMaxLID=AP_CFG_CUSTOM_FILE_MAX_LID;
    extern int iNvRamFileMaxLID;
/*porting SH audio parameters customization by yi.zheng.hz*/
#ifdef JRD_AUDIO_PARAMS_CUST//Modified by jrd.lipeng for audio parameters customization.(PR277804)
    const TCFG_FILE *g_akCFG_File_Custom_jrd[] = {
	g_akCFG_File_Custom_US_NHD_def,		// US, no HD voice, Default, set ro.audio.parameters.config = 0
        
	g_akCFG_File_Custom_US_NHD_def,		// US, no HD voice, Latam, set ro.audio.parameters.config = 1
        
	g_akCFG_File_Custom_EU_HD_def,		// EU, HD voice, Default, set ro.audio.parameters.config = 2

	/*Now we just use us no hd voice here, but dont forget this is for EU, later other project need update carefully*/
	g_akCFG_File_Custom_US_NHD_def,		// EU, no HD voice, Default	ro.audio.parameters.config = 3

        /* Added by yi.zheng.hz for CR597006 at 2014-01-25 begin */ 
	g_akCFG_File_Custom_US_receiver,		// US, Normal Receiver, like Digicel, set ro.audio.parameters.config = 4
	/* Added by yi.zheng.hz for CR597006 at 2014-01-25 end */
    };

    const unsigned int g_i4CFG_File_Custom_Count = sizeof(g_akCFG_File_Custom_US_NHD_def)/sizeof(TCFG_FILE);
    const unsigned int g_akCFG_File_Custom_jrd_Count = \
        sizeof(g_akCFG_File_Custom_jrd)/sizeof(g_akCFG_File_Custom_jrd[0]);
    extern const TCFG_FILE *g_akCFG_File_Custom_jrd[];
    extern const unsigned int g_akCFG_File_Custom_jrd_Count;
#else
    const unsigned int g_i4CFG_File_Custom_Count = sizeof(g_akCFG_File_Custom)/sizeof(TCFG_FILE);

    extern const TCFG_FILE g_akCFG_File_Custom[];
#endif

    extern const unsigned int g_i4CFG_File_Custom_Count;

    int iFileWIFILID=AP_CFG_RDEB_FILE_WIFI_LID;
    extern int iFileWIFILID;
    int iFileCustomWIFILID=AP_CFG_RDEB_WIFI_CUSTOM_LID;
    extern int iFileCustomWIFILID;
    int iFilePRODUCT_INFOLID=AP_CFG_REEB_PRODUCT_INFO_LID;
    extern int iFilePRODUCT_INFOLID;

#ifdef __cplusplus
}
#endif

#endif
