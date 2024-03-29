#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Linked list_t list
 *
 * Return: Number of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
