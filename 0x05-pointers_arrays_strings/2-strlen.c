#include "main.h"

int _strlen(char *s)
{
	int c = 0;
	for(*s)
	{
		c++;
		(*s)++;
	}
	return (c);
}
