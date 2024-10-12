#include "hash_tables.h"

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *ptr;
	hash_node_t *current;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			current = ptr;
			ptr = ptr->next;
			free(current);
		}
	}

	free(ht);
	free(ptr);
}
