#include "main.h"

/**
 * _isalpha - checks to see if a letter is lowercasa or uppercase
 *
 *@c: the letter the function checks
 *
 *Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	else
		return (0);
}
