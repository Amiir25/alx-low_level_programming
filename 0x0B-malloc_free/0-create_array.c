#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - create an array of specific character
 * @size: the size of the array
 * @c: the charcater
 *
 * Return: the array of the specific chacter or NULL
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *one_char = (char *)malloc(size);

	if (size == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		one_char[i] = c;
	}

	return (one_char);
}
