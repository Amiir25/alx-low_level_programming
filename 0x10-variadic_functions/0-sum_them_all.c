#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add all ita parameters
 * @n: the number of parameters
 *
 * Return: the sum of its parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list list;

	va_start(list, n);

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);

	return (sum);
}
