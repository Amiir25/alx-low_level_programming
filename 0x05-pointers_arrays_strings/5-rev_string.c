#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * rev_string - displays
 * @s: pointer variable
 */

void rev_string(char *s)
{
	int start, end, length;
	char hold;

	start = 0;
	length = strlen(s);
	end = length - 1;
	while (start < end)
	{
		hold = s[start];
		s[start] = s[end];
		s[end] = hold;

		start++;
		end--;
	}
}
