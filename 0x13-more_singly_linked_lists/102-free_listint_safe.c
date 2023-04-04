#include "lists.h"


/**
 * listint_count - Counts the number of unique node
 * @h: A pointer to the head of the listint_t
 *
 * Return: If the list is not looped
 */
size_t listint_count(listint_t *h)
{
	listint_t *x, *s;
	size_t nodes = 1;

	if (h == NULL || h->next == NULL)
		return (0);

	x = h->next;
	s = (h->next)->next;

	while (s)
	{
		if (x == s)
		{
			x = h;
			while (x != s)
			{
				nodes++;
				x = x->next;
				s = s->next;
			}

			x = x->next;
			while (x != s)
			{
				nodes++;
				x = x->next;
			}

			return (nodes);
		}

		x = x->next;
		s = (s->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - Frees a listint_t
 * @h: A pointer to the head node
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current;
	size_t node, i;

	node = listint_count(*h);

	if (node == 0)
	{
		for (; h != NULL && *h != NULL; node++)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
		}
	}

	else
	{
		for (i = 0; i < node; i++)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
		}

		*h = NULL;
	}

	h = NULL;

	return (node);
}
