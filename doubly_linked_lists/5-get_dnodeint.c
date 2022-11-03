#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 *@head: head.
 *@index: int node index.
 *Return: returns the nth node of a dlistint_t linked list.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head->next != NULL)
		{
			head = head->next;
		}
		else
		{
			return (NULL);
		}
	}
	return (head);
}

