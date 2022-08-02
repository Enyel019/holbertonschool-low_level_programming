#include <stdio.h>
#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n:is the number of times the character _ should be printed
 * Return:if n is 0 or less, the function should only print \n
 */

void print_line(int n)
{

	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
