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
	int *mem, i;

	if (min > max)
		return (NULL);
	mem = malloc(sizeof(int) * (max - min + 1));
	if (mem == NULL)
		return (NULL);
	for (i = 0; i <= max; i++)
	{
		mem[i] = min++;
	}
	return (mem);

}
