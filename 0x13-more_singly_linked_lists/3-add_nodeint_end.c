#include "lists.h"

/**
 * add_nodeint_end - function adds new node at the end of linked list
 * @head: head of given list.
 * @n: num of element.
 *
 * Return: returns address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp_node;

	(void)temp_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	temp_node = *head;
	if (*head != NULL)
	{
		while (temp_node->next != NULL)
			temp_node = temp_node->next;
		temp_node->next = new_node;
	}
	else
		*head = new_node;

	return (*head);
}
