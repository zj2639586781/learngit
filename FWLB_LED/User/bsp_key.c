#include "bsp_key.h"
void GPIO_Key_Config(void)
{
		GPIO_InitTypeDef GPIO_Struct_Init;
	//����GPIO����ʱ��
	RCC_APB2PeriphClockCmd(GPIO_KEY_CLK,ENABLE);
	//����GPIO�Ĵ����ṹ������
	GPIO_Struct_Init.GPIO_Mode = GPIO_KEY_MODE;
	GPIO_Struct_Init.GPIO_Pin = GPIO_KEY_PIN;
	GPIO_Struct_Init.GPIO_Speed = GPIO_SPEED;
	//��ʼ��GPIO����
	GPIO_Init(GPIO_PORT,&GPIO_Struct_Init);
	
}














