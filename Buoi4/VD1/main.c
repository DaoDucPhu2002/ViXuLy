#include <P18f4520.h>

#pragma config OSC = HS // che do giao dong
#pragma config MCLRE= ON // chon chan reset

#define xung PORTDbits.RD0
void main()
{
	T0CON = 0x04;
	ADCON1 = 0x0f;
	TRISD = 0x00;
	PORTD = 0x00; //clear PORT D;
	while(1)
	{
		TMR0H = (65536-15625)/256; //so xung can dem trong nua chu ki
		TMR0L = (65536-15625)%256;
		T0CONbits.TMR0ON = 1;//cho phep timer hoat dong;
		while(!INTCONbits.TMR0IF);
		T0CONbits.TMR0ON = 0;
		INTCONbits.TMR0IF = 0;
		xung = ~xung;
	}
}