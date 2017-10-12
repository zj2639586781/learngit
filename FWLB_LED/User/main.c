#include "stm32f10x.h"   // �൱��51��Ƭ���е�  #include <reg51.h>
#include "bsp_led.h"
#include "bsp_key.h"
#define LED 	0
#define KEY		1

/***
**��ʱ����
***/
void My_delay(uint32_t count)
{
	for(;count != 0;count--);
}
#if	LED
int main(void)
{
	// ���������ʱ��ϵͳ��ʱ���Ѿ������ó�72M�
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


