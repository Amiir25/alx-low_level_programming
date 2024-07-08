#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - calculate the length a substring
 * @s: the string
 * @accept: the substirng
 *
 * Return: the address of the charcater
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
