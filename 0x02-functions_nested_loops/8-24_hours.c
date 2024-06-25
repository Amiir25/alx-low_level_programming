#include "main.h"

/**
 * jack_bauer - Prints 24:00 hours
 *
 * Return: void
 */

void jack_bauer(void)
{
	int i;

	for (i = 0; i <= 23; i++)
	{
		int j;

		for (j = 0; j <= 59; j++)
		{
			_putchar('0' + i / 10);
			_putchar('0' + i % 10);
			_putchar(':');
			_putchar('0' + j / 10);
			_putchar('0' + j % 10);
			_putchar('\n')
		}
	}
	_putchar('\n');
}
