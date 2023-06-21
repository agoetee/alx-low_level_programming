#include "main.h"

/**
 * _isalpha - checks if c is an alphabet
 * @c: the character to be checked
 * Return: the exit integer
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
