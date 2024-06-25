#include <stdio.h>
#include "main.h"

/**
 * print_sign - Checks if a number is positive negative or zero.
 * @n: The character to be checked
 *
 * Return: int
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
