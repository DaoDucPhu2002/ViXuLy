#include <P18f4520.h>
#include <delays.h>
#include <pwm.h>
#include <timers.h>

#pragma config OSC  = HS
#pragma config MCLRE = ON
#pragma config WDT = OFF

#define KEY1 PORTBbits.RB0
#define KEY2 PORTBbits.RB1


int duty_cycle = 0;
int dem=0;
void main(void)

{
	ADCON1 = 0x0f;
	TRISD = 0x00;
	TRISC = 0x00;
	TRISB = 0xff;
	//su dung thanh ghi
	//CCP1CON = 0b00001100;
	OpenTimer2(T2_PS_1_16);//he so chia tan = 16
//thiet lap chu ki // period = PWM_period/(4*Tosc*chiatan)-1;	
	
	while(1)
	{
		PORTA = dem;
		
		if(KEY1 == 0)
		{
			while(KEY1 ==0);
			duty_cycle = duty_cycle + 50;
		
		}
		
		if (KEY2 ==0)
		{
			while(KEY2==0);
			duty_cycle =duty_cycle - 50;
		
		}
		if(duty_cycle == 0)
		{
			duty_cycle =0;
		
		}
		if (duty_cycle == 1024)
		{
			duty_cycle ==1024;
		}
		
		OpenPWM1(124);
		SetDCPWM1(duty_cycle);
	}
	
}