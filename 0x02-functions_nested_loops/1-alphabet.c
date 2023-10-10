#include <main.h>

/**
 * print_alphabet - print all the alphabets
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
}

/**
 * main - print alphabet
 *
 * Return : Alwyas (0) success
 */

int main(void)
{
	print_alphabet();
	return (0);
}
