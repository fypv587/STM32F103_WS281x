/**
  ******************************************************************************
  * @file    usart3.h
  * @author  xiaoyuan
  * @version V2.0
  * @date    2018-11-06
  * @brief   提供了USART3模块函数的声明
  ******************************************************************************
  * @attention
  *
  ******************************************************************************
  */

#ifndef __USART3_H
#define __USART3_H

#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f10x.h"
#include <stdbool.h>

#define USART3_BUFFER_LEN 1024

#define USART3_CLK        RCC_APB1Periph_USART3
#define USART3_GPIO_CLK   RCC_APB2Periph_GPIOB

#define USART3_TX_PORT    GPIOB
#define USART3_TX_PIN     GPIO_Pin_10
#define USART3_RX_PORT    GPIOB
#define USART3_RX_PIN     GPIO_Pin_11

#define USART3_RX_MAX_LEN  1024
   
extern uint8_t usart3_rx_buffer[USART3_RX_MAX_LEN];
extern uint16_t usart3_rx_cnt;

void usart3_init(uint32_t baud);
void usart3_printf (char * Data, ... );
void usart3_sendByte(uint8_t c);
void usart3_sendStr(char * str);
void usart3_irq(void); 
//void usart3_putBuff (uint8_t *buff, uint32_t len);

#ifdef __cplusplus
 }
#endif

#endif //__USART_H
