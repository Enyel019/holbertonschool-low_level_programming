#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array to create
 * @c: initial value to fill array
 * Return: pointer to created array
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *p = NULL;

	if (size > 0)
		p = malloc(size);
	if (p != NULL)
	{
		for (i = 0; i < size; i++)
			p[i] = c;
	}
	return (p);
}
