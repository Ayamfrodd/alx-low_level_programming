#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	long int i = 0;

	while (i < 10)
	{
		putchar(48 + i);
		i++;
	}
	putchar('\n');
	return (0);
}
