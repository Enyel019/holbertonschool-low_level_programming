#include <stdio.h>
#include "main.h"

/**
 * *_memcpy -  a function that copies memory area
 * @n: bytes from memory area
 * @src: memory area
 * @dest: destine memory
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (i = 0; i < n; i++)
		*dest++ = *src++;
	n--;

	return (dest);
}
