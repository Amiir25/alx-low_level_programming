#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: a character string og binary number
 *
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	size_t i;
	unsigned int result;

	if (!b)
	{
		return (0);
	}

	result = 0;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			result <<= 1;
		}
		else if (b[i] == '1')
		{
			result <<= 1;
			result += 1;
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
