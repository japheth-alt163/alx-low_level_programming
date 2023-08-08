#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of a program
 * @ac: Number of arguments
 * @av: Array of pointers to arguments
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int total_length = 0, i, j, k = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
	}

	concat = malloc(sizeof(char) * (total_length + 1));
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concat[k++] = av[i][j];
			j++;
		}
		concat[k++] = '\n';
	}
	concat[k] = '\0';

	return (concat);
}
