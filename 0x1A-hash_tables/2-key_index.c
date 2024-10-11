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
	unsigned long int i;
	int j;

	i = 0;
	for (j = 0; key[j] != '\0'; j++)
	{
		i += key[j];
	}

	return (i % size);
}
