#include "main.h"
/**
 * _memset - sets the string with the first n characers
 * with b
 * @s: the string
 * @b: the character to be setting
 * @n: the number of characters
 * Return: pointer to s
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
