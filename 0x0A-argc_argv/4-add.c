#include <ctype.h>

/**
 * main - adds positive numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int a, j, sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (j = 0; argv[a][j] != '\0'; j++)
		{
			if (!isdigit(argv[a][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
