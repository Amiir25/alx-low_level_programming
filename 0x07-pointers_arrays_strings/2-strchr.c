#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strchr - locate a character
 * @s: the address of a string
 * @c: the chacter
 *
 * Return: the address of the charcater
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
