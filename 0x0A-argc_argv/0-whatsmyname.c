#include <stdio.h>
/**
 * main - it prints its name, then followed by a new line.
 * @argc: is number of command line arguments.
 * @argv: an array that contains the program command line arguments.
 * Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
