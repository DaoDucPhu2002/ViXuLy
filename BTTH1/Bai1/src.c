#include <P18f4520.h>
#include <delays.h>

#pragma config OSC = HS //thiet lap che do giao dongn
#pragma config MCLRE = ON // su dung RE lam reset;

#define KEY PORTBbits.RB0
unsigned char temp = 0x08;
void main()
{
	TRISD = 0x00;
	TRISB = 0XFF;
	ADCON1 = 0x0f;
	
	while(1)
	{
		if (KEY == 1)
		{
			PORTD = temp;
			temp= temp << 1;
			Delay10KTCYx(100); //f=4MHZ
			
			if(temp ==0x80)
			{
				temp = 0x08;
			}
		}
		else
		{
			PORTD = 0x00;
		}
	}

}