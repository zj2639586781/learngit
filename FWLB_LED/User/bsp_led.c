#include "bsp_led.h"
void GPIO_Led_Config(void)
{
	GPIO_InitTypeDef GPIO_Init_Struct;
	//����GPIO����ʱ��
	RCC_APB2PeriphClockCmd(LED_GPIO_CLK, ENABLE);
	//����GPIO�Ĵ����ṹ������	
	GPIO_Init_Struct.GPIO_Mode = LED_GPIO_MODE;
	GPIO_Init_Struct.GPIO_Pin = LED1_GPIO_PIN;
	GPIO_Init_Struct.GPIO_Speed = GPIO_SPEED;
	//����GPIO
	GPIO_Init(GPIO_PORT,&GPIO_Init_Struct);
	
	GPIO_Init_Struct.GPIO_Mode = LED_GPIO_MODE;
	GPIO_Init_Struct.GPIO_Pin = LED2_GPIO_PIN;
	GPIO_Init_Struct.GPIO_Speed = GPIO_SPEED;
	//����GPIO
	GPIO_Init(GPIO_PORT,&GPIO_Init_Struct);
	
	
}









