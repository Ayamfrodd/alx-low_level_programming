#include <stdio.h>
#include <unistd.h>

/**
 * main - starting point of program
 *
 * Description : "program to print text"
 *
 * Return : Actually 0 (successful)
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
