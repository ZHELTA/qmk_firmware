#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7777
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0011
#define MANUFACTURER    ZHELTA
#define PRODUCT         ZHELTA K1

/* direct pins */
#define DIRECT_PINS { \
    { D4 }, \
    { NO_PIN } \
}

#define UNUSED_PINS

/* polling rate */
#define USB_POLLING_INTERVAL_MS 1

/* number of backlight levels */
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 0
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
