#include "main.h"

/**
 * *_memcpy - copies bytes from memory area
 * @dest: Is where memory will be copied to
 * @src: Is value to be copied
 * @n: The number of bytes
 *
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
