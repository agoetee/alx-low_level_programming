#include "main.h"
/**
 * _pow_recursion - returns the value of a power
 * @x: the base integer
 * @y: the power integer
 * Return: -1 if y is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
