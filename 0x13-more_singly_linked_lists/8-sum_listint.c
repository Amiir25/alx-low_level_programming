#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - calculates the data of nodes in a list
 * @head: a pointer to the first node of a list
 *
 * Return: the sum of the data
 */

int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int sum;

	if (head == NULL)
	{
		return (0);
	}

	ptr = head;
	sum = 0;
	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
