#include "hash_tables.h"

/**
 * create_node - Creates a new node (element)
 * @key: The key of the new element
 * @value: The value associated to the key
 *
 * Return: A pointer tot he new node
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);

	node->key = strdup(key);
	node->value = strdup(value);
	return (node);
}

/**
 * hash_table_set - Adds a new element to the hash table
 * @ht: The hash table
 * @key: The key of the new element
 * @value: The value associated to the key
 *
 * Return: 1 for success, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int i;

	new_node = create_node(key, value);
	i = key_index(key, ht->size);

	/* If the key exists */
	if (strcmp(ht->array[i]->key, key) == 0)
		ht->array[i]->value = strdup(value);

	/* collision */
	if (ht->array[i] != NULL)
	{
		new_node = ht->array[i];
		ht->array[i] = new_node;
	}

	/* empty index */
	else
		ht->array[i] = new_node;

	return (1);
}
