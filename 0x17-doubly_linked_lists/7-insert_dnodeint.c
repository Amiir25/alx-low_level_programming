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
	dlistint_t *left;
	dlistint_t *right;

	left = *h;
	count = 0;
	while (left->next != NULL)
	{
		if (count == idx)
			break;

		left = left->next;
		count++;
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || count == 0)
		return (NULL);

	right = left;
	left = left->prev;
	left->next = new_node;
	new_node->prev = left;
	new_node->next = right;
	new_node->n = n;
	right->prev = new_node;

	return (new_node);
}
