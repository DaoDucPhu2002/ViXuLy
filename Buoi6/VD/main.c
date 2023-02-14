#include <P18f4520.h>
#include <delays.h>
#include <usart.h>

#pragma config MCLRE = ON
#pragma config OSC = HS
#pragma config WDT = OFF

void main(void)
{
	// thiet lap cac chan IO
	TRISC= 0x80;
	ADCON1 = 0x0f;
	
	// cau hinh USART

	OpenUSART(
	USART_TX_INT_OFF&//khong ngat truyen
	USART_RX_INT_OFF&//khong ngat cham
	USART_ASYNCH_MODE&//che do khong dong bo
	USART_EIGHT_BIT&
	USART_SYNC_MASTER&
	USART_CONT_RX&
	USART_BRGH_HIGH&51
	/*
	 - voi che do khong dong bo, toc do baud cao
	 toc do = Fosc/(16*(spbrg+1))
	 - voi che do khong dong bo, toc do thap
	 toc do = Fosc/(64*(spbrg+1))
	 - voi che do dong bo
	 toc do = Fosc/(4*(spgrg+1)))
	*/
	);
	
	//kiem tra PIC co ban hay khong
	while(BusyUSART());
	while(1)
	{
		WriteUSART(1);
	}	
}