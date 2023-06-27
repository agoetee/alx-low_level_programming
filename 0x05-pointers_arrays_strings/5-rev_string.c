#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 *
 */
void rev_string(char *s)
{
	int len = strlen(s);
	int i = 0, j = len - 1;
	char temp;

	if (s == NULL)
		return;
	while (s[len] != '\0')
	{
		len++;

	}
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}

}
