#ifndef BSP_LED
#define BSP_LED
#include "bsp_led.h"
#define LED_GPIO_CLK  RCC_APB2Periph_GPIOC
#define GPIO_PORT GPIOC
#define LED_GPIO_MODE GPIO_Mode_Out_PP
#define LED1_GPIO_PIN GPIO_Pin_3
#define GPIO_SPEED GPIO_Speed_10MHz

#define LED2_GPIO_PIN GPIO_Pin_4

#include "stm32f10x.h"
void GPIO_Led_Config(void);




#endif /*BSP_LED*/




