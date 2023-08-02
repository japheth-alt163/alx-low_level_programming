#include "main.h"

/**
 * largest_number - it returns the largest of 3 numbers
 * @a: the first integer
 * @b: the second integer
 * @c: the third integer
 * Return: the largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	if (b >= a && b >= c)
	{
		largest = b;
	}
	if (c >= a && c >= b)
	{
		largest =  c;
	}
	return (largest);
}
