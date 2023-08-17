#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: Exit status
 */
int main(int argc, char **argv)
{
	int inta, intb;
	int (*f)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' &&
	      argv[2][0] != '*' && argv[2][0] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

		inta = atoi(argv[1]);
		intb = atoi(argv[3]);

		printf("%d\n", f(inta, intb));

		return (0);

}
