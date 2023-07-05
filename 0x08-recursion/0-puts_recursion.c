#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: the string
 *
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
