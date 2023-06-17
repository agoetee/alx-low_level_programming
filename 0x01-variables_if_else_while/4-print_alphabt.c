#include <stdio.h>

/**
 * main - the entry to the program
 * Return: Always 0 shows success
 */

int main(void)
{
	int omt;

	for (omt = 'a'; omt <= 'z'; omt++)
	{
		if (omt != 'e' && omt != 'q')
		{
			putchar(omt);
		}
	}
	putchar('\n');

	return (0);
}
