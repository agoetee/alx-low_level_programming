#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all parameters
 * @n: the number of parameters
 * Return: arithmetic integer
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int x, sum = 0;

	va_start(args, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		x = va_arg(args, int);
		sum += x;
	}
	va_end(args);

	return (sum);
}
