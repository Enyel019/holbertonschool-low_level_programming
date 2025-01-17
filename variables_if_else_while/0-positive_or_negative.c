#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-This program will assign a random number to the variable n
 *Description: This will print the number stored in n and say if it's positive,
 *negative, or zero.
 *Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
