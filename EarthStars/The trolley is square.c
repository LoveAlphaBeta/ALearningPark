#include<BoeBot.h>
#include<uart.h>
void qw(int a,int b,int c)
{
	  int p;
	  for(p=1;p<=a;p++)
	{
		P1_0=1;
		delay_nus(b);
		P1_0=0;
		
		P1_1=1;
		delay_nus(c);
		P1_1=0;
		delay_nms(20);
	}
}

int main(void)
{
	uart_Init();
	
	qw(80,1700,1300);
	qw(24,1700,1700);
	qw(80,1700,1300);
	qw(24,1700,1300);
	qw(80,1700,1300);
	qw(24,1700,1700);
	qw(80,1700,1300);
	qw(24,1700,1700);
	qw(80,1700,1300);
	while(1);
}