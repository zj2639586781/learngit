#include "stm32f10x.h"   // œ‡µ±”⁄51µ•∆¨ª˙÷–µƒ  #include <reg51.h>
#include "bsp_led.h"
#include "bsp_key.h"
#define LED 	0
#define KEY		1

/***
**—” ±∫Ø ˝
***/
void My_delay(uint32_t count)
{
	for(;count != 0;count--);
}
#if	LED
int main(void)
{
	// ¿¥µΩ’‚¿Ôµƒ ±∫Ú£¨œµÕ≥µƒ ±÷”“—æ≠±ª≈‰÷√≥…72M°
	GPIO_Led_Config();
	while(1)
	{
		GPIO_SetBits(GPIO_PORT,LED1_GPIO_PIN);
		My_delay(0xfffff);
		GPIO_ResetBits(GPIO_PORT,LED1_GPIO_PIN);
		GPIO_SetBits(GPIO_PORT,LED2_GPIO_PIN);
		My_delay(0xfffff);
	}
	
}
#endif


#if KEY
int main(void)
{
	uint8_t temp;
	GPIO_Led_Config();
	GPIO_Key_Config();
	while(1)
	{
		temp = GPIO_ReadInputDataBit(GPIO_PORT,GPIO_KEY_PIN);
		if(temp)
		{
			GPIO_SetBits(GPIO_PORT,LED1_GPIO_PIN);
			My_delay(0xfffff);
			GPIO_ResetBits(GPIO_PORT,LED1_GPIO_PIN);
			GPIO_SetBits(GPIO_PORT,LED2_GPIO_PIN);
			My_delay(0xfffff);
		}
	}
}



#endif


