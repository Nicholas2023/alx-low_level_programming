#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value
 * is located, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	if (list == NULL)
		return (NULL);

	skiplist_t *express = list, *prev;

	while (express->express)
	{
		prev = express;
		express = express->express;
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		if (express->n >= value)
			break;
	}

	if (express->n >= value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				prev->index, express->index);
		express = prev;
	}

	while (express)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		if (express->n == value)
			return (express);
		express = express->next;
	}

	return (NULL);
}
