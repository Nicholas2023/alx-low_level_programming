#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of list_t list
 * @head: A pointer to the head node of listint_t
 * @index: The node's index to be printed
 *
 * Return: The node to be returned an printed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_ind;

	for (node_ind = 0; node_ind < index; node_ind++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
