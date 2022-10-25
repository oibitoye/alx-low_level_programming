#include "lists.h"

/**
 * sum_listint - function returns sum of all data (n) of a linked list
 * @head: head of a list.
 * Return: returns sum of all given data.
 */

int sum_listint(listint_t *head)
{
	int sum_of_node = 0;

	while (head != NULL)
	{
		sum_of_node += head->n;
		head = head->next;
	}
	return (sum_of_node);
}
