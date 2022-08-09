#include <stdio.h>
#include "main.h"

/**
 * _puts - function that prints a string,
 * @str: the string to be printed out
 *  followed by a new line, to stdout
 *  Return: Always 0
 */

void _puts(char *str)
{
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
