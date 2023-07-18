#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * followed by a new line
*/

void print_alphabet_x10(void)
{
	char a;
	int i;

	i = 0;

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
