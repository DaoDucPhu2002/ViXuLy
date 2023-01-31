#include<p18f4520.h>
#include<stdio.h>
#include<delays.h>
//c?u hình
#pragma config OSC=HS
#pragma config WDT=OFF
#pragma config MCLRE=ON
#pragma config PBADEN=OFF
//khai báo tên CTCPVN
void ngat_uu_tien_cao(void);
void ngat_uu_tien_thap(void);
//Ði?m d?t CTCPVN có m?c uu tiên cao UTC, vector 0008H
#pragma code uu_tien_cao=0x08
void ngat_cao(void)
{
ngat_uu_tien_cao();
}
#pragma code
#pragma interrupt ngat_uu_tien_cao
void ngat_uu_tien_cao(void)
{
int i;
INTCONbits.INT0IF=0;
for(i=1; i<=5; ++i)
{
PORTBbits.RB4=1;
Delay10KTCYx(100);
PORTBbits.RB4=0;
Delay10KTCYx(100);
}
}
//Ði?m d?t CTCPVN có m?c uu tiên th?p (UTT), vector 0018H
#pragma code uu_tien_thap = 0x18
void ngat_thap(void)
{
ngat_uu_tien_thap();
}
#pragma code
#pragma interrupt ngat_uu_tien_thap
void ngat_uu_tien_thap(void)
{
int i;
INTCON3bits.INT1IF=0;
for(i=1; i<=5; ++i)
{
PORTBbits.RB5=1;
Delay10KTCYx(100);
PORTBbits.RB5=0;
Delay10KTCYx(100);
}
}
void main()
{
ADCON1=0x0F;
TRISB=0b00000111;
INTCONbits.GIE=1;
INTCONbits.INT0IE=1;
INTCON3bits.INT1IE=1;
INTCON2bits.INTEDG0=0;
INTCON2bits.INTEDG1=0;
RCONbits.IPEN=1;
INTCONbits.GIEL=1;
INTCON3bits.INT1IP=0; //INT1 UT thap, INT0 UT cao (mac dinh)
while(1)
{
PORTB=0b00001000;
Delay10KTCYx(100);
PORTB=0b00000000;
Delay10KTCYx(100);
}

}
