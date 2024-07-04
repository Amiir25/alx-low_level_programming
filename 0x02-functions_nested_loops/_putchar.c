#include <stdio.h>
#include "main.h"

void _putchar(char c)
{
	putchar(c);
}

void print_alphabet(void)
{
	char i;

	while (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
