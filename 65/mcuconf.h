#pragma once

#include_next "mcuconf.h"


//#undef STM32_PWM_USE_TIM5
//#define STM32_PWM_USE_TIM5 TRUE

//should be this innit
#undef STM32_PWM_USE_TIM4
#define STM32_PWM_USE_TIM4 TRUE

#undef STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1 TRUE