#include "lists.h"

/**
 * insert_nodeint_at_index - function inserts new node at a given position
 * @head: head of given list
 * @idx: index where new node is to be added.
 * @n: num of element.
 * Return: returns address new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *p, *new_head;

	new_head = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && new_head != NULL; i++)
			new_head = new_head->next;
	}

	if (new_head == NULL && idx != 0)
		return (NULL);

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
}
