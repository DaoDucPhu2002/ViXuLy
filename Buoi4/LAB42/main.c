//TIMER lam viec o che do couter
#include <P18f4520.h>
#include <delays.h>
#include <timers.h>

#pragma config OSC = HS
#pragma config MCLRE = ON
#pragma config WDT = OFF
int temp=0;
void main(void)
{
	T3CON = 0b00000110;
	ADCON1 = 0x0f;
	TRISC = 0x01;
	TRISB = 0x00;
	TRISD = 0x00;
//	PORTB = 0x00;
//	PORTD = 0x00;
//	LATB = 0x00;
//	LATD = 0x00;
	TMR3L = 0;
	T3CONbits.TMR3ON = 1;
	
	while(1)
	{
		
		PORTD = TMR3L;
		if (TMR3L == 256)
		{
			temp = temp+1;
		}
		PORTB = temp;
	}
	
}