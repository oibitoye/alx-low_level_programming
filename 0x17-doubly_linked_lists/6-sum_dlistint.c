#include "lists.h"
/**
 * sum_dlistint - functin returns sum of data of dlinkdlist
 * @head: head of given list
 * Return: returns sum of the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum = sum + head->n;
			head = head->next;
		}
	}

	return (sum);
}
