#include "lists.h"

/**
 * sum_listint - Returns the sum of nodes in listint_t list
 * @head: A pointer to the head of the listint_t list
 *
 * Return: Sum of nodes in listint_t
 */

int sum_listint(listint_t *head)
{
	int node_sum = 0;

	while (head != NULL)
	{
		node_sum += head->n;

		head = head->next;
	}
	return (node_sum);
}
