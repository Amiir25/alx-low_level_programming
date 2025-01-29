#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted list of array of
 * integers using the Interpolation Search Algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index of the 'value' for success, -1 otherwise
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t position, low, high;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;
	while (low <= high)
	{
		position = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));

		printf("Value checked array[%ld] = [%d]\n", position, array[position]);
		if (array[position] == value)
			return (position);
		else if (array[position] < value)
			low = position + 1;
		else
			high = position - 1;
	}

	return (-1);
}
