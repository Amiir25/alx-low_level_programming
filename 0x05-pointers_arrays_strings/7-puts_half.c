#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - displays
 * @str: pointer variable
 */

void puts_half(char *str)
{
	int i, start;
	int len = strlen(str);

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}

	for (i = start; i < len; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
