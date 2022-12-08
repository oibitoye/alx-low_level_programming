#include "lists.h"
/**
 * add_dnodeint - functon adds new node at the start of a dlinkdlist
 * @head: head of given list
 * @n: value
 * Return: returns address of new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_elem = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (new_elem == NULL)
		return (NULL);

	new_elem->n = n;
	new_elem->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	new_elem->next = h;

	if (h != NULL)
		h->prev = new_elem;

	*head = new_elem;

	return (new_elem);
}
