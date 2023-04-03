#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of listint_t list
 * @h: A pointer to the head node of listint_t list
 *
 * Return: The number of nodes to be printed
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_num = 0;

	while (h != NULL)
	{
		nodes_num++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes_num);
}
