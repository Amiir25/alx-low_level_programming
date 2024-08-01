#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints elements of structured data
 * @h: a pointer a structured data
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}

	return (count);
}
