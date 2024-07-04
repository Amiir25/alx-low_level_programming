#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - copy
 * @s1: pointer variable
 * @s2: pointer variable
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, result;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}

		else
		{
			result = 0;
		}
	}

	return (result);
}
