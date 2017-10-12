#include "bsp_key.h"
void GPIO_Key_Config(void)
{
		GPIO_InitTypeDef GPIO_Struct_Init;
	//开启GPIO外设时钟
	RCC_APB2PeriphClockCmd(GPIO_KEY_CLK,ENABLE);
	//配置GPIO寄存器结构体内容
	GPIO_Struct_Init.GPIO_Mode = GPIO_KEY_MODE;
	GPIO_Struct_Init.GPIO_Pin = GPIO_KEY_PIN;
	GPIO_Struct_Init.GPIO_Speed = GPIO_SPEED;
	//初始化GPIO外设
	GPIO_Init(GPIO_PORT,&GPIO_Struct_Init);
	
}














