#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - displays
 * @s: pointer variable
 */

void print_rev(char *s)
{
	int i, j;

	i = strlen(s);
	for (j = i - 1; j >= 0; j--)
	{
		printf("%c", s[j]);
	}
	puts("");
}
