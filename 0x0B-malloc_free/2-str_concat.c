#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * Return: pointer to character
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, sumLength;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	sumLength = i + j + 1;

	result = malloc(sizeof(char) * sumLength);
	if (result != NULL)
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			result[i] = s1[i];
		}
		for (j = 0; s2[j] != '\0'; j++)
			result[i + j] = s2[j];
		result[i + j] = '\0';
		return (result);
	}
	else
	{
		return (NULL);
	}

}
