#include <stdio.h>
#include "main.h"

/**
 * print_number - prints integer
 * @n: integer var
 *
 * Return: void
 */

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}

	else
	{
		i = n;
	}

	if (i / 10)
	{
		print_number(i / 10);
	}

	_putchar('0' + i % 10);
}
