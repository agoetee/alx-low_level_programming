#include "main.h"

/**
 * print_number - prints an integer with putchar
 * @n: the number to be printed
 *
 *
 */

void print_number(int n)
{
	unsigned int t;

	t = n;

	if (n < 0)
	{
		_putchar('-');
		t = -n;
	}
	if (t / 10 != 0)
	{
		print_number(t / 10);
	}
	_putchar((t % 10) + '0');
}
