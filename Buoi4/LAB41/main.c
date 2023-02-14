#include <P18f4520.h>
#include <delays.h>
#include <timers.h>

#pragma config OSC = HS
#pragma config MCLRE = ON
#pragma config WDT =OFF
#define xung PORTBbits.RB5

void main(void)
{
	
	// Tinh toan tan so;
	// 10Hz <=> 100.10^3uS
	// xN = T*F/8;
	TRISB = 0x00;
	ADCON1 = 0x0f;
	PORTB = 0x00;
	OpenTimer1(TIMER_INT_OFF&T1_16BIT_RW&T1_SOURCE_INT&T1_PS_1_8&T1_OSC1EN_OFF);
	while(1)
	{
		WriteTimer1(65536-18750);
		while(!PIR1bits.TMR1IF); //co chan
		PIR1bits.TMR1IF =0;
		xung = ~xung;
	}
}