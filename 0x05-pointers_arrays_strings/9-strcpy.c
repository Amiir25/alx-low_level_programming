#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strcpy - displays
 * @dest: pointer variable
 * @str: pointer variable
 *
 * Return: char
 */

char *_strcpy(char *dest, char *str)
{
	int i, len;

	len = strlen(str);
	for (i = 0; i <= len; i++)
	{
		strcpy(dest, str);
	}

	return (dest);
}
