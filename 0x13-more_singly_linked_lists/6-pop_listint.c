#include "lists.h"

/**
 * pop_listint - function that deletes head node of linked list
 * @head: head of a list
 * Return: returns head of the node's data.
 */

int pop_listint(listint_t **head)
{
	int node_head;
	listint_t *p, *temp;

	if (*head == NULL)
		return (0);

	temp = *head;
	node_head = temp->n;
	p = temp->next;
	free(temp);
	*head = p;
	return (node_head);
}
