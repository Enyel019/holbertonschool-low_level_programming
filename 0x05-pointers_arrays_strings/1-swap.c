#include <stdio.h>
#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a:interger values
 * @b:interger values
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{

	int temp_a;

	temp_a = *a;
	*a = *b;
	*b = temp_a;

}


