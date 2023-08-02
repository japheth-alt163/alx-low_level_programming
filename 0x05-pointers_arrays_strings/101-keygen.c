#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int d, sum, n;

	sum = 0;	

	srand(time(NULL));

	for (d = 0; d < 100; d++)
	{
		pass[d] = rand() % 78;
		sum += (pass[d] + '0');
		putchar(pass[d] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
