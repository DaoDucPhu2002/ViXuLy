//khai b�o c�c thu vi?n, v� d?:
#include <P18f4520.h>
#include <delays.h>
#include <usart.h>
//C?u h�nh cho vi di?u khi?n, v� d?:
#pragma config OSC = HS //ch? d? dao d?ng HS
#pragma config MCLRE = ON //s? d?ng RE3 l�m ch�n reset (OFF: kh�ng s? d?ng)
#pragma config WDT = OFF //kh�ng d�ng Watchdog timer
#pragma config PBADEN = OFF //PORTB<4:0> du?c c?u h�nh th�nh c�c ch�n v�o/ra s?
//ON: PORTB<4:0> du?c c?u h�nh th�nh c�c ch�n AN8-AN12
#pragma config PWRT=ON // s? d?ng Power-up timer
#pragma config BOREN=OFF // kh�ng s? d?ng ch?c nang Bown-out reset
//(reset khi Vdd xu?ng th?p du?i 1 ngu?ng)
#pragma config LVP=OFF //kh�ng d?ng ch? d? c?p ngu?n ch? t? m?ch n?p
//(Single-Supply ICSP Programming)
/*khai b�o bi?n s?,h?ng s?,c?u tr�c,chuong tr�nh con, v� d?:*/
int x;
char m[10];
//Khai b�o t�n c�c chuong tr�nh con, v� d?:
void high_isr (void);
//vi?t c�c chuong tr�nh con, v� d?:
void high_isr (void)
{
//c�c c�u l?nh
}

#define KEY PORTAbits.RA3
//chuong tr�nh ch�nh
int dem =0;
void main (void)
{
ADCON1=0x0F;
TRISC=0b10000000;
TRISA = 0xff;
OpenUSART(USART_TX_INT_OFF&USART_RX_INT_OFF&
USART_ASYNCH_MODE&USART_EIGHT_BIT&
USART_CONT_RX&USART_BRGH_HIGH,51);

WriteUSART('0');
while(1)
{
	while(KEY == 1);
	while(KEY == 0);
	dem= dem+1;
	while(BusyUSART());
	WriteUSART(8);
	while(BusyUSART());
	WriteUSART(dem+0x30);
	

}
}