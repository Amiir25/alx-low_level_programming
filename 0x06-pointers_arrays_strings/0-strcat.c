#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcat - concatenates
 * @dest: pointer variable
 * @src: pointer variable
 *
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int i, j;
	char *hold;

	hold = strchr(src, '\n');
	if (hold != NULL)
	{
		*hold = '\0';
	}

	j = strlen(dest);
	for (i = 0; i < strlen(src); i++)
	{
		dest[j] = src[i];
		j++;
	}

	return (dest);
}
