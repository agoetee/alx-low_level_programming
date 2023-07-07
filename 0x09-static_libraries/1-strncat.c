#include "main.h"

/**
 ** _strncat - concatenates two strings
 ** @dest: the destination string
 ** @src: the source string
 ** @n: length of src
 ** Return: a pointer to the resulting string
 **/

char *_strncat(char *dest, char *src, int n)
{
	int destLen = 0;
	int srcLen = 0;
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		destLen++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		srcLen++;
	}

	for (i = 0; i < n; i++)
	{
		dest[destLen + i] = src[i];
	}

	return (dest);
}
