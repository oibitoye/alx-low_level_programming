#include "lists.h"

/**
 * get_nodeint_at_index - function returns the nth node of a linked list
 * @head: head of given list.
 * @index: index of given node.
 * Return: nth node or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int p;

	if (head == NULL)
		return (NULL);
	for (p = 0; p < index; p++)
	{
		head = head->next;
	}

	return (head);
}
