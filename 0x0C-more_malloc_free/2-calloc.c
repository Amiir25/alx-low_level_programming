#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * *_calloc - allocate memory for elements of an array
 * @nmemb: number of elements of the array
 * @size: number of bytes to be allocated
 *
 * Return: Nothing
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	size_t length;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	length = (size_t)nmemb * size;
	array = malloc(length);
	if (array == NULL)
	{
		return (NULL);
	}

	memset(array, 0, length);
	return (array);
}
