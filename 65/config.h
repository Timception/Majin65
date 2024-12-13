/*
Copyright 2024 Timception
*/
#pragma once


/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 16


/* key matrix pins */
//ON STM32F401 DO NOT USE PINS A9, A11, A12, B2, C13


//Encoders
#define ENCODERS_PAD_A { B10, B10 }
#define ENCODERS_PAD_B { B3, B9 }
//#define ENCODER_DIRECTION_FLIP
#define ENCODER_RESOLUTION 4
#define ENCODER_DEFAULT_POS 0x3

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


/* OLED Stuff: Bongo, Luna etc. */

//#define OLED_TIMEOUT 30000

/*
#define OLED_FONT_H "oled/oledfont.c"
#define CMK 1
#define NUM 2
#define SYM 3
#define FNC 4
*/

//#define FORCE_NKRO