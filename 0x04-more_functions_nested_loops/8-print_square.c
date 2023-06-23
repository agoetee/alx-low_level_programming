#include "main.h"

/**
 * print_square - prints the size of the square
 * @size: the variable of item to be entered
 *
 */

void print_square(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		if (size <= 0)
		{
			_putchar('\n');
		}
		for (j = 1; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
