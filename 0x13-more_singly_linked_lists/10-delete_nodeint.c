#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes nodes of nth index
 * in the listint_t list
 * @head: A pointer ton the address of the head node of the listint_t
 * @index: The node index to be deleted
 *
 * Return: 1 on success and -1 if otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *dup = *head;
	unsigned int i;

	if (dup == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dup);
		return (1);
	}

	for (i = 1; i < index; i++)
	{
		if (dup->next == NULL)
			return (-1);
		dup = dup->next;
	}

	current = dup->next;
	dup->next = current->next;
	free(current);
	return (1);
}
