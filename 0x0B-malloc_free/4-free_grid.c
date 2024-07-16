#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free the memory location of alloc_grid()
 * @grid: a double pointer
 * @height: the number of height to be freed
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
