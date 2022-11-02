#include "lists.h"

/**
 * print_dlistint - prints elements of a linked list
 * @h: head of the linked list
 * Return: Returns the number of nodes printed
 */

size_t print_dlistint(const dlistint_t *h)

{
    size_t print = 0;

    while (h)
    {
        printf("%d\n", h->n);
        print++;
        h = h->next;
    }
    return (print);

}
