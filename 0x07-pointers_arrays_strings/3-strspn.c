#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be checked
 * @accept: the source string
 * Return: bytes in initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, m, n;

	m = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		n = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				m++;
				n = 1;
			}
		}
		if (n == 0)
		{
			return (m);
		}
	}
	return (0);
}
