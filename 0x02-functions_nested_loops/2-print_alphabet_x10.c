#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int counter = 1;

	while (counter <= 10)
	{
		char i = 'a';

		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		counter++;

		_putchar('\n');
	}
}
