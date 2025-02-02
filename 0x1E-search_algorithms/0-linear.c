#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 * the Linear Search Algorithms
 * @array: A a pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search
 *
 * Return: The index of the 'value' in the array for success, -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
