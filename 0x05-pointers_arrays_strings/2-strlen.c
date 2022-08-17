#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strlen - a function that returns the length of a string
 * @s:the string whose length to return
<<<<<<< HEAD
 * Return :  the length of the string
=======
 * Return: the length of the string
>>>>>>> 4001faded5345fdd33790aaee11782818afab4c8
 */


int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
