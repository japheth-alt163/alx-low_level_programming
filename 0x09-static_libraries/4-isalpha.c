#include "main.h"

/**
 * _isalpha - it checks for alphabetic character.
 * @c: character being checked
 * Return: 1 if c is a letter, lowercase or uppercase, otherwise 0
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
