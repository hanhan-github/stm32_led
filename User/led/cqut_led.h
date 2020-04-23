#ifndef __CQUT_LED_H__
#define	__CQUT_LED_H__


#include "stm32f10x.h"


/* 定义LED连接的GPIO端口, 用户只需要修改下面的代码即可改变控制的LED引脚 */
// R-红色
#define LED_GPIO_PORT    	GPIOC			              /* GPIO端口 */
#define LED_GPIO_CLK 	    RCC_APB2Periph_GPIOC		/* GPIO端口时钟 */
#define LED_GPIO_PIN		GPIO_Pin_13			        /* 连接到SCL时钟线的GPIO */

			        /* 连接到SCL时钟线的GPIO */


/** the macro definition to trigger the led on or off 
  * 1 - off
  *0 - on
  */
#define ON  0
#define OFF 1

/* 使用标准的固件库控制IO*/
#define LED1(a)	if (a)	\
					GPIO_SetBits(LED_GPIO_PORT,LED_GPIO_PIN);\
					else		\
					GPIO_ResetBits(LED_GPIO_PORT,LED_GPIO_PIN)








/* 基本混色，后面高级用法使用PWM可混出全彩颜色,且效果更好 */




void LED_GPIO_Config(void);

#endif /* __CQUT_LED_H__ */
