#include <stdlib.h>
#include "main.h"

/**
 * print_numbers - prints
 *
 * Return: 0
 */

void print_numbers(void)
{
	int i;

	i = 0;
	do {
		_putchar('0' + i);
		i++;
	} while (i < 10);

	_putchar('\n');
}
