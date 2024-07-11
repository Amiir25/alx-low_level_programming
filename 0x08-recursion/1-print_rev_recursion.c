#include <stdio.h>
#include <string.h>
#include "main.h"

char *rev_string(char *, int, int);

/**
 * _print_rev_recursion - printd the reverse of a string
 * @s: string to be reversed
 *
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	int len;
	char *result;

	len = strlen(s);
	result = rev_string(s, 0, len - 1);
}

/**
 * rev_string - reverse a string
 * @s: string to be reversed
 * @start: index counter
 * @end: index counter
 *
 * Return: the reversed string
 */

char *rev_string(char *s, int start, int end)
{
	char hold;

	if (*s == '\0')
	{
		puts("");
		return (s);
	}

	if (start >= end)
	{
		return (s);
	}

	hold = s[start];
	s[start] = s[end];
	s[end] = hold;

	return (rev_string(s, start + 1, end - 1));
}
