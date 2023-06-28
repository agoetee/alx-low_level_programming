#include "main.h"

/**
 * _strcpy - copies a string from one pointer to the oother
 * @dest: the destination pointer
 * @src: the source of string
 * Return: the string compied
 */
char *_strcpy(char *dest, char *src)
{
	char *finalDest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (finalDest);
}
