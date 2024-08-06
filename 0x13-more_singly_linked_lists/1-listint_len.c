#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - calculates number of nodes in a list
 * @h: pointers to the list
 *
 * Return: the number of nodes in the list
 */

size_t listint_len(const listint_t *h)
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
