#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n:the digit we need to find the last number of
 *
 * Return: value of last digit
 *
 */

int print_last_digit(int n)
{
	int x = n % 10;

	if (x < 0)
		x = x * -1;
	_putchar ('0' + x);
	return (x);
}

