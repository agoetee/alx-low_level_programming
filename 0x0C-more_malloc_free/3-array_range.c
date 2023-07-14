#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum range
 * @max: maximum range
 * Return: pointer to int
 */
int *array_range(int min, int max)
{
	int *mem, i, length;

	if (min > max)
		return (NULL);
	length = (max - min) + 1;
	mem = malloc(sizeof(int) * length);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		mem[i] = min++;
	}
	return (mem);

}
