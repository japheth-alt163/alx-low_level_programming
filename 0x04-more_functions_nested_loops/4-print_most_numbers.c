#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 */
void print_most_numbers(void)
{
	int q;

	for (q = 0; q < 10; q++)
	{
		if (q != 2 && q != 4)
		{
			_putchar(q + '0');
		}
	}

	_putchar('\n');
}
