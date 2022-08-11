#include <stdio.h>
#include "main.h"

/**
 * rev_string - unction that reverses a string.
 * @s: variable
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i;
	int len;
	char newStr;

	i = 0;
	len = _strlen(s) - 1;

	while (len >= i)
	{
		newStr = s[len]; /*newStr == n*/
		s[len] = s[i]; /*s[len] == H*/
		s[i] = newStr; /*s[i] == n*/
		len--;
		i++;
	}
}
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
