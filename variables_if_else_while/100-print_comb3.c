#include <stdio.h>
/**
 * main-hold all the code
 * Description: Write a program that prints all possible different combinations
 * of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two
 * digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: Always 0
 */



int main(void)
{
	int x;
	int y;

	for (x = 48; x < 58; x++)
	{
		for (y = x + 1; y < 58; y++)
		{
			putchar(x);
			putchar(y);
			if ((x + y) < ('8' + '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
