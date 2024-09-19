#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index
 * @h: A pointer to the pointer at the first node
 * @idx: The given index
 * @n: The new data for the new node
 *
 * Return: The address of the new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *new_node;
	dlistint_t *current;

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	current = *h;
	count = 0;
	new_node->n = n;
	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL)
	{
		if (current == NULL && count == idx - 1)
			return (add_dnodeint_end(h, n));
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	new_node->prev = current;
	current->next = new_node;
	if (current->next != NULL)
		current->next->prev = new_node;

	return (new_node);
}
