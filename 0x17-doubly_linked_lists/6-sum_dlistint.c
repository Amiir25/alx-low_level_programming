#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - Calculates the sum of a linked list
 * @head: A pointer to the first node
 *
 * Return: The sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
