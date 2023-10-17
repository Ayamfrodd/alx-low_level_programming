#include "main.h"

int _strlen(char *s)
{
	int c;
	while(*s)
	{
		c++;
		(*s)++;
	}
	return (c);
}
