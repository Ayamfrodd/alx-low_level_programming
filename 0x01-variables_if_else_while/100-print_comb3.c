#include <stdio.h>


int main(void)
{	
	int a=0;
	int b=0;

	while(a<=9)
	{
		while(b<=9)
		{	putchar(a+48);
			putchar(b+48);
			b++;
		}	
	}
	
	putchar('\n');

	return (0);
}
