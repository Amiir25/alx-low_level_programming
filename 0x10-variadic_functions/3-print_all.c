#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - print ita parameters
 * @format: parameters with different format
 *
 * Return: Nothing
 */

void print_all(const char * const format, ...)
{
	unsigned int i;
	char *str;
	char *separate;
	va_list list;

	va_start(list, format);
	i = 0;
	separate = "";

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separate, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", separate, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", separate, va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str)
				{
					str = "(nil)";
				}
				printf("%s%s", separate, str);
				break;
			default:
				i++;
				continue;
		}
		separate = ", ";
		i++;
	}
	va_end(list);
	printf("\n");
}
