#include "lists.h"

/**
 *add_node_end - adds a new node at the end of a list_t list.
 *@head: pointer to head.
 *@str: string.
 *Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)

{
	int i;
	char *b;
	list_t *new_node = NULL, *last = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	b = strdup(str);
	new_node->str = b;
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
	{

		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (*head);
}
