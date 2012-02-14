#include<msp430.h>
main()
{
	int i;
	P1OUT=1;
	P1DIR =0x41;
		while(1)
		{
		while (P1IN >> 3 & 1);
		for (i=30000;i>0;i--);
		P1OUT ^=0x41;	
		}
}

