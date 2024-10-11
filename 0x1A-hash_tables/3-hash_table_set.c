#include "hash_tables.h"

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
	hash_node_t *ptr;
	unsigned long int i;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	ptr = ht->array[i];

	/* If the key exists */
	while (ptr != NULL)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);

			if (ptr->value == NULL)
				return (0);

			return (1);
		}

		ptr = ptr->next;
	}

	/* un-existing key */
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	/* putting the new node at front */
	new_node->next = ht->array[i];
	ht->array[i] = new_node;

	return (1);
}

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
		return (NULL);

	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}

	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}

	node->next = NULL;
	return (node);
}
