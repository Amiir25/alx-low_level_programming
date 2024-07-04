#include "main.h"

/**
 * print_number - prints
 * @n: integer variable
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');

		if (n == -2147483648)
		{
			_putchar('2');
			n = 147483648;
		}

		else
		{
			n = -n;
		}
	}

	if (n / 10)
	{
		print_number(n / 10);
	}

	_putchar('0' + n % 10);
}
