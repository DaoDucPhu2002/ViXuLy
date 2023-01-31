#include <P18f4520.h>
//#include <delays.h>//

#pragma config OSC = HS	//thiet lap che do giao dong
#pragma config MCLRE = ON // thiet lap RE lam chan RESET


 //bien toan cuc
 
 int dem = 0;
 int sodu = 0;
void low_isr(void); //ngat bang suon am

#pragma code low_vector = 0x18

void interrupt_at_low_vector(void)
	{_asm GOTO low_isr _endasm}

#pragma code
#pragma interruptlow low_isr
void low_isr(void)
{
	INTCON3bits.INT2IF = 0; //xoa co ngat
	dem = dem +1;
}


void main()
{
	ADCON1 = 0x0f;
	TRISB = 0b00000100;
	TRISD = 0x00;
	INTCONbits.GIE = 1; //cho phep su dung ngat ngoai
	INTCON3bits.INT2IE=1; // su dung chan INT 2
	INTCON2bits.INTEDG2 = 0; //cho phep ngat bang suon am // 1 la suon duong;
	
	while(1)
	{
		sodu = dem/16;pp
		PORTD = sodu;
	}	

}