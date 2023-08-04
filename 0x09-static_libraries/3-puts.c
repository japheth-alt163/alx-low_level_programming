#include "main.h"

/**
 * _puts - it prints a string to stdout
 * @str: the pointer to the string to print
 */
void _puts(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
