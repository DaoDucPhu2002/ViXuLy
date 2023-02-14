#include <P18f4520.h>
#include <delays.h>
#include <timers.h>

#pragma config MCLRE = ON
#pragma config OSC = HS
#pragma config WDT  = OFF

#define KEY4 PORTAbits.RA2;

unsigned int dem_1,dem_2,dem_3,tong;
unsigned int key4 = 0;
void ngat_uu_tien_cao(void);
void ngat_uu_tien_thap(void);
//Ði?m d?t CTCPVN có m?c uu tiên cao UTC, vector 0008H
#pragma code uu_tien_cao=0x08
void ngat_cao(void)
{
ngat_uu_tien_cao();
}
#pragma code
#pragma interrupt ngat_uu_tien_cao
void ngat_uu_tien_cao(void)
{
INTCONbits.INT0IF=0;
dem_3+=1;
}

#pragma code uu_tien_thap = 0x18
void ngat_thap(void)
{
ngat_uu_tien_thap();
}
#pragma code
#pragma interrupt ngat_uu_tien_thap
void ngat_uu_tien_thap(void)
{
	INTCON3bits.INT1IF=0;
	key4+=1;
	if (key4 == 4)
	{
		key4 =0;
	
	}
}



#define dataPin PORTDbits.RD5
#define clockPin PORTDbits.RD4
#define latchPin PORTDbits.RD6

//thiet lap cho IC 74HC595;

void IC_74HC595(unsigned char data)
{
	int i;
	clockPin = 0;
	for(i=0;i<8;i++)
	{
		if((data&0x80)==0)
		{
			dataPin = 1;
		}
		else
		{
			dataPin=0;
			
		}
		data=data<<1;
		clockPin = 1;
		clockPin = 0;
		
	}
	latchPin = 0;
	latchPin = 1;
}
//xuat so tu 0/9
void chanle(int j)
{
	int chuc = j/10;
	int donvi = j%10;
	  unsigned char mang[]={0X3F,0X06,0X5B,0X4F,0X66,0X6D,0X7D,0X07,0X7F,0X6F};
		 IC_74HC595(mang[donvi]);
		 IC_74HC595(mang[chuc]);
		 latchPin=0;   // khi dich du 8 biut thi chot du lieu va xuat ra output
		 latchPin=1;
		 Delay10KTCYx(10);
}
void output()
{
	latchPin = 0;
	Delay10TCYx(50);
	latchPin = 1;
	latchPin = 0;
}

void main()
{
	
	
ADCON1=0x0F;

INTCONbits.GIE=1;
INTCONbits.INT0IE=1;
INTCON3bits.INT1IE=1;
INTCON2bits.INTEDG0=0;
INTCON2bits.INTEDG1=0;
RCONbits.IPEN=1;
INTCONbits.GIEL=1;
INTCON3bits.INT1IP=0;
	TRISD = 0x00;
	TRISA = 0xff;
	TRISC = 0xff;
	TRISB = 0xff;
	
	OpenTimer0(TIMER_INT_OFF&T0_SOURCE_EXT&T0_EDGE_RISE&T0_8BIT&T0_PS_1_1);
	OpenTimer1(TIMER_INT_OFF&T1_8BIT_RW&T1_PS_1_1&T1_OSC1EN_OFF);
	
	while(1)
	{
		dem_1 = ReadTimer0();
		dem_2 = ReadTimer1();
		tong = dem_1+dem_2+dem_3;
		switch(key4)
		{
		case 0:
			chanle(tong);
			break;
		case 1:
			chanle(dem_1);
			break;
		case 2:
			chanle(dem_2);
			break;
		case 3:
			chanle(dem_3);
			break;
		}
	}
	
	
	
}