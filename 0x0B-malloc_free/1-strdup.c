#include <stdlib.h>
#include "main.h"

/**
 * _strdup - points to a new allocated in memory
 * @str: duplicate string
 * Return: a character
 *
 */
char *_strdup(char *str)
{
	char *ptr;
	int i;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}

	size = 0;
	while (*(str + size) != '\0')
	{
		size++;
	}

	ptr = malloc(sizeof(*ptr) * size + 1);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';

	return (ptr);


}
