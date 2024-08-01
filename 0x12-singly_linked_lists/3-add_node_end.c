#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: a pointer to the pointer to the list
 * @str: a data for the new node
 *
 * Return: a pointer to the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;


	if (*head == NULL)
	{
		*head = NULL;
	}

	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = new_node;
	}
	return (new_node);
}
