#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @h: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *t, *s;
	size_t nodes = 1;

	if (h == NULL || h->next == NULL)
		return (0);

	t = h->next;
	s = (h->next)->next;

	while (s)
	{
		if (t == s)
		{
			t = h;
			while (t != s)
			{
				nodes++;
				t = t->next;
				s = s->next;
			}

			t = t->next;
			while (t != s)
			{
				nodes++;
				t = t->next;
			}

			return (nodes);
		}

		t = t->next;
		s = (s->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list
 * @head: A pointer to the head of the listint_t
 *
 * Return: The number of nodes in listint_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;

	node = listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (i = 0; i < node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
