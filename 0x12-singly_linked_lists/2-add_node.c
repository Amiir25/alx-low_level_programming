#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: a pointer to  the pointer to the first element
 * @str: the data for the new node
 *
 * Return: a pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
	int count;
	char *data;
	list_t *ptr;

	data = (char *)str;
	count = 0;
	while (*data)
	{
		count++;
		data++;
	}

	if (head != NULL)
	{
		ptr = malloc(sizeof(list_t));
		if (ptr == NULL)
		{
			return (NULL);
		}

		ptr->str = (char *)str;
		ptr->len = count;
		ptr->next = *head;
		*head = ptr;

		printf("[%u] %s\n", ptr->len, ptr->str);
	}

	return (ptr);
}
