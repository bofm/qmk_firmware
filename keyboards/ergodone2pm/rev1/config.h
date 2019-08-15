/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef REV1_CONFIG_H
#define REV1_CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xC0DE
#define PRODUCT_ID      0x1338
#define DEVICE_VER      0x0001
#define MANUFACTURER    Flumeded
#define PRODUCT         ErgoDone2PM
#define DESCRIPTION     An ergo split keyboard with 2 pro micros instead of expander

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 12
#define MATRIX_COLS 7

// wiring of each half 3:4(9) x row:col
//#define MATRIX_ROW_PINS { B2, B1, F7, F6, F5, F4 }
//#define MATRIX_COL_PINS { D3, D2, D4, C6, D7, E6, B4 }
#define MATRIX_ROW_PINS { F4, F5, F6, F7, B1, B2 }
#define MATRIX_COL_PINS { B4, E6, D7, C6, D4, D2, D3 }

/* Use I2C or Serial, not both */
#define SOFT_SERIAL_PIN D0
/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define DIODE_DIRECTION ROW2COL

// different configs
#define NUM_LOCK_LED_ENABLE
#define CAPS_LOCK_LED_ENABLE
#define SCROLL_LOCK_LED_ENABLE

#ifdef PHYSICAL_LEDS_ENABLE

#ifdef NUM_LOCK_LED_ENABLE
//#define NUM_LOCK_INVERT  //uncomment this if you using n-mosfet
#define SCROLL_LOCK_LED_PORT PORTB
#define SCROLL_LOCK_LED_DDR DDRB
#define NUM_LOCK_LED_BIT PB5
#endif

#ifdef CAPS_LOCK_LED_ENABLE
//#define CAPS_LOCK_INVERT  //uncomment this if you using n-mosfet
#define SCROLL_LOCK_LED_PORT PORTB
#define SCROLL_LOCK_LED_DDR DDRB
#define CAPS_LOCK_LED_BIT PB6
#endif

#ifdef SCROLL_LOCK_LED_ENABLE
//#define SCROLL_LOCK_INVERT  //uncomment this if you using n-mosfet
#define SCROLL_LOCK_LED_PORT PORTB
#define SCROLL_LOCK_LED_DDR DDRB
#define SCROLL_LOCK_LED_BIT PB7
#endif

#endif

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
//#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
//#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)


#endif //REV1_CONFIG_H
