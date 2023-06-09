#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a new table
 * with specified size
 * @size: The size of the hash table to create
 *
 * Return: A pointer to the newly createdhash table
 *	NULL if malloc fails or size is 0
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	/* Initialize all array elements to NULL */
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
