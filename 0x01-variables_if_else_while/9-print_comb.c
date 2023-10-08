#include <stdio.h>

/**
 * main- print numberts
 *
 * Return: Always (0) success
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)

	{
		putchar(48 + i);

		if (i == 9)

		{
			break;
		}
		putchar(44);
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
