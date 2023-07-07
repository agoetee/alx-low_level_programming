#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry to the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success. 1 for error
 */

int main(int argc, char *argv[])
{
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}


	mult = (atoi(argv[1]) * atoi(argv[2]));
	printf("%d\n", mult);

	return (0);
}
