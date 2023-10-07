#include <stdio.h>

/**
*  main - print numbers
*
* Return: Always (0) success
*/

int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		write(n);
	putchar('\n');
	return (0);
}
