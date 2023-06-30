#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: the array
 * @n: the number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp, i;
	int end = n - 1;

	i = 0;
	while (i < end)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
		n--;
	}


}
