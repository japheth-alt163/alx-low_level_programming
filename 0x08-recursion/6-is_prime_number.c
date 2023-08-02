#include "main.h"

int determine_prime_number(int n, int k);

/**
 * is_prime_number - it returns a prime number
 * @n: number that has to be checked
 *
 * Return: prime value
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (determine_prime_number(n, n - 1));
}

/**
 * determine_prime_number - calculates if a number is prime recursively
 * @n: number to evaluate
 * @k: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int determine_prime_number(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (determine_prime_number(n, k - 1));
}
