#include <P18f4520.h>
#include <delays.h>
#include <stdio.h>
//#include <delays.h>//

#pragma config OSC = HS	//thiet lap che do giao dong
#pragma config MCLRE = ON // thiet lap RE lam chan RESET
//khai bao ten chuong trinh con phuc vu ngat
int dem  =0;
void ngat_ngoai(void);
#pragma code uu_tien_thap = 0x18
void ngat_cao(void)
{
	ngat_ngoai();
}
#pragma code
#pragma interrupt ngat_ngoai
void ngat_ngoai(void)
{
	INTCON3bits.INT2IF = 0;//xoa co ngat;
	dem = dem+1;
}

void main()
{
	ADCON1=0x0f;
	TRISD = 0x00;
	TRISB = 0x04;
	INTCONbits.GIE = 1;
	INTCON3bits.INT2IE=1;
	INTCON2bits.INTEDG2=0;
	while(1)
	{
		PORTD = dem%16;		

	}
	
}
