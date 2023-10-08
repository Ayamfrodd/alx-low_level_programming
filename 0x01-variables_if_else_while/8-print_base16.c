#include <stdio.h>

/**
 * main- print base 16 numbers
 *
 * Return: Always (0) success
 */

int main(void)
{
	/* Print all the numbers in base 16 */

	int ch;

	for (ch = 0; ch <= 9; ch++)
	{
		putchar('0' + ch);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
