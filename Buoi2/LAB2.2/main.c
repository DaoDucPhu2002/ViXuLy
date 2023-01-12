#include <P18f4520.h>
#include <delays.h>

#pragma config OSC = HS // Thiet lap xung vao HS
#pragma config MCLRE = ON// Thiet lap su dung chan RE

//LED = RC4-7
//KEY = RC0-1
#define KEY1 PORTCbits.RC0
#define KEY2 PORTCbits.RC1
int dem;
int a;
int b ;
void main(void)
{	
	TRISC = 0b00000011;
	ADCON1 = 0x0f;
		while(1)
		{
			a = KEY1;
			b = KEY2;
			dem = a*10+b;
			switch(dem)
			{
			
				case 0:
				PORTC = 0x10;
					break;
				case 1:
				PORTC = 0x20;
					break;
				case 10:
				PORTC = 0x40;
					break;
				case 11:
				PORTC = 0x80;
			
			}
			
		}
}