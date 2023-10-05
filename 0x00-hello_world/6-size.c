#include <stdio.h>

/**
 * main - Entry point
 *
 * Description :'program to print text'
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/* Size of variable types */
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}
