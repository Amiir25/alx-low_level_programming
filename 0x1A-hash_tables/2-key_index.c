#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: the key value
 * @size: The size of the array
 *
 * Return: The index where the key/value pair is stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash;

	hash = hash_djb2(key);
	return (hash % size);
}
