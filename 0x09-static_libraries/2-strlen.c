#include "main.h"

/**
 ** _strlen - computes length of string
 ** @s: the string
 ** Return: number of character count in s
 **
 **/
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}
	return (i);
}
