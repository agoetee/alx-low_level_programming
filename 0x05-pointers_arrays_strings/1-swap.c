#include "main.h"

/**
 * swap_int - swaps the position of two numbers
 * @a: the first number
 * @b: the second number
 *
 */
void swap_int(int *a, int *b)
{
	int safe = *a;

	*a = *b;

	*b = safe;
}
