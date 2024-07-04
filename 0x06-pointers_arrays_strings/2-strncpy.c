#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncpy - copy
 * @dest: pointer variable
 * @src: pointer variable
 * @n: integer variable
 *
 * Return: char
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *hold;

	hold = strchr(src, '\n');
	if (hold != NULL)
	{
		*hold = '\0';
	}

	strncpy(dest, src, n);

	return (dest);
}
