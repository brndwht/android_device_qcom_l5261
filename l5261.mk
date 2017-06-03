DEVICE_PACKAGE_OVERLAYS := device/qcom/l5261/overlay

TARGET_USES_QCOM_BSP := true
ifeq ($(TARGET_PRODUCT),l5261)
TARGET_USES_QCA_NFC := other
endif

# Add QC Video Enhancements flag
TARGET_ENABLE_QC_AV_ENHANCEMENTS := true

####################### start ################################
#wangyanhui add disable qcom featrues 
# Don't move this line to other place, because it is used in qtic-config.mk
TINNO_DISABLE_FEATRUES := true
CUSTOM_PRODUCT := l5261
######################## end #############################

#QTIC flag
-include $(QCPATH)/common/config/qtic-config.mk

# media_profiles and media_codecs xmls for 8916
ifeq ($(TARGET_ENABLE_QC_AV_ENHANCEMENTS), true)
PRODUCT_COPY_FILES += device/qcom/l5261/media/media_profiles_8916.xml:system/etc/media_profiles.xml \
                      device/qcom/l5261/media/media_codecs_8916.xml:system/etc/media_codecs.xml \
                      device/qcom/l5261/media/media_codecs_8939.xml:system/etc/media_codecs_8939.xml \
                      device/qcom/l5261/media/media_codecs_8929.xml:system/etc/media_codecs_8929.xml
endif

PRODUCT_PROPERTY_OVERRIDES += \
       dalvik.vm.heapsize=256m \
       dalvik.vm.heapgrowthlimit=128m \
       dalvik.vm.heapminfree=6m \
       dalvik.vm.heapstartsize=14m
$(call inherit-product, device/qcom/common/common.mk)

PRODUCT_NAME := l5261
PRODUCT_DEVICE := l5261

#blu LIFE XL 8+1
CUSTOM_BUILD_TIME :=$(shell date +%d-%m-%Y\ %H:%M)

CUSTOM_BUILD_VERNO := BLU_L0050UU_V09_GENERIC
INTERNAL_BUILD_VERNO := L5263AE_PP_5.1_BLU_US_8+1_10_12
BLU_CUSTOM_BUILD_PRODUCT := LIFEXL_L0050UU_GENERIC



ifneq ($(findstring BLU_L0050UU,$(CUSTOM_BUILD_VERNO)),)
ADDITIONAL_BUILD_PROPERTIES += ro.memory.size=8G
else ifneq ($(findstring BLU_L0051UU,$(CUSTOM_BUILD_VERNO)),)
ADDITIONAL_BUILD_PROPERTIES += ro.memory.size=16G
else
ADDITIONAL_BUILD_PROPERTIES += ro.memory.size=8G
endif
#endif

ifeq ($(strip $(TARGET_USES_QTIC)),true)
# font rendering engine feature switch
-include $(QCPATH)/common/config/rendering-engine.mk
ifneq (,$(strip $(wildcard $(PRODUCT_RENDERING_ENGINE_REVLIB))))
    MULTI_LANG_ENGINE := REVERIE
endif
endif

PRODUCT_BOOT_JARS += \
           qcmediaplayer \
           WfdCommon \
           oem-services \
           qcom.fmradio \
           org.codeaurora.Performance \
           tcmiface

# Audio configuration file
PRODUCT_COPY_FILES += \
    device/qcom/l5261/audio_policy.conf:system/etc/audio_policy.conf \
    device/qcom/l5261/audio_effects.conf:system/vendor/etc/audio_effects.conf \
    device/qcom/l5261/mixer_paths_mtp.xml:system/etc/mixer_paths_mtp.xml \
    device/qcom/l5261/mixer_paths_sbc.xml:system/etc/mixer_paths_sbc.xml \
    device/qcom/l5261/mixer_paths_qrd_skuh.xml:system/etc/mixer_paths_qrd_skuh.xml \
    device/qcom/l5261/mixer_paths_qrd_skui.xml:system/etc/mixer_paths_qrd_skui.xml \
    device/qcom/l5261/mixer_paths_qrd_skuhf.xml:system/etc/mixer_paths_qrd_skuhf.xml \
    device/qcom/l5261/mixer_paths_wcd9306.xml:system/etc/mixer_paths_wcd9306.xml \
    device/qcom/l5261/mixer_paths_skuk.xml:system/etc/mixer_paths_skuk.xml \
    device/qcom/l5261/mixer_paths_skul.xml:system/etc/mixer_paths_skul.xml \
    device/qcom/l5261/mixer_paths.xml:system/etc/mixer_paths.xml \
    device/qcom/l5261/sound_trigger_mixer_paths.xml:system/etc/sound_trigger_mixer_paths.xml \
    device/qcom/l5261/sound_trigger_mixer_paths_wcd9306.xml:system/etc/sound_trigger_mixer_paths_wcd9306.xml \
    device/qcom/l5261/sound_trigger_platform_info.xml:system/etc/sound_trigger_platform_info.xml \
    device/qcom/l5261/mixer_paths_wcd9330.xml:system/etc/mixer_paths_wcd9330.xml

# ANT+ stack
PRODUCT_PACKAGES += \
    AntHalService \
    libantradio \
    antradio_app

PRODUCT_DEFAULT_PROPERTY_OVERRIDES += \
    camera2.portability.force_api=1

# NFC packages
ifeq ($(TARGET_USES_QCA_NFC),true)
NFC_D := true

ifeq ($(NFC_D), true)
    PRODUCT_PACKAGES += \
        libnfcD-nci \
        libnfcD_nci_jni \
        nfc_nci.msm8916 \
        NfcDNci \
        Tag \
        com.android.nfc_extras \
        com.android.nfc.helper
else
    PRODUCT_PACKAGES += \
    libnfc-nci \
    libnfc_nci_jni \
    nfc_nci.msm8916 \
    NfcNci \
    Tag \
    com.android.nfc_extras
endif

# file that declares the MIFARE NFC constant
# Commands to migrate prefs from com.android.nfc3 to com.android.nfc
# NFC access control + feature files + configuration
PRODUCT_COPY_FILES += \
        packages/apps/Nfc/migrate_nfc.txt:system/etc/updatecmds/migrate_nfc.txt \
        frameworks/native/data/etc/com.nxp.mifare.xml:system/etc/permissions/com.nxp.mifare.xml \
        frameworks/native/data/etc/com.android.nfc_extras.xml:system/etc/permissions/com.android.nfc_extras.xml \
        frameworks/native/data/etc/android.hardware.nfc.xml:system/etc/permissions/android.hardware.nfc.xml
endif # TARGET_USES_QCA_NFC

# Feature definition files for msm8916
# cts fail testSensorFeatures.remove android.hardware.sensor.gyroscope.xml.ligang.
PRODUCT_COPY_FILES += \
    frameworks/native/data/etc/android.hardware.sensor.accelerometer.xml:system/etc/permissions/android.hardware.sensor.accelerometer.xml \
    frameworks/native/data/etc/android.hardware.sensor.compass.xml:system/etc/permissions/android.hardware.sensor.compass.xml \
    frameworks/native/data/etc/android.hardware.sensor.light.xml:system/etc/permissions/android.hardware.sensor.light.xml \
    frameworks/native/data/etc/android.hardware.sensor.proximity.xml:system/etc/permissions/android.hardware.sensor.proximity.xml

#fstab.qcom
PRODUCT_PACKAGES += fstab.qcom

PRODUCT_PACKAGES += \
    libqcomvisualizer \
    libqcompostprocbundle \
    libqcomvoiceprocessing

#OEM Services library
PRODUCT_PACKAGES += oem-services
PRODUCT_PACKAGES += libsubsystem_control
PRODUCT_PACKAGES += libSubSystemShutdown

PRODUCT_PACKAGES += wcnss_service

# MSM IRQ Balancer configuration file
PRODUCT_COPY_FILES += \
    device/qcom/l5261/msm_irqbalance.conf:system/vendor/etc/msm_irqbalance.conf

#wlan driver
PRODUCT_COPY_FILES += \
    device/qcom/l5261/WCNSS_qcom_cfg.ini:system/etc/wifi/WCNSS_qcom_cfg.ini \
    device/qcom/l5261/WCNSS_wlan_dictionary.dat:persist/WCNSS_wlan_dictionary.dat \
    device/qcom/l5261/WCNSS_qcom_wlan_nv.bin:persist/WCNSS_qcom_wlan_nv.bin

PRODUCT_PACKAGES += \
    wpa_supplicant_overlay.conf \
    p2p_supplicant_overlay.conf
#ANT+ stack
PRODUCT_PACKAGES += \
AntHalService \
libantradio \
antradio_app

#HBTP
PRODUCT_PACKAGES += hbtp_daemon
PRODUCT_PACKAGES += libhbtpclient.so
PRODUCT_PACKAGES += libhbtpfrmwk.so
PRODUCT_PACKAGES += libhbtparm.so
PRODUCT_PACKAGES += libafehal_5_rohm_v3.so
PRODUCT_PACKAGES += hbtp_8939_5_rohm_v3.cfg
PRODUCT_PACKAGES += hbtpcfg_8939_5_rohm_v3.dat
PRODUCT_PACKAGES += libafehal_5_rohm_v4.so
PRODUCT_PACKAGES += hbtp_8939_5_rohm_v4.cfg
PRODUCT_PACKAGES += hbtpcfg_8939_5_rohm_v4.dat
PRODUCT_PACKAGES += libafehal_5p5_rohm_v4.so
PRODUCT_PACKAGES += hbtp_8939_5p5_rohm_v4.cfg
PRODUCT_PACKAGES += hbtpcfg_8939_5p5_rohm_v4.dat
PRODUCT_PACKAGES += libafehal_6_rohm_v3.so
PRODUCT_PACKAGES += hbtp_8939_6_rohm_v3.cfg
PRODUCT_PACKAGES += hbtpcfg_8939_6_rohm_v3.dat

# Defined the locales
PRODUCT_LOCALES += en_US zh_CN pt_BR pt_PT fr_FR de_DE es_ES es_US ar_EG ru_RU pl_PL cs_CZ iw_IL bg_BG vi_VN el_GR hu_HU hr_HR fa_IR sr_RS nl_NL

# Add the overlay path
ifeq ($(strip $(TARGET_USES_QTIC)),true)
PRODUCT_PACKAGE_OVERLAYS := $(QCPATH)/qrdplus/Extension/res-overlay \
        $(PRODUCT_PACKAGE_OVERLAYS)
endif


###################################### tinno oem ####################################


#audio res 
$(call inherit-product, device/qcom/$(CUSTOM_PRODUCT)/res/audio/Audio.mk)

#bootup res
$(call inherit-product, device/qcom/$(CUSTOM_PRODUCT)/res/animation/animation.mk)


#audio params
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/Bluetooth_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/Bluetooth_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/General_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/General_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/Global_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/Global_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/Handset_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/Handset_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/Hdmi_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/Hdmi_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/Headset_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/Headset_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/Speaker_cal.acdb vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/Speaker_cal.acdb)
$(shell cp -af  device/qcom/$(CUSTOM_PRODUCT)/audio/workspaceFile.qwsp vendor/qcom/proprietary/mm-audio/audcal/family-b/acdbdata/8916/QRD/workspaceFile.qwsp)

# GMS
#$(call inherit-product-if-exists, vendor/google/gms/products/gms.mk)

# TINNO APPS
#$(call inherit-product-if-exists, vendor/tinno/packages/apps/tinno_apps.mk)

# MYOS
MYOS_LAUNCHER          := false
MYOS_MUSIC             := false
MYOS_SOUNDRECORDER     := true
MYOS_WEATHER           := false
MYOS_FILEMANAGER       := true
MYOS_MIRROR            := false
MYOS_TORCH             := false
MYOS_CALCULATOR        := false

#MYOS_ROOT_DIR := vendor/tinno/myos
#$(call inherit-product-if-exists, vendor/tinno/myos/myos.mk)

#PRODUCT_PACKAGES += TNSystemUpdate
#PRODUCT_COPY_FILES += \
#       vendor/tinno/packages/apps/TinnoOTA/ota_settings_default.xml:system/etc/ota_settings.xml

# Set corresponding project name to customize myos media apps and myos3.0 apps,
# detail in vendor/tinno/packages/apps/ReleaseAPK/release_copy.mk
# and vendor/myos/myos.mk(config.mk).
PROJECT_NAME := trunk

# MYOS 3.0
#$(call inherit-product-if-exists, vendor/myos/myos.mk)

# MY Camera/Gallery/VideoPlayer/FaceBeatyUI
CONFIG_MYOS_RELEASE_APK := true
RELEASE_APK_CONFIG_FILE_DIR := device/qcom/$(TARGET_PRODUCT)
#$(call inherit-product-if-exists, vendor/tinno/packages/apps/ReleaseAPK/release_copy.mk)

# 3RD Apps
BROWSER := true
#$(call inherit-product-if-exists, vendor/tinno/3rd/3rd_apps.mk)




#bt
$(call inherit-product, device/qcom/l5261/bt.mk)



# zenghaihui enable SSR
#ifneq ($(filter user, $(TARGET_BUILD_VARIANT)),)
ifeq ($(TARGET_BUILD_VARIANT),user)
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.ssr.restart_level=1
else
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.ssr.restart_level=0
endif

#add TnNvOperate by huiyong.yin
PRODUCT_PACKAGES += TnNvOperate

#add blu 3rd app by huiyong.yin
#$(call inherit-product-if-exists, vendor/tinno/blu/blu.mk)

#//Begin<REQ><20150724><>add GESTURE_WAKEUP;xiongdajun
PRODUCT_PROPERTY_OVERRIDES += ro.function.smartawake=true
PRODUCT_PROPERTY_OVERRIDES += persist.sys.timezone=America/New_York
#PRODUCT_PROPERTY_OVERRIDES += ro.function.tinnogesture=true
#PRODUCT_PACKAGES += \
#   GesturePhone
#//END<REQ><20150724><>add GESTURE_WAKEUP;xiongdajun

# zenghaihui add 
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.sim2.preferred3G=0

#add sts by liuzongbin
#PRODUCT_PACKAGES += SaleTracker
#PRODUCT_COPY_FILES += \
#       vendor/tinno/packages/apps/SaleTracker/Tracksms:persist/sts/Tracksms \
#       vendor/tinno/packages/apps/SaleTracker/SaleTrackerConfig.xml:system/etc/SaleTrackerConfig.xml \
#       vendor/tinno/packages/apps/SaleTracker/libsltrckrcnfg.so:system/lib/libsltrckrcnfg.so


#gms hexiaoming
TINNO_GMS_ABLE          := false


# LINE<modify default USB debugging: mtp><20150618><hexiaoming>
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.usb.config1=none

PRODUCT_PROPERTY_OVERRIDES += \
    ro.com.google.clientidbase=android-blu

#smartstandby
PRODUCT_COPY_FILES += \
	device/qcom/l5421/st-settings-config.xml:system/etc/st-settings-config.xml
#smartstandby

