#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates
 * @dest: pointer variable
 * @src: pointer variable
 * @n: integer variable
 *
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}
