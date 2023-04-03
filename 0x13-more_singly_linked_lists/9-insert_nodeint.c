#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a given node at a given position
 * in the listint_t list
 * @head: A pointer to the address of the head node in listint_t
 * @idx: Position of insertion within listint_t
 * @n: The value pf the node to be inserted in listint_t
 *
 * Return: Address of the new node
 * or NULL if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add;
	listint_t *dup = *head;
	unsigned int i;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;

	if (idx == 0)
	{
		add->next = dup;
		*head = add;
		return (add);
	}

	for (i = 1; i < idx; i++)
	{
		if (dup == NULL || dup->next == NULL)
			return (NULL);

		dup = dup->next;
	}
	add->next = dup->next;
	dup->next = add;

	return (add);
}
