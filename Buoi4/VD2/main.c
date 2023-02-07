#include <P18f4520.h>

#pragma config OSC = HS
#pragma config MCLRE = ON

void main()
{
	T0CON = 0b01111000;
	ADCON1 = 0x0f;
	TRISA = 0x10;
	TRISB = 0x00;
	LATB=0x00;//dat truoc day ra cho PORTB
	TMR0L = 0;
	T0CONbits.TMR0ON =1;//cho phep couter dem;
	while(1)
	{
		PORTB = TMR0L;
	}
	
}