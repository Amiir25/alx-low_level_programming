#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a list
 * @head: points to a list
 *
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr1, *ptr2;

	ptr2 = *head;
	while (ptr2 != NULL)
	{
		ptr1 = ptr2;
		ptr2 = ptr2->next;
		free(ptr1);
	}
	*head = NULL;
}
