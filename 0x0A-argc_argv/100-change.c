#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry to the program
 * @argc: argument count
 * @argv: argument vector
 * Return: the change
 */
int main(int argc, char *argv[])
{
	int cents, coins[] = {25, 10, 5, 2, 1};
	int i = 0, count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		while (i < 5)
		{
			while (cents >= coins[i])
			{
				cents -= coins[i];
				count++;
			}
			i++;
		}
		printf("%d\n", count);
	}
	return (0);
}
