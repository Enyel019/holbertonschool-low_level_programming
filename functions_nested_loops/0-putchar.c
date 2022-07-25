#include <stdio.h>
#include "main.h"

/**
 * main- Hold all the code
 * Description: Write a program that prints _putchar,
 * followed by a new line.
 * The program should return 0
 * Return: Always 0
 */

int main(void)
{
	char enyel[] = "_putchar";
	int x;

	for (x = 0; x <= 7777777; x++)

{
	putchar(*(enyel + x));
}
	putchar('\n');
	return (0);
}

