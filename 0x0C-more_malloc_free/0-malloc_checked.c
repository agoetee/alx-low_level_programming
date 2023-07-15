#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: argument passing
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{

	void *memory = malloc(b);
	if (memory)
	{
		return (memory);
	}
	exit(98);

}

