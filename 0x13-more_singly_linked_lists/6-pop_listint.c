#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the first node of a list
 * @head: the address of the pointer to the first node
 *
 * Return: the data of the first node
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int data;

	ptr = *head;
	data = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	ptr = NULL;
	return (data);
}
