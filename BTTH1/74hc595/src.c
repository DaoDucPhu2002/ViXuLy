#include <P18f4520.h>
#include <delays.h>

#pragma config OSC = HS 
#pragma config MCLRE = ON

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
void chanle()
{
int j;
	  unsigned char mang[]={0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};
	  for(j=0;j<10;j++)
	     {
		 IC_74HC595(mang[j]);
		 latchPin=0;   // khi dich du 8 biut thi chot du lieu va xuat ra output
		 latchPin=1;
		 Delay10KTCYx(100);
		 }
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
	TRISD = 0x00;
	ADCON1 = 0x0f;
	while(1)
	{
	chanle();
	}
	
	
}
