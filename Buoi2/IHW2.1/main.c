#include <P18f4520.h>
#include <delays.h>

#pragma config OSC = HS // thiet lap che do xung
#pragma config MCLRE = ON //thiet lap chan RE

#define KEY PORTBbits.RB1

//typedef  KEY = PORTDbits.RD7;

int x = 0B00110000;
void main(void)
{

	TRISB = 0x0F;
	ADCON1 = 0x0f;
	while(1)
	{
		if (KEY == 1)
		{
			PORTB = x;
			x=x<<1;	
			Delay10KTCYx(100);//1s 
			if (x > 0B11000000)
			{
				x = 0B00110000;
			}
		}
		else
		{
			PORTB = 0;
		}
		
	}
}