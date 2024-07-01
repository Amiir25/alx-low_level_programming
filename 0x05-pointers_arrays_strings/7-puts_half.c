#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - displays
 * @str: pointer variable
 */

void puts_half(char *str)
{
	int i, len, half;

	len = strlen(str);
	half = len;
	if (half % 2 != 0)
	{
		half--;
	}

	for (i = half / 2; i <= len - 1; i++)
	{
		printf("%c", str[i]);
	}
	puts("");
}
