/*
Copyright 2023 Timception

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

#pragma once
//#include "config_common.h"


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16


/* key matrix pins */
//ON STM32F401 DO NOT USE PINS A9, A11, A12, B2, C13
/* Top to Bottom */ 
//#define MATRIX_ROW_PINS { A8, A10, A15, B4, B5 }

/* Left to Right */
//#define MATRIX_COL_PINS { B1, B0, A7, A6, A5, A4, A3, A2, A1, A0, C15, C14, B12, B13, B14, B15}

//Encoders
#define ENCODERS_PAD_A { B10, B10 }
#define ENCODERS_PAD_B { B3, B9 }
//#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4
#define ENCODER_DEFAULT_POS 0x3

//#define VIAL_ENCODER_DEFAULT { RGB_RMOD, RGB_MOD, RGB_HUD, RGB_HUI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }

// RGB Matrix Settings
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES
    

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
#define VIAL_KEYBOARD_UID {0xCA, 0x24, 0xDC, 0x4A, 0x52, 0x73, 0x0A, 0x56}

// The state of the indicator pins when the LED is "on" - 1 for high
#define LED_PIN_ON_STATE 0
#define LED_CAPS_LOCK_PIN C13   // STM32F401 ONBOARD LED

#define OLED_DISPLAY_128X32
#define I2C1_SCL_PIN B6
#define I2C1_SDA_PIN B7
#define OLED_BRIGHTNESS 128


/* OLED Stuff: Bongo, Luna etc. */

//#define OLED_TIMEOUT 30000

/*
#define OLED_FONT_H "oled/oledfont.c"
#define CMK 1
#define NUM 2
#define SYM 3
#define FNC 4
*/


/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

//#define FORCE_NKRO