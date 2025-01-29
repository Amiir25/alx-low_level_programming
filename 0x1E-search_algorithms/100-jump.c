#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted list of array of
 * integers using the Jump Search Algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index of the 'value' for success, -1 otherwise
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, first, last, i;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	first = 0;
	last = 0;

	/* Finding the block where the value may be present */
	while (last < size && array[last] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", last, array[last]);
		first = last;
		last += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", first, last);

	/* Ensure last index does not go beyond the array */
	if (last >= size)
		last = size - 1;

	/* Linear search within the identified block */
	for (i = first; i <= last && i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
