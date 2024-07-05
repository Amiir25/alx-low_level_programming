#include <stdio.h>
#include "main.h"

/**
 * *rot13 - rotates
 * @s: pointer variable
 *
 * Return: char
 */

char *rot13(char *s)
{
	char *p = s;

	while (*p)
	{
		if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
		{
			if ((*p >= 'A' && *p <= 'M') || (*p >= 'a' && *p <= 'z'))
			{
				*p += 13;
			}
			else
			{
				*p -= 13;
			}
		}

		p++;
	}

	return (s);
}
