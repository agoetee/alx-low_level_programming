#include "main.h"

/**
 ** _puts - prints string
 ** @str: the string to be printed
 **
 **/
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
