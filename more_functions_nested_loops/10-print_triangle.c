#include <stdio.h>
#include "main.h"

/**
 * print_triangle -  a function that prints a triangle
 * @size:Where size is the size of the triangle
 * Return:If size is 0 or less, the function should print only a new line
 */

void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j <= size - i)
					_putchar(' ');
				else
				{
					_putchar(35);
					if (j == size)
						_putchar('\n');
				}
			}
		}
	}
	else
		_putchar('\n');
}
