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

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	new_cat = (char *)malloc(sizeof(s1) + sizeof(s2));

	if (new_cat == NULL)
	{
		return (NULL);
	}

	new_cat = strcat(s1, s2);

	return (new_cat);
}
