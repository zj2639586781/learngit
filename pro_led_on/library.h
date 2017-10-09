
#define __IO     volatile
typedef 	unsigned int  u32;

typedef struct
{
	__IO u32  CRL;
	__IO u32  CRH;
	__IO u32  IDR;
	__IO u32  ODR;
	__IO u32  BSRR;
	__IO u32  BRR;
	__IO u32  LCKR;
}GPIO_TypeDef;
#define PERIPH_BASE           ((unsigned int)0x40000000)
#define PERIPH_APB1_BASE      (PERIPH_BASE)
#define PERIPH_APB2_BASE      (PERIPH_BASE + 0X10000)
#define PERIPH_AHB_BASE       (PERIPH_BASE + 0X20000)

#define GPIO_A 								((GPIO_TypeDef *)(PERIPH_APB2_BASE + 0x0800))
#define GPIO_B 								((GPIO_TypeDef *)(PERIPH_APB2_BASE + 0x0C00))
#define GPIO_C 								((GPIO_TypeDef *)(PERIPH_APB2_BASE + 0x1000))
#define GPIO_D 								((GPIO_TypeDef *)(PERIPH_APB2_BASE + 0x1400))
#define GPIO_E 								((GPIO_TypeDef *)(PERIPH_APB2_BASE + 0x1800))
#define GPIO_F 								((GPIO_TypeDef *)(PERIPH_APB2_BASE + 0x1C00))
#define GPIO_G 								((GPIO_TypeDef *)(PERIPH_APB2_BASE + 0x2000))

typedef struct
{
	__IO u32 CR;
	__IO u32 CFGR;
	__IO u32 CIR;
	__IO u32 APB2RSTR;
	__IO u32 APB1RSTR;
	__IO u32 AHBENR;
	__IO u32 APB2ENR;
	__IO u32 APB1ENR;
	__IO u32 BDCR;
	__IO u32 CSR;
	__IO u32 AHBRSTR;
	__IO u32 CFGR2;	
}RCC_TypeDef;

#define RCC 									((RCC_TypeDef *)(PERIPH_AHB_BASE + 0x1000))






