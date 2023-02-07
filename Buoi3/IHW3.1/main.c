#include <P18f4520.h>
#include <stdio.h>
#include <delays.h>

unsigned char seg_display[10] = {0xC0, 0xF9, 0xA4, 0xB0, 0x99, 0x92, 0x82, 0xF8, 0x80, 0x90};

//cau hinh vxl
#pragma config OSC = HS //che do giao dong hs
#pragma config MCLRE = ON// su dung chan reset

//DINH NGHIA CAC CHAN IC 74HC595;
#define dataPin PORTDbits.RD0
#define clockPin PORTDbits.RD1
#define latchPin PORTDbits.RD2

#define KEY PORTBbits.RB0

void IC_74hc595(unsigned char data)
{
	int i;
	clockPin = 0; //khi clockPIN tai suon am;
	for(i=0;i<8;i++)
	{
		if((data&0x80))
		//i = 0 
		//bit ban dau 1111 0000
		//so sanh bit de xuat chan data colck VD 1111 0000 & 1000 000 =1 -> xuat data = 1;
		// khi i = 1	1110 0000 & 1000 0000 = 1 => xuat 1;
		//... khi i = 5 0000 0000 & 1000 0000 = 0 => xuat 0;
		 
		{
			dataPin = 1;
		}
		else
		{
			dataPin = 0;
		}
		data=data<<1;
		clockPin=1;
		clockPin = 0;	
	}
	latchPin = 0;
	latchPin = 1;
}
/*
void output()
{
	latchPin = 0;
	Delay10TCYx(50);
	latchPin = 1;
	latchPin = 0;
}
*/
void main(void)
{
	int dem = 0;
	ADCON1 = 0x0f;
	TRISB = 0x01;
	TRISD = 0x00;
	
	PORTB = 0xc0;
	while(1)
	
	{
		IC_74hc595(seg_display[dem]);
		//output();
		while(KEY == 0);
		while(KEY == 1);
		dem+=1;
		if (dem >9)
		{
			dem = 0;
		}
		
		//IC_74hc595(0x00);
		
		
	}
}