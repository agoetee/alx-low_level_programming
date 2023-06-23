#include "main.h"

/**
 * print_number - prints numbers using putchar
 * @n: the variable to be printed
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
	}
	else if (n > 9)
	{
		_putchar((n / 10) + '0');

	}
}
