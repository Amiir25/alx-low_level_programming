#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - displays
 * @s: pointer variable
 */

void print_rev(char *s)
{
	int i, j, k;
	char rev[446];

	i = strlen(s);
	k = 0;
	for (j = i - 1; j >= 0; j--)
	{
		rev[k] = s[j];
		k++;
	}

	printf("%s\n", rev);
}
