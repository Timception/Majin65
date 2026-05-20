#pragma once

#include_next "mcuconf.h"

// WS2812 RGB uses TIM4 (matching Majin 65 non-ISO)
#undef STM32_PWM_USE_TIM4
#define STM32_PWM_USE_TIM4 TRUE

#undef STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1 TRUE
