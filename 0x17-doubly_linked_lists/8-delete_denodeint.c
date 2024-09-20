#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 * @head: A pointer to the pointer at the first node
 * @index: The given index
 *
 * Return: 1 for success, -1 for fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	dlistint_t *temp;
	unsigned int count;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = *head->next;
		(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	ptr = *head;
	count = 0;
	while (ptr != NULL)
	{
		if (count == index)
			break;
		ptr = ptr->next;
		count++;
	}
	if (count == 0)
		return (-1);

	temp = ptr;
	ptr = ptr->prev;

	if (ptr == NULL)
	{
		ptr->next = NULL;
		free(temp);
		return (1);
	}

	ptr->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
	return (1);
}
