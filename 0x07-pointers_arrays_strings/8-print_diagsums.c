#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * of a square matrix of integers
 * @a: the square matrix of which we print the sum of diagonals
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int f;

	unsigned int sum, sum1;

	sum = 0;
	sum1 = 0;

	for (f = 0; f < size; f++)
	{
		sum += a[(size * f) + f];
		sum1 += a[(size * (f + 1)) - (f + 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
