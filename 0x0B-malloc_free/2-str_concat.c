#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *str_concat - concatenate two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: the pointer that to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *new_cat;
	size_t str_len;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	str_len = strlen(s1) + strlen(s2) + 1;
	new_cat = (char *)malloc(str_len * sizeof(char));
	if (new_cat == NULL)
	{
		return (NULL);
	}

	strcpy(new_cat, s1);
	strcat(new_cat, s2);
	return (new_cat);
}
