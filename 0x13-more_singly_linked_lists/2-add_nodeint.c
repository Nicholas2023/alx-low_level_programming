#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a singly linked list (listint_t)
 * @head: A pointer to the head of the listint_t list
 * @n: The value of the new node added to the list
 *
 * Return: The added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;

	*head = add;

	return (add);
}
