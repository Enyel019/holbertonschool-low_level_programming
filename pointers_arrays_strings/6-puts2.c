#include <stdio.h>
#include "main.h"

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str : string character
 * Return : Always 0
 */

void puts2(char *str)
{
	int contador;

	contador = 1;

	for (; ;)
	{

		if (*str == '\0')
		{
			break;
		}

		if (contador % 2 == 0)
		{ contador++;
			str++;
			continue;

		} else
		{
			_putchar(*str);
			contador++;
			str++;
		}


	}

	_putchar('\n');
}
