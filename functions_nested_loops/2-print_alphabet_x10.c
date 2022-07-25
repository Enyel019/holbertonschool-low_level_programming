#include "main.h"

/**
 * print_alphabet_x10 - check the code
 * Description:Write a function that prints 10 the alphabet,
 * in lowercase, followed by a new line.
 * Prototype: void print_alphabet_x10(void);
 * You can only use _putchar twice in your code
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	char x;
	int y;

	for (y = 0; y < 10; y++)
	{

	for (x = 'a'; x <= 'z'; x++)
{
	_putchar(x);
}
	_putchar('\n');
	}
}
