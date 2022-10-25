#include "lists.h"

/**
 * free_listint2 - function frees linked list
 * @head: head of given list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *new;
	listint_t *p;

	if (head != NULL)
	{
		p = *head;
		while ((new = p) != NULL)
		{
			p = p->next;
			free(new);
		}
		*head = NULL;
	}
}
