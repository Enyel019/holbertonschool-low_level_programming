#include "main.h"
#include <limits.h>
#include <stdio.h>
/**
 * print_number - prints an integer.
 * @n: variable to test.
 */
void print_number(int n)
{
    int num;

    if (n < 0)
    {
        _putchar(45);
           n = -n;
    }
    else
        num = n;

    if (num / 10)
        print_number(num / 10);

    _putchar((n % 10) + 48);
}
