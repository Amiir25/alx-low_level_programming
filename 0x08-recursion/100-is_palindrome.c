#include <stdio.h>
#include <string.h>
#include "main.h"

int check_pal(char *, int, int);

/**
 * is_palindrome - checks if a string is palindrome
 * @s: the string
 *
 * Return: 1 for palindrome or 0
 */

int is_palindrome(char *s)
{
	int len, result;

	len = strlen(s);

	result = check_pal(s, 0, len - 1);

	return (result);
}


/**
 * check_pal - checks if a string is palindrome
 * @s: the string
 * @start: the first character
 * @end: the last character
 *
 * Return: 1 for palindrome or 0
 */

int check_pal(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}

	return (check_pal(s, start + 1, end - 1));
}
