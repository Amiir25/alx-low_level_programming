#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Calculates the number of elements
 * @h: A doubly linked list
 *
 * Return: The number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
