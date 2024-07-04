#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *leet - changes
 * @s: pointer variable
 *
 * Return: char
 */

char *leet(char *s)
{
	int i;
	char var[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		int j;

		for (j = 0; var[j] != '\0'; j++)
		{
			if (s[i] == var[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}

	return (s);
}
