#include <string.h>
#include "lists.h"

/**
 * add_node - Add a new node at the beginning of the list_t
 * @head: A pointer the head of the list_t list
 * @str: String to be added to list_t list
 *
 * Return: NULL on error and a pointer to
 * the newly added string
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *dup_str;
	int len;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;

	new->str = dup_str;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}

