#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * followed by a new line
 * @a: array to be printed
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (a == 0)
			printf("%d", a[a]);
		else
			printf(", %d", a[a]);
	}
		printf("\n");
}
