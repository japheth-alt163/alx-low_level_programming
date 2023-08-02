#include "main.h"

/**
 * leet - encodes a string in 1337
 * @s: string to be encoded
 *
 * Return: the resulting string;
 */
char *leet(char *s)
{
	int q, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (q = 0; s[q] != '\0'; q++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[q] == a[j])
			{
				s[q] = b[j];
			}
		}
	}

	return (s);
}
