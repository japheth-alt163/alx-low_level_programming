#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int q;

	if (n < 0)
		n = -n;

	q = n % 10;

	if (q < 0)
		q = -q;

	_putchar(q + '0');

	return (q);
}
