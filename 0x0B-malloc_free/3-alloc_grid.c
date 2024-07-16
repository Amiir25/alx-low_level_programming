#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * **alloc_grid - create a memory location for a 2d array
 * @width: the width of the 2d array
 * @height: the height of the 2d array
 *
 * Return: a pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **new_array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	new_array = (int **)malloc(height * sizeof(int *));
	if (new_array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < height)
	{
		new_array[i] = (int *)malloc(width * sizeof(int));
		if (new_array[i] == NULL)
		{
			return (NULL);
		}

		j = 0;
		while (j < width)
		{
			new_array[i][j] = 0;
			j++;
		}
		printf("\n");
		i++;
	}

	return (new_array);
}
