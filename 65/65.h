/* 
Copyright 2024 Timception
 */
//#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
/*
#define LAYOUT( \
             K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, K0F, \
        K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, \
        K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C,      K2E, K2F, \
        K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C,      K3E, K3F, \
        K40, K41, K42, K43,           K46,                K4A, K4B, K4C,      K4E, K4F  \
) { \
        { KC_NO,  K01,  K02,  K03, K04,   K05,   K06,   K07,   K08,   K09,   K0A, K0B, K0C, K0D,   K0E, K0F, }, \
        { K10,    K11,  K12,  K13, K14,   K15,   K16,   K17,   K18,   K19,   K1A, K1B, K1C, K1D,   K1E, K1F, }, \
        { K20,    K21,  K22,  K23, K24,   K25,   K26,   K27,   K28,   K29,   K2A, K2B, K2C, KC_NO, K2E, K2F, }, \
        { K30,    K31,  K32,  K33, K34,   K35,   K36,   K37,   K38,   K39,   K3A, K3B, K3C, KC_NO, K3E, K3F, }, \
        { K40,    K41,  K42,  K43, KC_NO, KC_NO, K46,   KC_NO, KC_NO, KC_NO, K4A, K4B, K4C, KC_NO, K4E, K4F }  \
}
*/