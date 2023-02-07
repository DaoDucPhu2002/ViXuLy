\\TIMER3
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
	OpenTimer3(TIMER_INT_OFF&T3_SOURCE_INT&T3_16BIT_RW&T3_PS_1_1);
	
	while(1)
	{
		
		WriteTimer3(65536-7500);
		
		while(!PIR2bits.TMR3IF);
		
		PIR2bits.TMR3IF =0;
		xung = ~xung;
	}
	
	
}