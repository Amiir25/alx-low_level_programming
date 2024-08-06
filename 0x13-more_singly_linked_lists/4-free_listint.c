#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: points to a list
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
