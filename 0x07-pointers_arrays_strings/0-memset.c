#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_memset - set memory with a value
 * @s: the memory address
 * @b: the character value
 * @n: the amount of the value
 *
 * Return: the memory address after memset
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
