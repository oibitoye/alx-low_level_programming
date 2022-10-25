#include "lists.h"

/**
 * delete_nodeint_at_index - fn deletes node at a given index of a linked list
 * @head: head of given list.
 * @index: index where the node is deleted.
 * Return: 1 or -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *next, *p = *head;

	if (p == NULL || (p->next == NULL && index != 0))
		return (-1);

	if (index != 0)
	{
		for (i = 0; i < index - 1 && p != NULL; i++)
			p = p->next;
	}

	next = p->next;

	if (index == 0)
	{
		free(p);
		*head = next;
	}
	else
	{
		p->next = next->next;
		free(next);
	}

	return (1);
}
