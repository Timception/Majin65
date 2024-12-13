/* Copyright 2024 Timception
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
#include "65.h"


#ifdef RGB_MATRIX_ENABLE
// LED Identification
led_config_t g_led_config = { {
	{ NO_LED,  6,      7,     16,     17,     24,     25,     33,     34,     41,     42,  51,     52,     58, 59,     68 },
    { NO_LED,  5,      8,     15,     18,     23,     26,     32,     35,     40,     43,  50,     53,     57, 60,     67 },
    { NO_LED,  4,      9,     14,     19,     22,     27,     31,     36,     39,     44,  49,     54, NO_LED, 61,     66 },
    {      0,  3,     10,     13,     20,     21,     28,     30,     37,     38,     45,  48,     55, NO_LED, 62,     65 },
    {      1,  2,     11,     12, NO_LED, NO_LED,     29, NO_LED, NO_LED, NO_LED,     46,  47,     56, NO_LED, 63,     64 }	
}, {
    {   0,  51 }, {   0,  64 },
	{  15,  64 }, {  15,  51 }, {  15,  38 }, {  15,  26 }, {  15,  14 },
	{  30,  14 }, {  30,  26 }, {  30,  38 }, {  30,  51 }, {  30,  64 },
	{  45,  64 }, {  45,  51 }, {  45,  38 }, {  45,  26 }, {  45,  14 },
	{  60,  14 }, {  60,  26 }, {  60,  38 }, {  60,  51 }, 
	              {  75,  51 }, {  75,  38 }, {  75,  26 }, {  75,  14 },
	{  90,  14 }, {  90,  26 }, {  90,  38 }, {  90,  51 }, {  90,  64 },
	              { 105,  51 }, { 105,  38 }, { 105,  26 }, { 105,  14 },
    { 119,  14 }, { 119,  26 }, { 119,  38 }, { 119,  51 },
	              { 134,  51 }, { 134,  38 }, { 134,  26 }, { 134,  14 },
	{ 149,  14 }, { 149,  26 }, { 149,  38 }, { 149,  51 }, { 149,  64 },
	{ 164,  64 }, { 164,  51 }, { 164,  38 }, { 164,  26 }, { 164,  14 },
	{ 179,  14 }, { 179,  26 }, { 179,  38 }, { 179,  51 }, { 179,  64 },
	{ 209,  64 }, { 209,  51 }, { 209,  38 }, { 194,  26 }, { 194,  14 },	
	                                          { 209,  14 }, { 209,  26 },	
	{ 224,  64 }, { 224,  51 }, { 224,  38 }, { 224,  26 }, { 224,  14 },
	{ 209,   0 }, { 164,   0 }, { 105,   0 }, {  60,   0 }, {  15,   0 }
}, {
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
    4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
	4, 4, 4, 4
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