#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - prints a name
 * @name: argument
 * @f: function pointer
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		(*f)(name);
}
