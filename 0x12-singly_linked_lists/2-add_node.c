#include "lists.h"

/**
 * add_node - function that add new node at the start of a list_t
 * @head: head of list.
 * @str: string
 * Return: address of new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_elem = malloc(sizeof(list_t));
	size_t i;

	if (new_elem == NULL)
		return (NULL);

	new_elem->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	new_elem->len = i;
	new_elem->next = *head;
	*head = new_elem;

	return (*head);
}
