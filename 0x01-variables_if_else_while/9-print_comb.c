#include <stdio.h>

/**
 * main - the entry into the program
 * Return: Always zero exit status
 */

int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
		}
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
