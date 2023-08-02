#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int max;
	long int q;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (q = 3; q <= sqrt(n); q = q + 2)
	{
		while (n % q == 0)
		{
			max = q;
			n = n / q;
		}
	}

	if (n > 2)
		max = n;

	printf("%ld\n", max);

	return (0);
}
