#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int q, j;

		for (q = 1; q <= size; q++)
		{
			for (j = q; j < size; j++)
			{
				_putchar(' ');
			}

			for (j = 1; j <= q; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
