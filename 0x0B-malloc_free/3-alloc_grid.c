#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - implements a 2D array
 * @width: row of th array
 * @height: comumn of the array
 * Return: pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **twoD, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	twoD = malloc(sizeof(int *) * height);
	if (twoD == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		twoD[i] = malloc(sizeof(int) * width);
		if (twoD[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(twoD[i]);
			free(twoD);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			twoD[i][j] = 0;
		}
	}
	return (twoD);
}
