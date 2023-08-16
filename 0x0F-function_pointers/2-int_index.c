#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Pointer to the array.
 * @size: Number of elements.
 * @cmp: Pointer to comparison function.
 * Return: Index of first element where cmp doesn't return 0, else -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int s;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (s = 0; s < size; s++)
			if (cmp(array[s]))
				return (s);
	}

	return (-1);
}
