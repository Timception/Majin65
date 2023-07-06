/* Copyright 2023 Timception
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "raw_hid.h"
#include "quantum.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Base */

[0] = LAYOUT_all(
              KC_GESC,    KC_1,    KC_2, KC_3, KC_4,   KC_5,   KC_6, KC_7, KC_8,       KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSPC, KC_DEL, 
RGUI(KC_TAB),  KC_TAB,    KC_Q,    KC_W, KC_E, KC_R,   KC_T,   KC_Y, KC_U, KC_I,       KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_VOLU, 
     C(KC_X), KC_CAPS,    KC_A,    KC_S, KC_D, KC_F,   KC_G,   KC_H, KC_J, KC_K,       KC_L, KC_SCLN, KC_QUOT,           KC_ENT, KC_VOLD,
     C(KC_C), KC_LSFT,    KC_Z,    KC_X, KC_C, KC_V,   KC_B,   KC_N, KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,            KC_UP, KC_RCTL,
     C(KC_V), KC_LCTL, KC_LGUI, KC_LALT,             KC_SPC,                        KC_RALT,   MO(1), KC_LEFT,          KC_DOWN, KC_RGHT
  ),

  [1] = LAYOUT_all(
            KC_GESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11,  KC_F12, KC_BSPC, QK_BOOT,
   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_WH_U,
   KC_TRNS, KC_CAPS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,           KC_ENT, KC_WH_D,
   KC_TRNS, KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BTN1,          KC_MS_U, KC_BTN2,
   KC_TRNS, KC_LCTL, KC_LGUI, KC_LALT,                    KC_SPC,                            KC_RALT, KC_TRNS, KC_MS_L,          KC_MS_D, KC_MS_R
  ),

  [2] = LAYOUT_all(
              KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
   ),

 [3] = LAYOUT_all(
              KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS,  RGB_MOD, RGB_HUI, RGB_SAI, RGB_VAI, RGB_SPI, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS, RGB_RMOD, RGB_HUD, RGB_SAD, RGB_VAD, RGB_SPD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
     KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,                   KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS
   )

};


#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(RGB_RMOD, RGB_MOD), ENCODER_CCW_CW(TO(3), TO(1)) },
    [1] = { ENCODER_CCW_CW(RGB_HUD, RGB_HUI), ENCODER_CCW_CW(TO(0), TO(2)) },
    [2] = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(TO(1), TO(3)) },
    [3] = { ENCODER_CCW_CW(KC_LEFT, KC_RIGHT), ENCODER_CCW_CW(TO(2), TO(0)) },
};
#endif

#ifdef OLED_ENABLE

oled_rotation_t oled_init_kb(oled_rotation_t rotation) {
	return OLED_ROTATION_270;
	//return OLED_ROTATION_180;
}

bool oled_task_user(void) {
    // Host Keyboard Layer Status

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("Layer\n\n ONE\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("Layer\n\n TWO\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("Layer\nThree"), false);
            break;
		case 3:
            oled_write_P(PSTR("Layer\n\n FOUR\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
    
    return false;
}
#endif