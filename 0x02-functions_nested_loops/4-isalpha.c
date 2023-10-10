#include <main.h>

/**
 * _isalpha - function to check if
 *           character is lowercase
 *
 * @c: checks input of function
 *
 * Return: returns 1 if `c` is lowercase
 *         otherwise always 0 (Success)
*/

int _isalpha(int c)
{
	if (c >= 'A' && c <= "Z")
		return (1);
	return (0);
}
