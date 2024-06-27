#include "main.h"

/**
 * print_triangle - prints
 * @size: integer variable
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int i;

	for (i = 1; i <= size; i++)
	{
		int j, k;

		for (j = size; j > i; j--)
		{
			_putchar(' ');
		}

		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
}
