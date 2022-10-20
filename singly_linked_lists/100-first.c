#include <stdio.h>

/**
 * enyel - prints before the main function
 */

void __attribute__ ((constructor)) enyel()

{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

