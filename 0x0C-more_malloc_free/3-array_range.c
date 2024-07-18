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
	int i, j;
	int *array;

	if (min > max)
	{
		return (NULL);
	}

	array = malloc((max + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	j = min;
	for (i = 0; i < max; i++)
	{
		array[i] = j;
		j++;
	}

	return (array);
}
