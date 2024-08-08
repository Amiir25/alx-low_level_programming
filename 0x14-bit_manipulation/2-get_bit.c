#include <stdio.h>
#include "main.h"

/**
 * get_bit - prints the bit at a given index
 * @n: the number in decimal
 * @index: the index of the bit to be printed
 *
 * Return: the value of the bit at the given index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}

	bit = n >> index;
	return (bit & 1);
}
