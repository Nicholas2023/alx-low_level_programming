#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_get - Retrieves the value with a given
 * key in a hash table.
 * @ht: Pointer to the hash table structure
 * @key: The key to retrieve the value for
 *
 * Return: The value associated with the given key,
 * or NULL if the key is not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* Check for invalid inputs */
	if (ht == NULL || key == NULL)
		return (NULL);

	/* Calculate the index using the key */
	index = key_index((const unsigned char *)key, ht->size);

	/* Traverse the linked list at the index */
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		node = node->next;
	}

	return (NULL);
}
