#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n:all natural numbers
 * Description:Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 * Return: Always 0
 */

void print_to_98(int n)
{
	if (n == 98)
		printf("%i\n", n);

	while (n > 98)
	{
		printf("%i, ", n);
		if (n == 99)
		{
			n--;
			printf("%i\n", n);
		}
		else
			n--;
	}

	while (n < 98)
	{
		printf("%i, ", n);
		if (n == 97)
		{
			n++;
			printf("%i\n", n);
		}
		else
			n++;
	}
}
