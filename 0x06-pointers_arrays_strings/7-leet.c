#include "main.h"

/**
 * leet - encoding format
 * @xt: the character
 * Return: the value of pointer
 *
 */
char *leet(char *xt)
{
	int i, j;
	char n1[] = "aAeEoOtTlL";
	char n2[] = "4433007711";

	for (i = 0; xt[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (xt[i] == n1[j])
			{
				xt[i] = n2[j];
			}
		}

	}
	return (xt);
}
