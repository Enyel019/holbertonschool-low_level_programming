#include <stdio.h>
#include "main.h"

/**
 * *_memcpy -  a function that copies memory area
 * @n: number of bytes to copy
 * @src: memory area to copy
 * @dest: memory area place copy
 * Return: pointer to copied bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *r = dest;

	while (n)
	{
		*dest++ = *src++;
		 n--;
	}
	return (r);
}
