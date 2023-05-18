#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint list
 * @head: Pointer to the head of the doubly linked list
 * @n: Value to be assigned to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Assign values to the new node */
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		/*If the list is empty, make the new node the head */
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		/* Traverse to the last node */
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		/* Update pointers to connect the new node */
		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
