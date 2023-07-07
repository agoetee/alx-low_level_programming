#include "main.h"

/**
 * _memset - set memory location
 * @s: character s
 * @b: checker variable
 * @n: iterator
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);	
}
