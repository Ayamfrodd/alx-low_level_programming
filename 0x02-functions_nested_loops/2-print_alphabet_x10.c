#include "main.h"

/**
 * print_alphabet_x10 - function to print alphabet
 *
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}