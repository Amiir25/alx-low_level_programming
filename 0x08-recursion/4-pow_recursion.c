#include <stdio.h>
#include <math.h>
#include "main.h"

int find_power(int, int, int, int);

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: integer variable
 * @y: integer variable
 *
 * Return: result of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int n, i, result;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	n = 1;
	i = x;
	result = find_power(x, y, n, i);

	return (result);
}


/**
 * find_power - calculates the value of x raised to the power of y
 * @base: the base
 * @exp: the exponent
 * @n: the counter
 * @i: integer
 *
 * Return: result of base raised to the power of exp
 */

int find_power(int base, int exp, int n, int i)
{
	if (n == exp)
	{
		return (base);
	}

	base *= i;
	return (find_power(base, exp, n + 1, i));
}
