#include "main.h"

/**
 * string_toupper - changes all lowercase letters into uppercase
 * @alpha: the string to be converted
 * Return: alpha
 */
char *string_toupper(char *alpha)
{
	int i;

	i = 0;
	while (alpha[i] != '\0')
	{
		if (alpha[i] >= 'a' && alpha[i] <= 'z')
		{
			alpha[i] = alpha[i] - 32;
		}
		i++;
	}
	return (alpha);
}
