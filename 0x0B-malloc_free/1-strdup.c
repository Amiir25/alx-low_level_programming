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
	char *str_dup;
	size_t str_len;

	if (str == NULL)
	{
		return (NULL);
	}

	str_len = strlen(str);
	str_dup = (char *)malloc(str_len * sizeof(char));
	str_dup = strdup(str);

	return (str_dup);
}
