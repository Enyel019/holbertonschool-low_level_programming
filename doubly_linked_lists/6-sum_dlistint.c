#include "lists.h"

/**
 * sum_dlistint - sum of all integers in a linked list
 * @head: head of a linked list
 * Return: sum or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

