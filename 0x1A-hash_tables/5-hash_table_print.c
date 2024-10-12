#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: The hash table
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	unsigned long int i;
	int first;

	if (ht == NULL)
		return;

	printf("{");

	first = 1;
	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			if (!first)
				printf(", ");

			printf("'%s': '%s'", ptr->key, ptr->value);
			first = 0;
			ptr = ptr->next;
		}
	}

	printf("}\n");
}
