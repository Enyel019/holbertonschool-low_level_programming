#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - preappends a node to a linked list
 * @head: the head of the linked list
 * @str: the string that the new node should contain
 * Return: a pointer to the new node or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new_node;
	char *b;

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
	new_node->next = *head;

	*head = new_node;
	return  (*head);
}




