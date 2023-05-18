#include "lists.h"

/**
 * dlistint_len - Returns the number in a doubly linked list
 * @h: A pointer to the head of the linked list
 *
 * Return: Number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
