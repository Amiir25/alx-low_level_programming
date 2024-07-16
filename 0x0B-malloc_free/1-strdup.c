#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - duplicate a string
 * @str: the string
 *
 * Return: the pointe that contains the duplicated string
 */

char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	return (strdup(str));
}
