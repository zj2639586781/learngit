#include "library.h"

int main(void)
{
	//����ʱ��
	RCC->APB2ENR |= (1 << 4);
	//����GPIOΪ���ģʽ
	GPIO_C->CRL |= (1 << (4 * 3 + 3));
	//�������Ϊ�͵�ƽ������LED
	GPIO_C->ODR &= ~(1 << 4);
}
void SystemInit()
{
}

