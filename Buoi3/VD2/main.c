#include <P18f4520.h>
#include <delays.h>
//cau hinh PIC
#pragma config OSC = HS //chu y can co config
#pragma config MCLRE = ON // su dunf chan REST
//Cau hinh IO
#define LED5 PORTBbits.RB7
//thiet lap ngat ngoai
void low_isr(void); //ngat bang suon am

#pragma code low_vector = 0x18

void interrupt_at_low_vector(void)
	{_asm GOTO low_isr _endasm}

#pragma code
#pragma interruptlow low_isr
void low_isr(void)
{
	INTCON3bits.INT2IF = 0; //xoa co ngat
	LED5 = 1;				//LED 5 sang
	Delay10KTCYx(100);		//delay
	LED5 = 0;				//LED 5 tat
}


int temp = 0b00001000;
void main()
{
	ADCON1 = 0x0f;
	TRISB = 0b00000111;
	INTCONbits.GIE=1;
	INTCON3bits.INT2IE =1;	//cho phep INT2 ngat ngoai
	INTCON2bits.INTEDG2=0;	//ngat suon am
	
	while(1)
	{
		PORTB = temp;
		temp = temp <<1;
		Delay10KTCYx(100);//=1s
		
		
		if (temp == 0b010000000)
		{
		temp = 0b00001000;
		}
	}	

}