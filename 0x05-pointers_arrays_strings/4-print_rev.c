#include "main.h"

/**
 * print_rev - reverses a string
 * @s: the string to be reversed
 *
 */

void print_rev(char *s)
{
	int len, j;

	for (len = 0; *s != '\0'; len++)
		s++;

	for (j = len; j >= 0; j--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');


}
