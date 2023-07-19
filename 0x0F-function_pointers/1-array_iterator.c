#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes function on each array elemnt
 * @array: array of ints
 * @size: size of array
 * @action: function pointer
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < (int)size; i++)
		{
			action(array[i]);
		}
	}
}
