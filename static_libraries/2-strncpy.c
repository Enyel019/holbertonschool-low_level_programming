#include "main.h"

/**
 * *_strncpy - Write a function that copies a string
 * @dest: string to copy to
 * @src: string being  copied
 * @n: the number of bytes to copy
 * Return: pointer to the resulting string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
