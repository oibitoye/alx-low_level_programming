#include "lists.h"

/**
 * add_node_end - function that add new node to end of list_t
 * @head: head of list.
 * @str: string
 * Return: returns address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new_node->len = i;
	new_node->next = NULL;
	tmp = *head;

	if (tmp != NULL)
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	else
	{
		*head = new_node;
	}

	return (*head);
}
