#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _print_rev_recursion - printd the reverse of a string
 * @s: string to be reversed
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		puts("");
		return;
	}
/*
	if (*s == '\n')
	{
		return;
	}
*/
	_print_rev_recursion(s + 1);
	putchar(*s);
}
