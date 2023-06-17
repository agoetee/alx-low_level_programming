#include <stdio.h>
/**
 * main - the entry to the program
 * Return: always zero
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
