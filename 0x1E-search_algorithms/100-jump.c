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
	size_t step, first, last;

	if (array == NULL)
		return (-1);

	step = sqrt(size);
	first = 0;
	last = step;
	while (last < size)
	{
		printf("Value checked array[%ld] = [%d]\n", first, array[first]);
		if ((int)last >= value)
		{
			size_t i;

			printf("Value found between indexes [%ld] and [%ld]\n", first, last);
			for (i = first; i <= last; i++)
			{
				printf("Value checked array[%ld] = [%d]\n", i, array[i]);
				if (array[i] == value)
				{
					return (i);
				}
			}
		}

		if (last == size - 1)
		{
			printf("Value checked array[%ld] = [%d]\n", last, array[last]);
			break;
		}

		if ((int)last < value)
		{
			first = last;
			last += step;
			if (last >= size)
				last = size - 1;
		}
	}

	return (-1);
}
