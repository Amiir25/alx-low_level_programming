#include "main.h"

/**
 * _isupper - checks if a letter is in uppercase
 * @c: character variable
 *
 * Return: 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
