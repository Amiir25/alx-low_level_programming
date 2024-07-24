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

	if (size <= 0)
	{
		return (-1);
	}

	if (array == NULL || cmp != NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
