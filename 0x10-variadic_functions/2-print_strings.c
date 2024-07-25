#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - print its string parameters
 * @separator: a string parameter
 * @n: number of parameters
 *
 * Return: Nothing
 */

void print_strings(const char *separator, unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (str != NULL)
		{
			printf("%s", str);
		}
		else
		{
			printf("(nil)");
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(list);
	printf("\n");
}
