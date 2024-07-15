#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_strdup - duplicate a string
 * @str: the string
 *
 * Return: the pointer to the newly allocated space that contains the duplicated string
 */

char *_strdup(char *str)
{
	char *new_str;

	new_str = strdup(str);
	return (new_str);
}
