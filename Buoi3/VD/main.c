#include <P18f4520.h>
#include <delays.h>
//cau hinh PIC
#pragma config OSC = HS //chu y can co config
#pragma config MCLRE = ON // su dunf chan REST
//Cau hinh IO
#define LED2 PORTBbits.RB4
#define LED1 PORTBbits.RB3

int i = 0;
//thiet lap ngat ngoai
void low_isr(void); //ngat bang suon am

#pragma code low_vector = 0x18

void interrupt_at_low_vector(void)
	{_asm GOTO low_isr _endasm}

#pragma code
#pragma interruptlow low_isr
void low_isr(void)
{
	INTCONbits.INT0IF=0;
	for(i = 0;i <10; i++)
	{
		LED2 = 1;
		Delay10KTCYx(50);
		LED2 = 0;
		Delay10KTCYx(50);
	}
}


int temp = 0b00001000;
void main()
{
	ADCON1 = 0x0f;
	TRISB = 0b00000111;
	INTCONbits.GIE=1;
	INTCONbits.INT0IE =1;	//cho phep INT0 ngat ngoai
	INTCON2bits.INTEDG0=0;	//ngat suon am
	
	INTCON3bits.INT1IE=1
	INTCON2bits.INTEDG1= 0;
	
	RCONbits.IPEN1=1;
	INTCONbits.GIEL=1;
	INTCON3bits.INT1IP0; // 1 uu tien cap;
	
	while(1)
	{
		LED1=1;
		Delay10KTCYx(100);
		LED1=0;
		Delay10KTCYx(100);
	}	

}