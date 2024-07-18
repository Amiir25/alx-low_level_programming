#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *string_nconcat - allocate memory for concated strings
 * @s1: the first string
 * @s2: the second string
 * @n: the number of chars to be concated from the 2nd string
 *
 * Return: a pointer to the concated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int length;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n > strlen(s2))
	{
		n = strlen(s2);
	}

	length = strlen(s1) + 1 +  n;
	concat = (char *)malloc(length);
	if (concat == NULL)
	{
		return (NULL);
	}

	strcpy(concat, s1);
	strncat(concat, s2, n);

	return (concat);
}
