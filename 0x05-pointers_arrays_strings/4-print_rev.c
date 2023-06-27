#include "main.h"

/**
 * print_rev - reverses a string
 * @s: the string to be reversed
 *
 */

void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	while (len--)
	{
		_putchar(s[len]);
	}
	_putchar('\n');
}
