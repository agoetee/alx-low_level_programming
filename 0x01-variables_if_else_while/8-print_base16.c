#include <stdio.h>
/**
 * main - entry into the program
 * Return: always zero on success
 */

int main(void)
{
	int hek;

	for (hek = '0'; hek <= '9'; hek++)
	{
		putchar(hek);
	}
	for (hek = 'a'; hek <= 'f'; hek++)
	{
		putchar(hek);
	}
	putchar('\n');

	return (0);
}
