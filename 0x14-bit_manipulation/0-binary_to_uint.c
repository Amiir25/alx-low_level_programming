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
	int i;
	unsigned int result;
	size_t len;

	if (b == NULL)
	{
		return (0);
	}

	result = 0;
	len = strlen(b);
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			result <<= 1;
			if (b[i] == '1')
			{
				result += 1;
			}
		}
		else
		{
			return (0);
		}
	}

	return (result);
}
