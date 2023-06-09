#include "hash_tables.h"
#include <stdio.h>
#include <string.h>


/**
 * create_node - Create a new hash node
 * @key: The key string
 * @value: The value string
 *
 * Return: Pointer to the new node, or NULL on failure
 */

static hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;

	return (new_node);
}

/**
 * update_value - Updates the value of an existing node
 * @node: Pointer to the node
 * @value: The new value
 *
 * Return: 1 on success, 0 on failure
 */

static int update_value(hash_node_t *node, const char *value)
{
	char *new_value = strdup(value);

	if (new_value == NULL)
		return (0);

	free(node->value);
	node->value = new_value;

	return (1);
}


/**
 * hash_table_set - Adds or updates a key-value pair in a hash table.
 * @ht: Pointer to the hash table structure
 * @key: The key to be added or updated
 * @value: The value to be associated with the key
 *
 * Return: 1 if the operstion is successful, or 0 if there's an error
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);

	/* Check if key already exists, update value */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (update_value(temp, value));
		temp = temp->next;
	}

	/* Create a new node */
	new_node = create_node(key, value);
	if (new_node == NULL)
		return (0);

	/* Add the new node to the beginning of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
