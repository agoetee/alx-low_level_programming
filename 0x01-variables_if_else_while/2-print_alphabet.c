#include <stdio.h>
/**
 * main - entry to the program
 * Return: always zero
 */

int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}
