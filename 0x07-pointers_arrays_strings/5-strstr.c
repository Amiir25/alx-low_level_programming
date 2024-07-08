#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * *_strstr - searches for a string in a string
 * @heystack: the string
 * @needle: the stirng to be searched
 *
 * Return: the address of the string found
 */

char *_strstr(char *heystack, char *needle)
{
	return (strstr(heystack, needle));
}
