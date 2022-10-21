#include "lists.h"

/**
 * list_len - function that return the number of elements in a list.
 * @h: linked list.
 * Return: number of elements in list.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
