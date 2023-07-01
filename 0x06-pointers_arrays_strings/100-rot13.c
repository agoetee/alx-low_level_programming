#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @n: the string
 * Return: the character in variable n
 */

char *rot13(char *n)
{
	int i, j;
	char info[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char data[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (n[i] == info[j])
			{
				n[i] = data[j];
				break;
			}
		}
	}
	return (n);
}
