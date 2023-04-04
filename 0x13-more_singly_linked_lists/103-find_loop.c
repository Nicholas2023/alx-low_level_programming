#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained listint_t
 * @head: A pointer to the head of the listint_t
 *
 * Return: Address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *t, *s;

	if (head == NULL || head->next == NULL)
		return (NULL);

	t = head->next;
	s = (head->next)->next;

	while (s)
	{
		if (t == s)
		{
			t = head;

			while (t != s)
			{
				t = t->next;
				s = s->next;
			}

			return (t);
		}

		t = t->next;
		s = (s->next)->next;
	}

	return (NULL);
}
