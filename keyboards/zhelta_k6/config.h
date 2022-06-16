#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7777
#define PRODUCT_ID      0x0006
#define DEVICE_VER      0x0024
#define MANUFACTURER    ZHELTA
#define PRODUCT         ZHELTA K6

/* key matrix size */
#define MATRIX_ROWS 2
#define MATRIX_COLS 3

/* key matrix pins */
#define MATRIX_ROW_PINS { F0, F1 }
#define MATRIX_COL_PINS { F4, F5, F6 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* polling rate */
#define USB_POLLING_INTERVAL_MS 1
#define QMK_KEYS_PER_SCAN 6

/* number of backlight levels */
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 0
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* audio pin */
#define AUDIO_PIN B7

/* disable music mode */
#define NO_MUSIC_MODE
