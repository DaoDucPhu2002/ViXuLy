#include <P18f4520.h>
#include <delays.h>
#include <timers.h>

#pragma config MCLRE = ON
#pragma config OSC = HS
#pragma config WDT = OFF

#define xung PORTBbits.RB2
#define KEY PORTBbits.RB0


void main(void)
{
	ADCON1 = 0x0f;
	TRISB = 0x01;
	//Fosc = 12MHz
	//Fout = 400Hz => T = 1/400 = 2.5*10^3uS
	
	// xN = T.Fosc/8 
	//xN = 3750 => chon x =1 voi 16bit
	//16BIT = 65536 - N
	//8bit = 256-N
	OpenTimer1(TIMER_INT_OFF&T1_16BIT_RW&T1_PS_1_1&T1_SOURCE_INT);
	while(1)
	{
		WriteTimer1(65536-3750);
		if (KEY == 1){
		while(!PIR1bits.TMR1IF);
		//xoa co tran
		PIR1bits.TMR1IF = 0;
		xung = ~xung;
		}
		else
		{
			xung = 0;
		}
	}
}