#include "main.h"

/**
 * print_line - it draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int z;

		for (z = 1; z <= n; z++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}
