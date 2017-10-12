#ifndef STM32_BSP_KEY
#define STM32_BSP_KEY
#include "stm32f10x.h"
#include "bsp_led.h"
#define GPIO_KEY_CLK RCC_APB2Periph_GPIOC
#define GPIO_KEY_MODE GPIO_Mode_IN_FLOATING
#define GPIO_KEY_PIN GPIO_Pin_13
void GPIO_Key_Config(void);
#endif /*STM32_BSP_KEY*/






