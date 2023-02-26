#include <P18f4520.h>
#include <adc.h>

#pragma config OSC = HS
#pragma config MCLRE = ON
int x;

void main()
{
	ADCON1 = 0b00001100;
	TRISC=0;
	TRISD = 0;
	TRISE = 0;
	TRISA =  0x02;
	//cau hinh cho bo chuyen doi
	OpenADC(ADC_FOSC_2& //chon nguon xung cho bo ADC
	ADC_RIGHT_JUST&		//Cach Ghi KET qua
	ADC_0_TAD,			//lua chon thoi gian thu nhan A/D
	ADC_CH2&			//Lua chon Kenh dau vao Analog
	ADC_INT_OFF&		//su dung ngat A/D
	ADC_VREFPLUS_VDD&	//Cau Hinh dien Ap tham chieu	VREF+
	ADC_VREFMINUS_VSS,	//cau hinh dien ap tham chieu	VREF-
	0b00001100 //portconfig // gia tri cua ADCON1
	);
	
	while(1)
	{
		ConvertADC(); //lenh bien doi
		while(BusyADC());	// doi bien doi xong
		x=ReadADC();//lay gia tri bien doi
		x = x&0x03ff;
		PORTD = x%256;
		PORTC = x/256;
		
		if (x>409) //dien ap 2 vol;
		{
			PORTEbits.RE1 = 1;
		}
		else
		{
			PORTEbits.RE1 =0;
		}
	}
}
