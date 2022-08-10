#include <stdio.h>
#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 * @s: the string to be printed out
 *  followed by a new line, to stdout
 *  Return: nothing
 */

void print_rev(char *s)
{
	if (*s == '\0')
		return;
	print_rev(s + 1);
	_putchar(*s);
}
