#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a set of arrays
 * @a: the parameter array
 * @n: number of arrays
 *
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] == a[n - 1])
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	printf("\n");
}
