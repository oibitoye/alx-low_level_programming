#include "lists.h"

/**
 * add_nodeint - function adds new node at the start of linked list
 * @head: head of given list.
 * @n: num of element.
 *
 * Return: returns address of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
