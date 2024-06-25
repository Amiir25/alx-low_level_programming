#include "main.h"

/**
 * times_table - Prints Time Table
 *
 * Return: void
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;
		int zero = 0;
		int num = i;

		_putchar('0' + zero);
		_putchar(',');
		_putchar(' ');

		for (j = 1; j <= 9; j++)
		{
			_putchar('0' + num);
			_putchar(',');
			_putchar(' ');
			num += i;
		}
		_putchar('\n');
	}
}
