#include "main.h"

/**
 * factorial -  it returns factorial of a number
 * @n: the number to check
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
