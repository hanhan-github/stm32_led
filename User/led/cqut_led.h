#ifndef __CQUT_LED_H__
#define	__CQUT_LED_H__


#include "stm32f10x.h"


/* ����LED���ӵ�GPIO�˿�, �û�ֻ��Ҫ�޸�����Ĵ��뼴�ɸı���Ƶ�LED���� */
// R-��ɫ
#define LED_GPIO_PORT    	GPIOC			              /* GPIO�˿� */
#define LED_GPIO_CLK 	    RCC_APB2Periph_GPIOC		/* GPIO�˿�ʱ�� */
#define LED_GPIO_PIN		GPIO_Pin_13			        /* ���ӵ�SCLʱ���ߵ�GPIO */

			        /* ���ӵ�SCLʱ���ߵ�GPIO */


/** the macro definition to trigger the led on or off 
  * 1 - off
  *0 - on
  */
#define ON  0
#define OFF 1

/* ʹ�ñ�׼�Ĺ̼������IO*/
#define LED1(a)	if (a)	\
					GPIO_SetBits(LED_GPIO_PORT,LED_GPIO_PIN);\
					else		\
					GPIO_ResetBits(LED_GPIO_PORT,LED_GPIO_PIN)








/* ������ɫ������߼��÷�ʹ��PWM�ɻ��ȫ����ɫ,��Ч������ */




void LED_GPIO_Config(void);

#endif /* __CQUT_LED_H__ */
