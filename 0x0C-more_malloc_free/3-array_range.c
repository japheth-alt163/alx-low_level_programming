#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers from min to max
 * @min: Minimum value (included)
 * @max: Maximum value (included)
 *
 * Return: Pointer to the newly created array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min++;

	return (arr);
}

/**
 * main - Entry point of the program
 *
 * This function demonstrates usage of the `array_range` function by creating
 * an array of integers from `min` to `max` and then printing its
 * contents. It also releases the allocated memory after use.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int min = 5;
	int max = 10;

	int *result = array_range(min, max);

	if (result != NULL)
	{
		for (int i = 0; i <= max - min; i++)
			printf("%d ", result[i]);

		free(result);
	}

	return (0);
}
