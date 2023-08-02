#include "main.h"

/**
 * puts2 - it prints one char out of 2 of a string
 * it then followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, q;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (q = 0; q < len; q += 2)
	{
		_putchar(str[q]);
	}

	_putchar('\n');
}
