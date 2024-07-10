#include <stdio.h>
#include "main.h"

/**
 * factorial - calculates the factorial of a given number
 * @n: the integer to be calculated
 *
 * Return: factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
