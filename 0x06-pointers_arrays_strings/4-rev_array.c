#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	i = 0;
	while (i < n--)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}


}
