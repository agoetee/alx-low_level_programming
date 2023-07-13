#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a character
 */
char *argstostr(int ac, char **av)
{
	int i;
	char *argt;

	if (ac == 0 || av == NULL)
		return (NULL);
	argt = malloc(sizeof(*argt) * ac);
	if (argt != NULL)
	{
		for (i = 0; i < ac; i++)
		{
			printf("%s\n", av[i]);
		}
	}
	else
		return (NULL);
	return (argt);


}
