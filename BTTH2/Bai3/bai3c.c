#include <P18f4520.h>
#include <delays.h>
#include <timers.h>

#pragma config MCLRE = ON
#pragma config OSC = HS
#pragma config WDT = OFF

#define xung PORTCbits.RC2
void main()
{
	ADCON1 = 0x0f;
	TRISC = 0x00;
	//Fosc =12M
	//Xung Can Tao = 200HZ => T =  1/200HZ = 5.10^3uS
	//Nua Chu ki xung can tao la: T/2 = 2,5.10^3uS
	//x la he so chia tan truoc, 65536-N la gia tri nap cho timer o che do 16 bit de sau 2,5.10^3uS timer chan.
	//	N = 2,4*10^3 / (x*1/3)
	//chon x = 1;
	
	//khoi tao timer
	OpenTimer1(TIMER_INT_OFF&T1_16BIT_RW&T1_SOURCE_INT&T1_PS_1_1&T1_OSC1EN_OFF);
	
	while(1)
	{
		
		WriteTimer1(65536-7500);
		
		while(!PIR1bits.TMR1IF);
		
		PIR1bits.TMR1IF =0;
		xung = ~xung;
	}
	
	
}