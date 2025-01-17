#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint- function that frees a list
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *h;

	while (head != NULL)
	{
		h = head;
		head = head->next;
		free(h);
	}
}
