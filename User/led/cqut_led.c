/**
  ******************************************************************************
  * @file    CQUT_led.c
  * @author  HAN
  * @version V1.0
  * @date    2020-xx-xx
  * @brief   led应用函数接口
  ******************************************************************************
  * @attention
  *
  * 实验平台: 
  * 论坛    :
  * 淘宝    :
  *
  ******************************************************************************
  */
  
#include "cqut_led.h"   

 /**
  * @brief  初始化控制LED的IO
  * @param  无
  * @retval 无
  */
void LED_GPIO_Config(void)
{		
		/*定义一个GPIO_InitTypeDef类型的结构体*/
		GPIO_InitTypeDef GPIO_InitStructure;

		/*开启LED相关的GPIO外设时钟*/
		RCC_APB2PeriphClockCmd( LED_GPIO_CLK, ENABLE);
		/*选择要控制的GPIO引脚*/
		GPIO_InitStructure.GPIO_Pin = LED_GPIO_PIN;	

		/*设置引脚模式为通用推挽输出*/
		GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;   

		/*设置引脚速率为50MHz */   
		GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz; 

		/*调用库函数，初始化GPIO*/
		GPIO_Init(LED_GPIO_PORT, &GPIO_InitStructure);	
		
		

		/* 关闭所有led灯	*/
		GPIO_SetBits(LED_GPIO_PORT, LED_GPIO_PIN);
}

/*********************************************END OF FILE**********************/


