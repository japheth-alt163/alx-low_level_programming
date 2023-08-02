#include "main.h"

int natural_sqrt_recursion(int n, int j);

/**
 * *_sqrt_recursion - returns a natural square root
 * @n: number to be checked
 *
 * Return: returns the squared root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (natural_sqrt_recursion(n, 0));
}

/**
 * natural_sqrt_recursion - finds natural sqrt
 * @n: number to calculate
 * @j: iterator
 *
 * Return: natural square root
 */
int natural_sqrt_recursion(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	return (natural_sqrt_recursion(n, j + 1));
}
