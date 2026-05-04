/*
Copyright 2024 Timception

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
// NOTE: config_common.h removed - no longer needed in modern QMK
// NOTE: MATRIX_ROW_PINS / MATRIX_COL_PINS removed - now in keyboard.json
// NOTE: DIODE_DIRECTION removed - now in keyboard.json
// NOTE: VIAL_KEYBOARD_UID moved to keymaps/vial/config.h

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16

//Encoders
#define ENCODERS_PAD_A { B10, B10 }
#define ENCODERS_PAD_B { B3, B9 }
//#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4
#define ENCODER_DEFAULT_POS 0x3

// RGB Matrix Settings
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5

// The state of the indicator pins when the LED is "on" - 1 for high
#define LED_PIN_ON_STATE 0
#define LED_CAPS_LOCK_PIN C13   // STM32F401 ONBOARD LED

#define OLED_DISPLAY_128X32
#define I2C1_SCL_PIN B6
#define I2C1_SDA_PIN B7
#define OLED_BRIGHTNESS 128

//#define FORCE_NKRO
