//PWM1

#include <P18f4520.h>
#include <timers.h>
#include <pwm.h>

#pragma config OSC = HS
#pragma config MCLRE = ON
#pragma config WDT = OFF

#define	KEY1 PORTBbits.RB0
#define KEY2 PORTBbits.RB3

void main()
{
	ADCON1 = 0x0f;
	TRISB = 0x09;
	TRISC = 0x00;
	
	OpenTimer2(T2_PS_1_16); // chon prescale
	OpenPWM1(149);// tao xung co chu ki xac dinh //period
	SetDCPWM1(120);//ban dau Ton = 2/8 Toff;
	while(1)
	{
		while(KEY1==0)
		{
			SetDCPWM1(180);
		}
		while(KEY2==0)
		{
			SetDCPWM1(360);
		}
	
	}
	

}