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
	int i;
	char *hold;

	if ((hold = strchr(src, '\n')) != NULL)
	{
		*hold = '\0';
	}

	return (strncat(dest, src, n));
}
