
#include <P18f4520.h>
#include <delays.h>

#pragma config OSC = HS
#pragma config MCLRE = ON
#pragma config WDT = OFF

#define LED1 PORTCbits.RC2
#define LED2 PORTCbits.RC4
void ngat_ngoai(void);
#pragma code uu_tien_ngat_cao = 0x08
void ngat_cao(void)
{
	ngat_ngoai();
}
#pragma code
#pragma interrupt ngat_ngoai
void ngat_ngoai(void)
{
	int i;
	INTCON3bits.INT2IF = 0;
	LED1=0;
	for(i=0;i<10;i++)
	{
		LED2 = 1;
		Delay10KTCYx(50);
		LED2 = 0 ;
		Delay10KTCYx(50);
	}
}
void main()
{
	//thiet lap IO
	ADCON1 = 0x0f;
	TRISC = 0x00;
	TRISB = 0xff;// INT0
	
	//thiet lap ngat
	
	INTCONbits.GIE = 1;//cho phep ngat ngpao
	INTCON3bits.INT2IE = 1;//cho phpe sd INT0
	INTCON2bits.INTEDG2 = 0;//sd suon am
	
	while(1)
	{
		LED1 = 1;
		Delay10KTCYx(100);
		LED1 = 0;
		Delay10KTCYx(100);
	}
	
	
	
}
