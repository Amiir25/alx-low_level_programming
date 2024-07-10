#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: string of characters
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		puts("");
		return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
