#include "main.h"
#include <stdio.h>

/**
 * *_strchr - that locates character in string
 * @s: The string to be searched
 * @c: The character to be found
 *
 * Return: a pointer to the first occurrence of char
 */
char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;
		if (i == c)
		{
			return (s - 1);
		}
		if (i == 0)
		{
			return (NULL);
		}
	}
}
