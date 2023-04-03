#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * main - check the code
 *
 * Return: 1 on success
 */

int main(void)
{
	listint_t *head, *node;

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
	node = get_nodeint_at_index(head, 5);
	printf("%d\n", node->n);
	print_listint(head);
	free_listint2(&head);
	return (0);
}
