#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen_recursion - prints the length of a string
 *@s: the string to be counted
 *
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_strlen_recursion(s + 1);

	return (strlen(s));
}
