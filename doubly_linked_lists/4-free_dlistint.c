#include "lists.h"

/**
 * free_listint- function that frees a list
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)

{

	dlistint_t *h;
	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}

