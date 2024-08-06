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
	listint_t *new_node, *current_node;
	unsigned int i;

	if (head == NULL)
		return (0);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node-> = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
