#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocate memmory address dynamically
 * @b: the number of bytes of the memory address
 *
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	int *address;

	address = malloc(b);
	if (address == NULL)
	{
		exit(98);
	}

	return (address);
}
