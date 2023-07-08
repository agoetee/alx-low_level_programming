#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry to the program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i = 0;
	unsigned int m, sum = 0;
	char *c;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			c = argv[i];
			for (m = 0; m < strlen(c); m++)
			{
				if (!isdigit(c[m]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(c);
		}
		printf("%d\n", sum);

	}
	else
	{
		printf("0\n");
	}
	return (0);
}
