#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strpbrk - searches for a char in a string
 * @s: the string
 * @accept: the stirng of characters to be searched
 *
 * Return: the address of the first character found
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
