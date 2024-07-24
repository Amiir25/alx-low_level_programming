#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - compare values
 * @array: a pointer to an array
 * @size: the size of the pointer
 * @cmp: a pointer to a function
 *
 * Return: the index of the matched array element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}

	return (-11);
}
