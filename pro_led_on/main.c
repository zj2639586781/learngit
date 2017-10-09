#include "library.h"

int main(void)
{
	//开启时钟
	RCC->APB2ENR |= (1 << 4);
	//设置GPIO为输出模式
	GPIO_C->CRL |= (1 << (4 * 3 + 3));
	//设置输出为低电平，点亮LED
	GPIO_C->ODR &= ~(1 << 4);
}
void SystemInit()
{
}

