#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - removes a node at a given index
 * @head: holds the address of the pointer to the first node
 * @index: the index of the node to be removed
 *
 * Return: 1 for success, -1 for fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr, *current_node;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	current_node = *head;
	for (i = 0; i < index - 1 && current_node != NULL; i++)
	{
		current_node = current_node->next;
	}

	if (current_node == NULL || current_node->next == NULL)
	{
		return (-1);
	}

	ptr = current_node->next;
	current_node->next = ptr->next;
	free(ptr);
	return (1);
}
