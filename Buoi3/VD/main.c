#include <P18f4520.h>
#include <delays.h>
#pragma config OSC = HS //che do giao dong hs
#pragma config MCLRE = ON //su dung RE lam chan RES
	
#define PORTBbits.RB2  KEY


void main()
{
	//setup cac PORT;
	TRISB = 0x04;
	ADCON1 = 0x0f;
	//dat gia tri ban dau cua led o vi tri led1 == PORT 3;
	temp = 0x08;
	
	while(True)
	{
		temp = temp <<1;
		delay10KTCYx(100); // F thach anh = 4;
		
		if temp == 0x40
			{
				temp = 0x04;
			}
		
	}



}