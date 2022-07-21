#include <stdio.h>

/**
 * main-hold all the code
 * Description:Write a program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * All your code should be in the main function
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
		putchar(x);
	putchar('\n');
	return (0);
}

