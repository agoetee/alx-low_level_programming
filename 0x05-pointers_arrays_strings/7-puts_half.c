#include "main.h"

/**
 * puts_half - prints the last hals of a string
 * @str: the string to be divided into 2
 *
 */

void puts_half(char *str)
{
	int halflen, i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		halflen = len / 2;
	}
	else if (len % 2 == 1)
	{
		halflen = (len - 1) / 2;
	}
	for (i = halflen; i <= len; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
