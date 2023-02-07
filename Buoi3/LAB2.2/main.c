#include <P18f4520.h>
#include <stdio.h>
#include <delays.h>

#pragma config OSC = HS // cau hinh giao dong
#pragma config MCLRE = ON

//DINH NGHIA CAC CHAN IO

#define LED1 PORTDbits.RD0
#define LED2 PORTDbits.RD1
#define LED3 PORTDbits.RD2


//THIET LAP NGAT NGOAI
void high_isr(void);
void low_isr(void);
//uu tien muc cao vector 0x08;
#pragma code high_isr = 0x08
void ngat_cao()
{
	high_isr();
}

#pragma code
#pragma interrupt high_isr
void high_isr(void)
{
	int i;
	//kiem tra bit co cua nguon ngat thu nhat neu =1;
	//xoa co ngat;
	
	INTCONbits.INT0IF = 0;
	
	for(i=0;i<5;i++)
		{
			LED1 = 1;
			Delay10KTCYx(100);
			LED1 = 0;
			Delay10KTCYx(100);
		}
}

//THIET LAP MUC UU TIEN THAP;
#pragma code low_isr = 0x18
void ngat_thap()
{
	low_isr();
}
#pragma code
#pragma interrupt low_isr

void low_isr(void)
{
	int i;
	//xoa co ngat
	INTCON3bits.INT1IF = 0;
	for(i=0;i<5;i++)
	{
		LED2 = 1;
		Delay10KTCYx(100);
		LED2 = 0;
		Delay10KTCYx(100);
	}
}

void main()
{
	ADCON1=0x0f;
	TRISB = 0X03;
	TRISD = 0X00;
	
	//KHAI BAO NGAT NGOAI// GIE = 1 //INTxIE = 1// INTEDGx = 0;
	//DOI VOI NGAT NGOAI CO UU TIEN THI::
	//IPEN // IGEL // INTxIP voi 1 la uu tien cao, 0 la thap // default == 1;
	
	//INT0
	INTCONbits.GIE = 1;
	INTCONbits.INT0IE = 1;
	INTCON2bits.INTEDG0 = 0;
	//INT1;
	INTCON3bits.INT1IE = 1;
	INTCON2bits.INTEDG1 = 0;
	
	//THIET LAP MUC UU TIEN;
	RCONbits.IPEN = 1; //bit cho phep uu tien ngat
	INTCONbits.GIEL = 1; //khi IPEN = 1 thi : 1/ cho phep ngat uu tien cao: 0/cam tat ca cac ngat;
	INTCON3bits.INT1IP = 0; //thiet lap INT1 uu tien muc thap
	
	
	//loops
	while(1)
	{
		LED3 = 1;
		Delay10KTCYx(50);
		LED3 = 0;
		Delay10KTCYx(50);
	}	
	
}