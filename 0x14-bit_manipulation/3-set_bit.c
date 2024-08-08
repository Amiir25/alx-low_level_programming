#include <stdio.h>
#include "main.h"

/**
 * set_bit - changes a bit at a given index to 1
 * @n: a pointer to the number
 * @index: the index of the bit to changed
 *
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n |= (1UL << index);

	return (1);
}
