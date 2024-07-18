#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range - allocate memeory for int array
 * @min: the minimum value of the array
 * @max: the maximum value of the array
 *
 * Return: pointer to the allocated address
 */

int *array_range(int min, int max)
{
	int i, elements;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	elements = (max - min) + 1;
	array = malloc(elements * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < elements; i++)
	{
		array[i] = min + i;
	}

	return (array);
}
