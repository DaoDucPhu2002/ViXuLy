#include <P18f4520.h>
#include <delays.h>
#include <timers.h>

#pragma config OSC  = HS
#pragma config MCLRE = ON
#pragma config WDT = OFF

void ngat_ngoai(void);
#pragma code uu_tien_cao = 0x08
void ngat_cao(void)
{
	ngat_ngoai();
}
#pragma code
#pragma interrupt ngat_ngoai
void ngat_ngoai(void)
{
	PIR2bits.TMR3IF = 0; //xoa co
	T3CONbits.TNR3ON = 0;
	WriteTimer(65536 - 37500);
	T3CONbits.TMR3ON=1;
	/*{
	them cac tac vu tai day
	}*/
}
void main(void)
{
	TRISD =0x00;
	ADCON1 = 0x0f;
	//khoi tao ngat
	INTCONbits.GIE = 1;
	PIE2bits.TMR3IE = 1;
	INTCONbits.TMR0IE = 1;
	RCONbits.IPEN = 1;	
	INTCONbits.GIEL = 1;
	IPR2bits.TMR3IP = 1;
	// khoi tao timer
	T3CON= 0b10110000;
	WriteTimer3(65536-37500);
	T3CONbits.TMR3ON = 1;
	//KhoiTaoTimer0
	T0CON = 0b00000010;
	WriteTimer0(65536-37500);
	T0CONbits.TMR0ON = 1;
	
	while(1);
	
}


