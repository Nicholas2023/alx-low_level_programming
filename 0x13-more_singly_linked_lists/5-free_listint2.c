#include "lists.h"

/**
 * free_listint2 - free nodes in listint_t list
 * @head: A pointer to the address of the head
 * in listint_t list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	head = NULL;
}
