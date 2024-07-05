#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * *string_toupper - changes lowecase to upppercase
 * @str: pointer variable
 *
 * Return: char
 */

char *string_toupper(char *str)
{
	char *hold;

	hold = strchr(str, '\n');
	if (hold != NULL)
	{
		*hold = '\0';
	}

	while (*str)
	{
		if (islower(*str))
		{
			*str = toupper(*str);
		}

		str++;
	}

	return (str);
}
