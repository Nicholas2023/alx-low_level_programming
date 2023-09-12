#include <stdio.h>
#include <stddef.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted
 * list of integers using Jump search.
 *
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where
 * value is located, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size), i;
	listint_t *current = list, *prev = NULL;

	if (list == NULL || size == 0)
		return (NULL);

	/* Jump through the list */
	while (current && current->n < value)
	{
		prev = current;
		for (i = 0; current && i < step; i++)
		{
			current = current->next;
		}
		if (current)
			printf("Value checked at index [%lu] = [%d]\n",
					current->index, current->n);
	}

	/* Linear search within the current block */
	while (prev && prev->index < size && prev->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		prev = prev->next;
	}

	/* Check if the value was found */
	if (prev && prev->n == value)
		return (prev);

	return (NULL);
}
