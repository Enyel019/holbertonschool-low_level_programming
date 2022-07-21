#include <stdio.h>
/**
 * main-hold all the code
 * Description:Write a program that prints all the numbers
 * of base 16 in lowercase, followed by a new line.
 * You can only use the putchar function
 *(every other function (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar three times in your code
 * Return: Always 0
 */

int main(void)
{
int x;
int y;

for (x = 0; x <= 9; x++)
putchar(x);
for (y = 97; y <= 102; y++)
putchar(y);
putchar('\n');
return (0);
}
