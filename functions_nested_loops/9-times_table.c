#include "main.h"

/**
 * times_table - function that prints the 9 times table, starting with 0.
 *
 * Return: nothing
 */

void times_table(void)
{
	int x;
	int y;
	int z = 0;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 11; y++)
		{
			z = x * y;
			{
				if (z >= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
					_putchar('\n');

				}
			}
		}
	}
}

