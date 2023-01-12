#include <P18f4520.h>
#include <delays.h>

#pragma config OSC = HS// high speed
#pragma config MCLRE = ON

#define KEY PORTCbits.RC5

int x,a;



void main(void)
{
	TRISA = 0b00000000;
	TRISC = 0b00100000;
	x = 0x03;
	ADCON1 = 0x0f;
	
	while(1)
	{
		if(KEY == 1)
		{
			PORTA = x;
			x = x<<1;
			Delay10KTCYx(100); //F = 4MHZ
		
			if (x > 0x0C)
			{
				x = 0x03;
			}
		}
		else
		{
			PORTA = 0x00;
		}
	}
}