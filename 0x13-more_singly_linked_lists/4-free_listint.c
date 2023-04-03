#include "lists.h"

/**
 * free_listint - Frees listint_t list
 * @head: A pointer to the head of the listint_t list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
