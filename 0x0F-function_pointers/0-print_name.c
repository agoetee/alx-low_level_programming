#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name
 * @name: argument
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return (NULL);

	(*f)(name);
}
