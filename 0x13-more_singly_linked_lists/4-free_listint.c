#include "lists.h"

/**
 * free_listint - function frees linked list
 * @head: head of given list.
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while ((p = head) != NULL)
	{
		head = head->next;
		free(p);
	}
}
