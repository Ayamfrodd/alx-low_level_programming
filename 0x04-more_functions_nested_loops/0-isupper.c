#include "main.h"

/** 
 * _isupper - check if int is caps
 *
 * @c - int to check
 *
 * Return : 1 if caps and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
