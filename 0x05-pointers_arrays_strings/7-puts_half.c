#include "main.h"

/**
 * puts_half - prints the last hals of a string
 * @str: the string to be divided into 2
 *
 */

void puts_half(char *str)
{
	int strlen, halflen, i;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	strlen = len;

	if (strlen % 2 == 0)
	{
		halflen = strlen / 2;
	}
	else if (strlen % 2 == 1)
	{
		halflen = (strlen - 1) / 2;
	}
	for (i = halflen; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
