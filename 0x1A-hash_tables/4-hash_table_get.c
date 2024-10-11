#include "hash_tables.h"

/**
 * hash_table_get - Retrives an element of hash table
 * @ht: The hash table
 * @key: The key to be retrieved
 *
 * Return: The value associated with the key, or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);

		node = node->next;
	}

	return (NULL);
}
