#include <P18f4520.h>
#include <delays.h>
//cau hinh PIC
#pragma config  OSC = HS //Che do giao dong HS
#pragma	config	MCLRE = ON //su dung chan RE la chan
#pragma config	PBADEN = OFF // cau hinh port b la so
//Define IO
#define BTN PORTBbits.RB3 // dinh nghia BTN = RB3
#define LED PORTBbits.RB7 // Dinh nghia LED = R7

void delay_second(int time)
{
	int i;
	for (i=0;i<time;i++)
	{
		Delay10KTCYx(200);//tre 1s (thach anh = 8MHz) = 200*1/8MHz )	
	}
}

void main()
{
while(1)
	{
	LED = 1;
	delay_second(1);
	
	}


}


