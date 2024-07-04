#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts2 - displays
 * @str: pointer variable
 */

void puts2(char *str)
{
	int length, i;

	length = strlen(str);
	for (i = 0; i <= length - 1; i++)
	{
		if (i % 2 == 0)
		{
			printf("%c", str[i]);
		}
	}
	puts("");
}
