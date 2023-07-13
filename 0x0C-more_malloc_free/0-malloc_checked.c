#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: argument passing
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(sizeof(memory) * b);
	if (memory == NULL)
	{
		return (NULL);
	}
	return (memory);

}

