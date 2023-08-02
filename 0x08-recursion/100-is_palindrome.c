#include "main.h"

int check_if_is_palindrome(char *s, int i, int len);
int pal_strlen(char *s);

/**
 * is_palindrome - it returns 1 if string is palindrome and
 * 0 if not
 * @s: the string to be checked
 *
 * Return: returns a checked value
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_if_is_palindrome(s, 0, pal_strlen(s)));
}

/**
 * pal_strlen - returns the length of a string
 * @s: the string to calculate the length
 *
 * Return: length of string
 */
int pal_strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + pal_strlen(s + 1));
}

/**
 * check_if_is_palindrome - it checks the characters recursively for palindrome
 * @s: string to be checked
 * @i: iterator
 * @len: length of string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_if_is_palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_if_is_palindrome(s, i + 1, len - 1));
}
