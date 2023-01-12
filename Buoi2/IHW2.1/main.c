#include <P18f4520.h>
#include <delays.h>

#pragma config OSC = HS // thiet lap che do xung
#pragma config MCLRE = ON //thiet lap chan RE

#define KEY PORTDbits.RD7

int x = 0x01;
void main(void)
{
	TRISC = 0x00;
	TRISB = 0x80;
	ADCON1 = 0x0f;
	while(1)
	{
		if (KEY == 1)
		{
			PORTC = x;
			x=x<<1;	
			Delay10KTCYx(100);//1s 
			if (x > 0x08)
			{
				x = 0x01;
			}
		}
		else
		{
			PORTC = 0x00;
		}
		
	}
}