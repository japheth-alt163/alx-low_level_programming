#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: the two dimension array to print
 */
void print_chessboard(char (*a)[8])
{
	int i, m;

	for (i = 0; i < 8; i++)
	{
		for (m = 0; m < 8; m++)
		{
			_putchar(a[i][m]);
		}
		_putchar('\n');
	}
}
