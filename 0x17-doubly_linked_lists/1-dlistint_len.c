#include "lists.h"

/**
 * dlistint_len - function returns number of elements in dlinked list
 * @h: head of given list
 * Return: returns number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int cnt = 0;

	if (h == NULL)
		return (0);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		cnt = cnt + 1;
		h = h->next;
	}

	return (cnt);
}
