#include <P18f4520.h>
#include <stdio.h>
#include <delays.h>
//KHAI BAO BIEN
int valKey1;
int valKey2;


//CAU HINH CHO PIC
#pragma config OSC = HS
#pragma config MCLRE = ON



//Ngat ngoai INT1 voi muc uu tien thap
void Key_1(void);
void Key_2(void); // uu tien thap;


//UU TIEN MUC CAO
#pragma code uu_tien_cao = 0x08
void ngat_cao(void)
{
	Key_1();
}
#pragma code
#pragma interrupt Key_1

void Key_1(void)
{
	pass;
}

//UU TIEN MUC THAP

#pragma code uu_tien_thap = 0x18
void ngat_thap(void)
{
	Key_2();
}
#pragma code
#pragma interrupt Key_2
void Key_2(void)
{
	Pass;
}

	
void main()
{
	
}