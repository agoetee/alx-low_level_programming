#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of ints
 * @size: size of array
 * @cmp: function to compare ints
 * Return: an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int num1, num2, i;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			num1 = cmp(array[i]);
			if (num1 == 1)
			{
				num2 = i;
				return (num2);
			}
		}
	}
	return (-1);
}
