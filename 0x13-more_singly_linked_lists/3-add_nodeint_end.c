#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: holds the address of the pointer to the first node
 * @n: the data to be assigned to the new node
 *
 * Return: the address of the new node or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr;
	listint_t *current_ptr, *prev_ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;
	current_ptr = *head;
	prev_ptr = NULL;

	while (current_ptr != NULL)
	{
		prev_ptr = current_ptr;
		current_ptr = current_ptr->next;
	}

	if (prev_ptr == NULL)
	{
		*head = ptr;
	}
	else
	{
		prev_ptr->next = ptr;
	}

	return (ptr);

	return (ptr);
}
