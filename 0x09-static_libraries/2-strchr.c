#include "main.h"
#include <string.h>

/**
 ** _strchr - locates the character in the string
 ** @s: the string to be searched
 ** @c: the character to be in search
 ** Return: Null if character is not found or character c
 **
 **/
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
		s++;
	}

	return (NULL);

}
