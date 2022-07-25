#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - check the code
 * Description:Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 * Prototype: void print_alphabet(void);
 * You can only use _putchar twice in your code
 * Return: Always 0.
 */

void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');

}
