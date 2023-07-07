#include "main.h"

/**
 ** _abs - computes the absolute value of an integer
 ** @j: the integer to be checked
 ** Return: always success
 **/

int _abs(int j)
{
	if (j < 0)
	{
		return (j * -1);
	}
	else
	{
		return (j);
	}
	return (0);
}
