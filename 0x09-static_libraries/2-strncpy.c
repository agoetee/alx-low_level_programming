#include "main.h"

/**
 ** _strncpy - copies a string
 ** @dest: the destination string
 ** @src: the source string
 ** @n: the number of characters
 ** Return: the destination string
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return (dest);

}
