#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of characters
 * @size: int of size
 * @c: the character array
 * Return: a character
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(*ptr) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}

	return (ptr);
}
