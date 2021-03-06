#ifndef __USART6_H__
#define __USART6_H__ 
#include "main.h"
#define USART_REC_LEN  			8  	//定义最大接收字节数 200
#define EN_USART6_RX 			1		//使能（1）/禁止（0）串口1接收  
#define UART6_Waiting 0
#define UART6_Receiving 1
#define UART6_Success 2 
#define UART6_Failed  3

void USART6_Configuration(u32 bound);


void Usart_SendByte( USART_TypeDef * pUSARTx, uint8_t ch);
void Usart_SendString( USART_TypeDef * pUSARTx, char *str);
void Usart_SendHalfWord( USART_TypeDef * pUSARTx, uint16_t ch);
#endif
