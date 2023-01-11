#include <P18f3420.h>

#pragma config  OSC = HS //Che do giao dong HS
#pragma	config	MCLRE = ON //su dung chan RE la chan
#pragma config	PBADEN = OFF // cau hinh port b la so


//BTN = R3 
//LED = R7
#define BTN PORTBbits.RB3 // dinh nghia BTN = RB3
#define LED PORTBbits.R7 // Dinh nghia LED = R7

void main()
{
int giatri_BTN = BTN ;
LED = 0;

while(1)
	{
		if giattri_BTN == 1
		{
			LED = 1	;
		}
		else
			LED = 0;
	}

return 0;	

}