#include "main.h"

/**
 * _isalpha - Checks if a character is a lowercase letter
 * @c: The character to be checked
 *
 * Return: int
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
