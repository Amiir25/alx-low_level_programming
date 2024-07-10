#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * _pow_recursion - calculates the value of x raised to the power of y
 * @x: integer variable
 * @y: integer variable
 *
 * Return: result of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	double result;

	if (y < 0)
	{
		return (-1);
	}

	else
	{
		result = pow(x, y);
		return (result);
	}
}
