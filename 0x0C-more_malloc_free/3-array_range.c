#include <stdlib.h>
#include "main.h"


/**
 * array_range - Create an array of integers from min to max.
 * @min: Minimum value (inclusive).
 * @max: Maximum value (inclusive).
 * Return: Pointer to the new array, or NULL on failure or invalid input.
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}
