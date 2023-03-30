#include <string.h>
#include "lists.h"

/**
 * add_node_end - Add a new node at the end of list_t list
 * @head: A pointer to the head of the list_t
 * @str: The string to be added at the end of the list_t
 *
 * Return: NULL for an error, and the address othe new
 * string if successfull
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *new, *last;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;
	}

	return (*head);
}
