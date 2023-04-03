#include "lists.h"

/**
 * pop_listint - Deletes the head node of listint_t
 * @head: A pointer to the head of the linked list
 *
 * Return: Head node's data(n)
 */

int pop_listint(listint_t **head)
{
	listint_t *node1;
	int deleted;

	if (head == NULL)
		return (0);

	node1 = *head;
	deleted = (*head)->n;
	*head = (*head)->next;


	free(node1);
	return (deleted);
}
