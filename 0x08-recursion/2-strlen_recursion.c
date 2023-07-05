#include "main.h"

/**
 * _strlen_recursion - computes the length of a string
 * @s: the string
 * Return: 0 if string is empty
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
