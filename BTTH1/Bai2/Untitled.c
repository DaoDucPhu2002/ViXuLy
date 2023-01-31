#include <P18f4520.h>
#include <delays.h>

#pragma config OSC = HS//che do giao dong
#pragma config MCLRE = ON // chon RE ==  reset;

#define PB1 PORTBbits.RB0
unsigned char temp =0x08;
int dem =0	 ;
void main(void)
{
	TRISD = 0x00;
	TRISB=0x01;
	ADCON1= 0x0f;
	while(1)
	{
		
		while(PB1 == 1);
		while(PB1 == 0);
		if (dem ==0)
		{
			PORTB =0x00;
			dem++;
		}
		
		
		temp=temp<<1;
		PORTD = temp;
		dem++;
		
		if (dem > 4)
		{
			temp = 0xff;
		}	
	}
}

