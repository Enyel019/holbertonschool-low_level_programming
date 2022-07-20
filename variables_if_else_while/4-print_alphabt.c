#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main-hold all the code
 * followed by a new line.
 * Description:Print all the letters except q and e
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	if (x == 'e' || x == 'q')
	putchar(x);
	putchar('\n');
	return (0);
}


