/*
	#include <P18f4520.h>
	#include <delays.h>
	int dem;
	
	#pragma config MCLRE = ON
	#pragma config OSC = HS
	#define LED4 PORTCbits.RC7
	
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
		INTCONbits.INT0IF=0;
		dem+=1;
		if(dem>7)
		{
			dem=7;
		}
		PORTC = dem<<4;
	}
	
	void main()
	{
		ADCON1 = 0x0f;
		TRISC = 0x00;
		PORTC = 0x00;
		TRISB = 0x0f;
		//thiet lap ngat
		
		INTCONbits.GIE = 1;
		INTCONbits.INT0IE = 1;
		INTCON2bits.INTEDG0 = 0;
		
		while(1)
		{
			LED4 = 1;
			Delay10KTCYx(100);
			LED4=0;
			Delay10KTCYx(100);
			
			
		}
	}
	*/