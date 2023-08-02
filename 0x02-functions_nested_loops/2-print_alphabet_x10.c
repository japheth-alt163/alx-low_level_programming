#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * followed by a new line
*/

void print_alphabet_x10(void)
{
	char a;
	int q;

	q = 0;

	while (q < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		q++;
	}
}
