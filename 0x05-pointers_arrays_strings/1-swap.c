#include "main.h"

/**
 * swap_int : swap int a and b
 * @a : first int;
 * @b : second int;
 * Return : Always 0
 */

void swap_int(int *a, int *b)
{
	int c;
	
	c = *a;
	*a = *b;
	*b = c;
}
