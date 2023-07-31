#include "main.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any set of bytes.
 * @s: The string to search
 * @accept: Thestring containing bytes
 *
 * Return: pointer to the byte in s that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int k, j;

	for (k = 0; *s != '\0'; k++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);

}
