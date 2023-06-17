#include <stdio.h>

/**
 * main - Entry to the program
 * Return: Always 0 on success
 */

int main(void)
{
	int bigo;

	for (bigo = 'a'; bigo <= 'z'; bigo++)
	{
		putchar(bigo);
	}
	for (bigo = 'A'; bigo <= 'Z'; bigo++)
	{
		putchar(bigo);
	}
	putchar('\n');

	return (0);
}
