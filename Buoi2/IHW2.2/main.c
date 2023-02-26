#include <P18f4520.h>
#include <delays.h>
#include <math.h>

#pragma config OSC = HS
#pragma config MCLRE = ON


#define  KEY PORTBbits.RB1


void main(void)
{
	TRISB = 0b00000010;
	ADCON1 = 0x0f;
	PORTB = 0b00110000;
	while(1)
	{
	
			Delay10KTCYx(100);
			PORTB = PORTB<<1;
		
			if (PORTB = 0b11000000)
			{
				PORTB = 0x00110000;
				
			}
	
	
		
	}
}
