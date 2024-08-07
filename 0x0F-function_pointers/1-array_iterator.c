#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - iterate through array
 * @array: a pointer to the array
 * @size: the size of the array
 * @action: the funcion to be called
 *
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
