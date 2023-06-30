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

#include "65iso.h"


#ifdef RGB_MATRIX_ENABLE
// LED Identification
led_config_t g_led_config = { {
	{ NO_LED,  6,      7, 15,     16,     23, 24,     32,     33,     40, 41,  50, 51,     57, 58, 67 },
    { NO_LED,  5,      8, 14,     17,     22, 25,     31,     34,     39, 42,  49, 52,     56, 59, 66 },
    { NO_LED,  4,      9, 13,     18,     21, 26,     30,     35,     38, 43,  48, 53, NO_LED, 60, 65 },
    {      0,  3, NO_LED, 12,     19,     20, 27,     29,     36,     37, 44,  47, 54, NO_LED, 61, 64 },
    {      1,  2,     10, 11, NO_LED, NO_LED, 28, NO_LED, NO_LED, NO_LED, 45,  46, 55, NO_LED, 62, 63 }	
}, {
    {   0,  51 }, {   0,  64 },												//down	0
	{  15,  64 }, {  15,  51 }, {  15,  38 }, {  15,  26 }, {  15,  14 },	//up	6
	{  30,  14 }, {  30,  26 }, {  30,  38 },               {  30,  64 },	//down	7
	{  45,  64 }, {  45,  51 }, {  45,  38 }, {  45,  26 }, {  45,  14 },	//up	15
	{  60,  14 }, {  60,  26 }, {  60,  38 }, {  60,  51 },             	//down	16
	              {  75,  51 }, {  75,  38 }, {  75,  26 }, {  75,  14 },	//up	23
	{  90,  14 }, {  90,  26 }, {  90,  38 }, {  90,  51 }, {  90,  64 },	//down	24
	              { 105,  51 }, { 105,  38 }, { 105,  26 }, { 105,  14 },	//up	32
    { 119,  14 }, { 119,  26 }, { 119,  38 }, { 119,  51 },	            	//down	33
	              { 134,  51 }, { 134,  38 }, { 134,  26 }, { 134,  14 },	//up	40
	{ 149,  14 }, { 149,  26 }, { 149,  38 }, { 149,  51 }, { 149,  64 },	//down	41
	{ 164,  64 }, { 164,  51 }, { 164,  38 }, { 164,  26 }, { 164,  14 },	//up	50
	{ 179,  14 }, { 179,  26 }, { 179,  38 }, { 179,  51 }, { 179,  64 },	//down	51
	{ 209,  64 }, { 209,  51 }, { 209,  38 }, { 194,  26 }, { 194,  14 },	//up	57
	                                          { 209,  14 }, { 209,  26 },  	//down	58
	{ 224,  64 }, { 224,  51 }, { 224,  38 }, { 224,  26 }, { 224,  14 }	//up	67
	//{ 209,   0 }, { 164,   0 }, { 105,   0 }, {  60,   0 }, {  15,   0 }	//down	removed from design
}, {
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4
} };

void suspend_power_down_kb(void) {
    rgb_matrix_set_suspend_state(true);
    suspend_power_down_user();
}

void suspend_wakeup_init_kb(void) {
    rgb_matrix_set_suspend_state(false);
    suspend_wakeup_init_user();
}


#endif