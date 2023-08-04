#include "main.h"

/**
 * *_memset - fills memory with constant byte
 * @s: memory area that has to be filed
 * @b: The value to be set
 * @n: The number of bytes
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);


}
