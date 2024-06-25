#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Return: void
 */

void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
