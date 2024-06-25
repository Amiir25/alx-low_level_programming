#include "main.h"

/**
 * _islower - Accepts variable c
 *
 * Return: int
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
