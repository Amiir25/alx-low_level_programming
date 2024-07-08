#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_memcpy - set memory with a value
 * @dest: the memory address
 * @src: the character value
 * @n: the amount of the value
 *
 * Return: the memory address after memset
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
