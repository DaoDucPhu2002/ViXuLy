#include <P18f4520.h>
#include <delays.h>

#pragma config OSC = HS // che do giao dong hs
#pragma config MCLRE = ON // che do reset

#define PB1 = PORTBbits.RB0



void main(void)
{
	TRISB = 0x01;
	TRISD =0x00;
	ADCON1=0x0f;
		
	while(1)
	{
		while(PB1==0);
		while(PB1==1);
	}

}