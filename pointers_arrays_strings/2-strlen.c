#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 * @s:the string whose length to return
 * Return :  the length of the string
 */


int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
