/**
  ******************************************************************************
  * @file    main.c
  * @author  HAN
  * @version V1.0
  * @date    2020-xx-xx
  * @brief   ����led
  ******************************************************************************
  * @attention
  *
  * ʵ��ƽ̨:STM32 ���İ� 
  * ��̳    :
  * �Ա�    :
  *
  ******************************************************************************
  */ 
	
#include "stm32f10x.h"                  // Device header
#include "cqut_led.h"                  	// Device header

void Delay(__IO u32 nCount); 

/**
  * @brief  ������
  * @param  ��
  * @retval ��
  */ 
int main(void)
{	
	SystemInit();	// ����ϵͳʱ��Ϊ72M 	
	
	LED_GPIO_Config(); //LED �˿ڳ�ʼ�� 
	
	while (1)
  {
    LED1(ON);
  }
}

void Delay(__IO u32 nCount)
{
  for(; nCount != 0; nCount--);
} 
