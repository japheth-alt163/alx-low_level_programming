#include "main.h"
#include <stdio.h>

/**
 * *_strspn - It gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The string containing value to be searched
 *
 * Return: returns number of bytes in intial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, b, c, value;

	c = 0;

	for (i = 0 ; s[i] != '\0'; i++)
	{
		value = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[i] == accept[b])
			{
				c++;
				value = 1;
			}
		}
		if (value == 0)
		{
			return (c);
		}
	}

	return (0);
}
