#include "main.h"

/**
 * print_diagonal - prints
 * @n: integer variable
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			_putchar('\\');
		}
		else
		{
			int j;

			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
		}
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
