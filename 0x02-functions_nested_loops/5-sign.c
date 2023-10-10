#include "main.h"

/**
 * print_sign- print signs
 * Return: return 1 if positive, -1 if negative and Alyas (0) success
 *
 */

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	printf("%d",0);
	return (0);
}
