#include<P18f4520.h>
#include<delays.h>

#pragma config OSC = HS
#pragma config MCLRE = ON

#define PB1 PORTBbits.RB0
#define PB2 PORTBbits.RB1

int sum;
void main(void)
{
	TRISB = 0xFF;
	TRISD = 0x00;
	ADCON1 = 0x0f;
	sum = PB1*10 + PB2;
	switch(sum)
	{
	case 0:
		PORTD = 0x10;
	break;
	case 1:
		PORTD = 0x20;
	break;
	case 10:
		PORTD = 0x40;
	break;
	case 11:
		PORTD = 0x80;
	break;
	}	
}