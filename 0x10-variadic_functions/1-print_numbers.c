#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - print its parameters
 * @separator: a string parameter
 * @n: number of integer parameters
 *
 * Return: Nothing
 */

void print_numbers(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
