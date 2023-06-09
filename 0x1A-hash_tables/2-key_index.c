#include "hash_tables.h"

/**
 * key_index - Calculate the index for a given key
 * @key: The key for which the index is to be calculated
 * @size: The size of the hash table
 *
 * Return: The calculated index for the given key
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);
	unsigned long int index = hash % size;

	return (index);
}
