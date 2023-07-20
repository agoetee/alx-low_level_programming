#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 * @separator: the seperator
 * @n: number of arguments
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int arr;

	va_start(args, n);
	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			arr = va_arg(args, int);
			printf("%d", arr);
			if (separator != NULL && i != (n - 1))
				printf("%s", separator);
		}
		printf("\n");
		va_end(args);
	}
}
