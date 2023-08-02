#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int w;

	w = 0;

	while (s[w] != '\0')
	{
		w++;
	}

	return (w);
}
