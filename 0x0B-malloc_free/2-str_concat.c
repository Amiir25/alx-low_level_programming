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
	int i;
	char *new_cat;
	char *str_cat;

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

	str_cat = strcat(s1, s2);
	for (i = 0; str_cat[i] != '\0'; i++)
	{
		new_cat[i] = str_cat[i];
	}

	return (new_cat);
}
