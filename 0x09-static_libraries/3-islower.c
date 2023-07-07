#include "main.h"

/**
 ** _islower - checks if c is lowercase
 ** @c: the character to be checked
 ** Return: 1 if lower and 0 if otherwise
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c < 97 && c > 122)
	{
		return (0);
	}
	return (0);
}
