LOCAL_PATH := device/qcom/$(CUSTOM_PRODUCT)/res/animation

PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/bootanimation.zip:system/media/bootanimation.zip \
    $(LOCAL_PATH)/boot.mp3:system/media/boot.mp3 \
    $(LOCAL_PATH)/shutdownanimation.zip:system/media/shutdownanimation.zip \
    $(LOCAL_PATH)/shutdown.mp3:system/media/shutdown.mp3 \
    $(LOCAL_PATH)/shutdown.mp3:system/media/shutdown.wav