#include "main.h"

/**
 * *_strlen_recursion - it returns the length of string.
 * @s: the string to be counted;
 *
 * Return: return (0)
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
