#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * reverse_array - copy
 * @a: pointer variable
 * @n: number of elements to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, hold;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		hold = a[i];
		a[i] = a[j];
		a[j] = hold;

		i++;
		j--;
	}
}
