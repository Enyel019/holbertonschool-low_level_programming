#include <stdio.h>
/**
 * main-hold all the code
 * Description:Write a program that prints the alphabet in lowercase,
 * followed by a new line
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: Always 0
 */

int main(void)
{
	int l;
	int a;

	for (l = 97; l <= 122; l++)
	putchar(l);

	for (a = 65; a <= 90; a++)
	putchar(a);

	putchar('\n');
	return (0);
	}