#include <P18f4520.h>
#include <delays.h>
#include <timers.h>

#pragma config MCLRE = ON
#pragma config OSC = HS
#pragma config WDT = OFF

#define RESET PORTCbits.RC1
unsigned char mang[]={0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
unsigned int dem=0;
void main(void)
{
	ADCON1 = 0x0f;
	TRISC = 0x03;
	TRISD = 0x00;
	
	OpenTimer1(TIMER_INT_OFF&
	T1_16BIT_RW&
	T1_SOURCE_EXT&
	T1_PS_1_1&
	T1_OSC1EN_OFF);
	
	while(1)
	{
		dem  = ReadTimer1();
		PORTD = mang[dem];
		while(RESET == 0)
		{
		WriteTimer1(0);
		}
		
		
	}
	

}