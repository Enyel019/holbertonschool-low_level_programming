#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - prepends a node to a linked list
 * @head: pointer to the head of a linked list
 * @n: integer that the new node should hold
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
