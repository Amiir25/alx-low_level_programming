#include <stdio.h>
#include "main.h"

/**
 * print_binary - converts decimal to binary
 * @n: the decimal to be converted
 *
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	int i, bit;
	unsigned long int one;

	bit = 0;
	i = sizeof(n) * 8 - 1;
	for (; i >= 0; i--)
	{
		one = (n >> i) & 1;
		if (one)
		{
			bit = 1;
		}

		if (bit || i == 0)
		{
			_putchar(one ? '1' : '0');
		}
	}
}
