#include "main.h"

/**
 * print_alphabet_x10() : print letters
 */

void print_alphabet_x10(void)
{
	char ch = 'a';
	int i = 1;
	
	while (i<10)
	{
		while(ch <= 'z')
		{
			_putchar(ch);
		ch++;
		}
		_putchar('\n');
		i++;
	}
}
