#include <stdio.h>

/**
 * main - Prints the aplhabet without q and e
 * Return: Always (0) Success
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	return (0);
}
