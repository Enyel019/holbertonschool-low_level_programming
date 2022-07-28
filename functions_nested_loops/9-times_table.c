#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 * Return: nothing
 */
void times_table(void)
{
	int x, y, z;
	int k = 0;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 11; y++)
		{
			z = y * k;
			if (z >= 0 && z <= 9)
			{
				if (y == 0)
					_putchar(z + '0');
				else if (y == 10)
				{
					_putchar('\n');
					k++;
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
			}
			else if (z >= 10)
			{
				if (y == 10)
				{
					_putchar('\n');
					k++;
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
			}
		}
	}
}
