#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees list_t list
 * @head: A pointer to list_t list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
