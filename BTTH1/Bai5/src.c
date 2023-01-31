#include <P18f4520.h>
#include <delays.h>

#pragma config OSC = HS
#pragma config MCLRE = ON

#define KEY1 PORTBbits.RB0
#define KEY2 PORTBbits.RB1

#define LED1 PORTBbits.RD5
#define LED2 PORTBbits.RD6

int dem=0;

void main(void)
{
	TRISB = 0X03;
	TRISD = 0X00;
	ADCON1 = 0X0F;
	while(1)
	{
	if (KEY1==1) // trang thai nha;
	{
		PORTD = 0x00;
	}
	else
	{
		while(KEY1 ==0 && KEY2==0);
		while(KEY1 ==0 && KEY2==1);
		dem++;
		switch(dem)
		{
			case 0:
			PORTD = 0x00;
			break;
			
			case 1:
			PORTD = 0x20;
			break;
			
			case 2:
			PORTD = 0x40;
			break;
			
			default:
			PORTD = 0x60;
			break;
		}
	}
	}
}