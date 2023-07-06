#include "main.h"

/**
 * power_ops - eturns a natural square root of a number
 * @n: input number
 * @j: iteration number
 * Return: -1 or the square root
 *
 */

int power_ops(int n, int j)
{
	if (j % (n / j) == 0)
	{
		if (j * (n / j) == n)
			return (j);
		else
			return (-1);
	}
	return (0 + power_ops(n, j + 1));
}

/**
 * _sqrt_recursion - returns the natural square root
 * @n: the number
 * Return: -1 if no natural square root
 *
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (power_ops(n, 2));
}
