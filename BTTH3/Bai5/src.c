//thiet ke couter
#include <P18f4520.h>
#include <delays.h>
#include <timers.h>

#pragma config MCLRE = ON
#pragma config OSC = HS
#pragma config WDT = OFF

#define dataPin PORTCbits.RC1
#define clockPin PORTCbits.RC0
#define latchPin PORTCbits.RC2

int temp = 0;
unsigned char mang[]={0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

void main()
{
	TRISC = 0x00;
	TRISA = 0b00010000;
	ADCON1 = 0x0f;
	OpenTimer0(TIMER_INT_OFF&
	T0_SOURCE_EXT&
	T0_EDGE_RISE&
	T0_8BIT&
	T0_PS_1_1);
	
	while(1)
	{
		temp = ReadTimer0();
	
		PORTC = mang[temp];
		
	}
}