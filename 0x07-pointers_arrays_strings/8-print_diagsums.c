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
	int i, j;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", sum1, sum2);
}
