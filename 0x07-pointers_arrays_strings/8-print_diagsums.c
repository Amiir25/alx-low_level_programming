#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of diagonal elements
 * @a: a two dimetional array
 * @size: the size of the array
 *
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i][i];
	}

	sum2 = 0;
	for (j = size; j >= 0; j--)
	{
		sum2 += a[j][j];
	}
	printf("%d, %d\n", sum1, sum2);
}
