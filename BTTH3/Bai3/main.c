//bai4. sd timer2

#include <P18f4520.h>
#include <delays.h>
#include <timers.h>

#pragma config OSC = HS
#pragma config MCLRE = ON
#pragma config WDT = OFF

#define xung PORTBbits.RB2
#define KEY PORTBbits.RB0

void main()
{
	TRISB = 0x01;
	ADCON1 = 0x0f;
	OpenTimer2(TIMER_INT_OFF&T2_PS_1_16&T2_POST_1_1);
	PR2 = 234;
	while(1)
	{
		while(KEY ==1)
		{
		while(PIR1bits.TMR2IF==0);
		PIR1bits.TMR2IF = 0;
		xung = ~xung;

		}
		xung = 0;
	}		
}