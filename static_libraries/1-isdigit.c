#include <stdio.h>
#include "main.h"

/**
 * _isdigit - a function that checks for a digit
 * @c: is a digit caracter
 *
 * Return: Always 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
