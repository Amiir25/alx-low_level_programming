#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Finds a node at a given index
 * @head: A pointer to the first node
 * @index: The index of the wanted node
 *
 * Return: The value at the given index
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;
	while (head != NULL)
	{
		if (count == index)
			return (head);

		head = head->next;
		count++;
	}

	return (NULL);
}
