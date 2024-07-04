#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates
 * @dest: pointer variable
 * @src: pointer variable
 * @n: integer variable
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	char *hold;

	hold = strchr(src, '\n');
	if (hold != NULL)
	{
		*hold = '\0';
	}

	return (strncat(dest, src, n));
}
