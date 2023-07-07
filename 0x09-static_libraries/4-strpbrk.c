#include "main.h"

/**
 ** _strpbrk - searches a string for any of a set of bytes
 ** @s: string is contained here
 ** @accept: checker string
 ** Return: pointer to byte in s, NULL if not
 **/
char *_strpbrk(char *s, char *accept)
{
	int m, n;

	for (m = 0; s[m] != '\0'; m++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (*s == accept[n])
				return (s);
		}
		s++;
	}
	return ('\0');
}
