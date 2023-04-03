#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: 1 on success
 */

int main(void)
{
	listint_t *current;
	listint_t *head;

	head = NULL;
	add_nodeint(&head, 0);
	add_nodeint(&head, 1);
	add_nodeint(&head, 2);
	add_nodeint(&head, 3);
	add_nodeint(&head, 4);
	add_nodeint(&head, 98);
	add_nodeint(&head, 402);
	add_nodeint(&head, 1024);
	print_listint(head);

	/*free memory*/

	current = head;
	while (current != NULL)
	{
		struct listint_s *next = current->next;

		free(current);
		current = next;
	}

	return (0);
}
