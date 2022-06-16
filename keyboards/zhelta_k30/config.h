#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x7777
#define PRODUCT_ID      0x0030
#define DEVICE_VER      0x0011
#define MANUFACTURER    ZHELTA
#define PRODUCT         ZHELTA K30

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 10

/* key matrix pins */
#define MATRIX_ROW_PINS { F5, F6, F7 }
#define MATRIX_COL_PINS { B1, B3, B2, B6, D4, C6, D7, E6, B4, B5 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* polling rate */
#define USB_POLLING_INTERVAL_MS 1

/* number of backlight levels */
#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 0
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5
