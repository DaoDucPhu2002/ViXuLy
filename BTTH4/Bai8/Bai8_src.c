#include <P18f4520.h>
#include <timers.h>
#include <pwm.h>

#pragma config OSC = HS
#pragma config MCLRE = ON
#pragma config WDT = OFF

#define KEY PORTBbits.RB0
int temp  = 0;
void main()
{
	ADCON1 = 0x0f;
	TRISB = 0x01;
	TRISC  = 0x00;
	
	OpenTimer2(T2_PS_1_16); //prescale = 16 => period = 49
	OpenPWM1(49);
	SetDCPWM1(180);
	
	while(1)
	{
		while(KEY==1);
		while(KEY ==0);
		temp+=1;
		if (temp %2 ==0 )
		{
			SetDCPWM1(60);
		}
		else 
		{
			SetDCPWM1(140);
		}
	
	}	
	 


}
