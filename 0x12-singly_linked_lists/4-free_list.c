#include "lists.h"

/**
 * free_list - function that free a list_t list
 * @head: head of list.
 * Return: void.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		free(head->str);
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
