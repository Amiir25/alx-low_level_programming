#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include "main.h"

/**
 * _atoi - displays
 * @s: pointer variable
 *
 * Return: int
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int started = 0;

	while (*s != '\0')
	{
		if (*s == '-')
		{
			if (started)
				break;
			sign = -sign;
		}
		else if (*s == '+')
		{
			if (started)
				break;
		}
		else if (*s >= '0' && *s <= '9')
		{
			started = 1;
			if (result > (INT_MAX - (*s - '0')) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			result = result * 10 + (*s - '0');
		}

		else if (started)
			break;
		s++;
	}
	return (sign * result);
}

