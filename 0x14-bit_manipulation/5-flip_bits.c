#include <stdio.h>
#include "main.h"

/**
 * flip_bits - calculates the number of bits needed to flip numbers
 * @n: a long integer
 * @m: a long integer
 *
 * Return: the number bits neede to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result;
	unsigned int bit;

	result = n ^ m;
	bit = 0;

	while (result)
	{
		bit += result & 1;
		result >>= 1;
	}

	return (bit);
}
