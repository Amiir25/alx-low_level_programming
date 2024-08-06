#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - finds the node at a given index
 * @head: the pointer to the first node
 * @index: the given index
 *
 * Return: a pointer to the given node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int count;

	if (head == NULL)
	{
		return (NULL);
	}

	count = 0;
	ptr = head;
	while (count != index)
	{
		ptr = ptr->next;
		count++;
	}

	return (ptr);
}
