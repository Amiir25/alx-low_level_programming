#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - calculates the number of elements in a linked list
 * @h: a pointer to a linked list
 *
 * Return: the number of elements in a linked list
 */

size_t list_len(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
