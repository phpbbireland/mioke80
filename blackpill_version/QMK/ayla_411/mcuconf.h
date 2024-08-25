//#undef STM32_PWM_USE_TIM2
//#define STM32_PWM_USE_TIM2 TRUE
//#define WS2812_PWM_DRIVER PWMD2
//#define WS2812_PWM_CHANNEL 2
//#define WS2812_PWM_PAL_MODE 2
//#define WS2812_PWM_DMA_STREAM STM32_DMA1_STREAM2
//#define WS2812_PWM_DMA_CHANNEL 2
//#define WS2812_PWM_DMAMUX_ID              // The DMAMUX configuration for TIMx_UP - only required if your MCU has a DMAMUX peripheral
//#define WS2812_PWM_COMPLEMENTARY_OUTPUT	  // Whether the PWM output is complementary (TIMx_CHyN)


#pragma once

#include_next "mcuconf.h"

#undef STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1 FALSE

#undef STM32_SPI_USE_SPI2
#define STM32_SPI_USE_SPI2 FALSE

//For the trackball
#undef STM32_SPI_USE_SPI1
#define STM32_SPI_USE_SPI1 TRUE

#undef STM32_SPI_USE_SPI5
#define STM32_SPI_USE_SPI5 FALSE

#undef STM32_SERIAL_USE_USART2
#define STM32_SERIAL_USE_USART2 FALSE

//For Split communication
#undef STM32_SERIAL_USE_USART1
#define STM32_SERIAL_USE_USART1 TRUE

//For RGB PWM
#undef STM32_PWM_USE_TIM2
#define STM32_PWM_USE_TIM2 TRUE

#undef STM32_ST_USE_TIMER
#define STM32_ST_USE_TIMER 5