#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints the data of nodes of a list
 * @h: pointers to the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	int count;

	if (h == NULL)
	{
		printf("%s\n", "List is empty!");
		return (1);
	}

	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
