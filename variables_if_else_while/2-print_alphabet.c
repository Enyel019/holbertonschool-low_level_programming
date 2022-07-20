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
	int l = 97;
	for (l <= 122; l++)
		putchar(l);
	putchar('\n');
	return (0);
}

