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
	list_t *ptr;

	count = 0;
	ptr = (list_t *)h;
	while (ptr->next != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	printf("[%u] %s\n", h->len, h->str);
	printf("[%u] %s\n", h->len, h->next->str);

	return (count);
}
