#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: 1 on Success
 */

int main(void)
{
	listint_t *current;
	listint_t *head;

	head = NULL;
	add_nodeint_end(&head, 0);
	add_nodeint_end(&head, 1);
	add_nodeint_end(&head, 2);
	add_nodeint_end(&head, 3);
	add_nodeint_end(&head, 4);
	add_nodeint_end(&head, 98);
	add_nodeint_end(&head, 402);
	add_nodeint_end(&head, 1024);
	print_listint(head);

	/*Free memory*/
	current = head;
	while (current != NULL)
	{
		struct listint_s *next = current->next;

		free(current);
		current = next;
	}
	return (0);
}
