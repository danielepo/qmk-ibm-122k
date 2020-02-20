#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER 		0x0001
#define MANUFACTURER    Evil
#define PRODUCT         Evil80
#define DESCRIPTION     QMK keyboard firmware for Evil80

/* key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 20

/* Planck PCB default pin-out */
#define MATRIX_ROW_PINS { B6, D7, D5, D4, D3, D2, D1, D0 }
// #define MATRIX_ROW_PINS { E1 }
#define MATRIX_COL_PINS { C7, C6, C5, C4, C3, C2, C1, C0, \
                          F7, F6, F5, F4, F3, F2, F1, F0, \
                          B0, B1, B2, B3 };

#define UNUSED_PINS

#define BACKLIGHT_PIN B5
#define BACKLIGHT_BREATHING

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* number of backlight levels */
#define BACKLIGHT_LEVELS 3

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
