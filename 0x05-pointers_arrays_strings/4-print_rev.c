#include "main.h"

/**
 * print_rev - it prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int l, j, len;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}

	len = l;

	for (j = len - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
