#include "search_algos.h"

/**
 * binary_search - Searches for a value in an array of integers using
 * the Binary Search Algorithms
 * @array: A a pointer to the first element of the array
 * @size: The number of elements in the array
 * @value: The value to search
 *
 * Return: The index of the 'value' in the array for success, -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{
	int first, last;

	if (array == NULL)
		return (-1);

	first = 0;
	last = size - 1;
	while (first <= last)
	{
		int i;
		size_t mid;

		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			printf("%d", array[i]);
			if (i != last)
				printf(", ");
		}
		printf("\n");

		mid = (first + last) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			first = mid + 1;
		else
			last = mid - 1;
	}

	return (-1);
}
