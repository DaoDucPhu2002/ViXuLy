#include <P18f4520.h>
#include <delays.h>
#include <math.h>

#pragma config OSC = HS
#pragma config MCLRE = ON


#define PORTBbits.RB4 KEY 
int i;
int dem=0;

int TimSoDu(int Number);

int TimSoDu(int Number)
{
	int soDu = 0;
	soDu = Number%12;
	return soDu;
}

void main(void)
{
	TRISB = 0b00010000;
	ADCON1 = 0x0f;
	
	while(1)
	{
		if (KEY == 0)
		{
			Delay10KTCYx(50);
			dem++;
			
			if (dem >255)
			{
				dem =0;
			}
		}
		
		PORTB = TimSoDu(dem);
		//PORTB = 1;
/*		for (i = 0;i<10;i++)
		{
			PORTB=i;
			Delay10KTCYx(50);
		}
		*/
	}
}
