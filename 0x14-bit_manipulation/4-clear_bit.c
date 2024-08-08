#include <stdio.h>
#include "main.h"

/**
 * clear_bit - changes a bit at a given index to 0
 * @n: a pointer to the number
 * @index: the index of the bit to changed
 *
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(*n) * 8)
	{
		return (-1);
	}

	*n &= ~(1UL << index);

	return (1);
}
