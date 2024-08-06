#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given index
 * @head: holds the address of the pointer to the first node
 * @idx: the index of the new node
 * @n: the data for the new node
 *
 * Return: a pointer to the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *current_node, *prev_node;
	unsigned int count;

	if (head == NULL)
		return (0);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	count = 0;
	current_node = *head;
	prev_node = NULL;
	while (count != idx)
	{
		prev_node = current_node;
		current_node = current_node->next;
		if (current_node == NULL)
		{
			return (NULL);
		}

		count++;
	}

	if (prev_node == NULL)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else
	{
		prev_node->next = new_node;
		new_node->next = current_node;
	}

	return (new_node);
}
