#include "lists.h"

/**
 * listint_len - Returns the number of elements in a S.linked list
 * @h: A pointer to the head of a singly linked list
 *
 * Return: The number of elements in the listint_t list
 */


size_t listint_len(const listint_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		nodes_count++;
		h = h->next;
	}
	return (nodes_count);
}
