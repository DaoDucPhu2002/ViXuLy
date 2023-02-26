#include <P18f4520.h>
#include <stdio.h>
#include <delays.h>

#pragma config OSC = HS
#pragma config MCLRE = ON
#pragma config WDT = OFF

// dinh nghia cac chan IO
#define LCD_Data PORTD
#define LCD_RS PORTCbits.RC0
#define LCD_RW PORTCbits.RC1
#define LCD_EN PORTCbits.RC2


// ham ghi lenh
void lcd_command_char(char text)
{
	LCD_RS = 0;
	LCD_RW = 0;
	LCD_EN = 1;
	LCD_Data = text;
	LCD_EN = 0;
	Delay1KTCYx(10);
}

//ham khoi tao
void LCD_config(void)
{
	lcd_command_char(0x38); //giao tiep voi vdk bang 8 chan
	lcd_command_char(0x06);
	lcd_command_char(0x0c);// bat hiem thi ,tat con tro
	lcd_command_char(0x01); // xoa man hinh
}
void LCD_Write(char data)
{
	LCD_RS = 1;
	LCD_RW=0;
	LCD_EN=1;
	LCD_Data = data;
	LCD_EN = 0;
	Delay1KTCYx(10);
}



void write_string(char *str)
{
	
	while(*str)
	{
		LCD_Write(*str);
		str++;
	}
}

char message[32];
 
void main(void)
{
	ADCON1 =  0x0f; // vao ra so
	TRISC = 0x00;
	TRISD =  0x00; // thiet lap dau ra cho Port C va D;
	LCD_config();
	
	while(1)
	{
		lcd_command_char(0x80);//dua con cho ve dong thu nhat
		sprintf(&message[0],"Dao Duc Phu");
		write_string(&message[0]);
		
	
	}
}