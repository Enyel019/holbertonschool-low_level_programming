#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 * @n: Where n is the number of times the character \ should be printed
 * Return: nothing
 */


void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (j != i)
					_putchar(' ');
				if (j == i)
				{
					_putchar(92);
					_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
