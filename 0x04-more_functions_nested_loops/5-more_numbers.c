#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 tem time
 *
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar(j);
			_putchar('\n');
		}
	}
	_putchar('\n');
}
