/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#define ORYX_CONFIGURATOR
#define IGNORE_MOD_TAP_INTERRUPT
#undef RGB_DISABLE_TIMEOUT
#define RGB_DISABLE_TIMEOUT 600000

#undef RGB_MATRIX_VAL_STEP
#define RGB_MATRIX_VAL_STEP 6

#define USB_SUSPEND_WAKEUP_DELAY 0
#define FIRMWARE_VERSION u8"9Qz4L/ZN5Kv"
#define RAW_USAGE_PAGE 0xFF60
#define RAW_USAGE_ID 0x61
#undef RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_STARTUP_SPD 60
