#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *ptr;
	int i;

	if (ht == NULL)
		printf("{}");

	i = 0;
	while (ht->array[i] != NULL)
	{
		ptr = ht->array[i];
		while (ptr != NULL)
		{
			printf("{%s: %s}", ptr->key, ptr->value);
			ptr = ptr->next;

			if (ptr != NULL)
				printf(", ");
		}

		i++;
	}

	printf("\n");
}
