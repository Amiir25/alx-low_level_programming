#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * *cap_string - changes lowecase to upppercase
 * @str: pointer variable
 *
 * Return: char
 */

char *cap_string(char *str)
{
	int checker;

	checker = 1;
	while (*str)
	{
		if (checker && islower(*str))
		{
			*str = toupper(*str);
		}

		checker = 0;

		if (*str == ' ' || *str == ',' || *str == ';' ||
		    *str == '.' || *str == '!' || *str == '?' ||
		    *str == '"' || *str == '(' || *str == ')' ||
		    *str == '{' || *str == '}' || *str == '\n' ||
		    *str == '\t')
		{
			checker = 1;
		}
		str++;
	}

	return (str);
}
