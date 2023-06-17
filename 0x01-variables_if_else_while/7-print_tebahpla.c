#include <stdio.h>

/**
 * main - entry iinto the program
 * Return: always zero
 */

int main(void)
{
	int rev;

	for (rev = 'z'; rev >= 'a'; rev--)
	{
		putchar(rev);
	}
	putchar('\n');

	return (0);
}
