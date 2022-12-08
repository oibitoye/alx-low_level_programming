#include "lists.h"
/**
 * free_dlistint - function frees a dlinkdlist
 * @head: head of given list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp_list;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((temp_list = head) != NULL)
	{
		head = head->next;
		free(temp_list);
	}
}
