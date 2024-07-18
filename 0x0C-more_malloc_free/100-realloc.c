#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_realloc - reallocate a memory block
 * @ptr: a pointer to the old address
 * @old_size: the size of the old address
 * @new_size: the size of the new address
 *
 * Return: a pointer to the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (old_size == new_size)
	{
		return (ptr);
	}

	ptr = realloc(ptr, old_size + new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	free(ptr);
	return (ptr);
}
