#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int sum3, sum5, sum;
	int q;

	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (q = 0; q < 1024; ++q)
	{
		if ((q % 3) == 0)
		{
			sum3 = sum3 + q;
		} else if ((q % 5) == 0)
		{
			sum5 = sum5 + q;
		}
	}
	sum = sum3 + sum5;
	printf("%lu\n", sum);
	return (0);
}
