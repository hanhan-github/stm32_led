/**
  ******************************************************************************
  * @file    main.c
  * @author  HAN
  * @version V1.0
  * @date    2020-xx-xx
  * @brief   点亮led
  ******************************************************************************
  * @attention
  *
  * 实验平台:STM32 核心板 
  * 论坛    :
  * 淘宝    :
  *
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"                  // Device header
#include "cqut_led.h"                  	// Device header

void Delay(__IO u32 nCount); 

/**
  * @brief  主函数
  * @param  无
  * @retval 无
  */ 
int main(void)
{	
	SystemInit();	// 配置系统时钟为72M 	
	
	LED_GPIO_Config(); //LED 端口初始化 
	
	while (1)
  {
    LED1(ON);
  }
}

void Delay(__IO u32 nCount)
{
  for(; nCount != 0; nCount--);
} 
