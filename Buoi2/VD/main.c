#include <P18f4520.h>
#include <delays.h>
//cau hinh PIC
#pragma config  OSC = HS //Che do giao dong HS
#pragma	config	MCLRE = ON //su dung chan RE la chan
#pragma config	PBADEN = OFF // cau hinh port b la so
//Define IO
#define BTN PORTBbits.RB3 // dinh nghia BTN = RB3
#define LED PORTBbits.RB7 // Dinh nghia LED = R7

/*void delay_second(int time)
{
	int i;
	for (i=0;i<time;i++)
	{
		Delay10KTCYx(200);//tre 1s (thach anh = 8MHz) = 200*1/8MHz )	
	}
}*/

void main()
{
	TRISB = 0b00001000; //che do ra cua cac chan IO moi bit la 1 port tu 7-0 // RB3 = IN con lai OUT
	// PORTBbits.TRISB3=1; PORTBbits.TRISB7=0 //cach viet nay tuong duong: nhuoc diem la chi dinh nghia duoc 1 chan/1 lenh: B3=IN B7=OUT con lai k anh huong
	ADCON1 = 0x0f;
	while(1)
	{
		if(BTN ==0)
		{
			LED=1;
		}
		else
			LED=0;
	}
	//LED = 0
	
	
	

}


