#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-hold all the code
 *Description:if the last digit of n is greater than 5:
 *the string and is greater than 5
 *if the last digit of n is 0: the string and is 0
 *if the last digit of n is less than 6 and not 0:
 *the string and is less than 6 and not 0
 *Return: Always 0
 */

int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
		if (x > 5)
			printf("Last digit of %d is %d and is greater than 5\n", n, x);
		else if (x == 0)
			printf("Last digit of %d is %d and is 0\n", n, x);
		else if (x < 6 && x != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
return (0);
}
