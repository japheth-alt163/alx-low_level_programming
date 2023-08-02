#include "main.h"

/**
 * *_puts_recursion - it prints a string followed by a new line
 * @s: string to to printed
 *
 * Return: returns (0)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
