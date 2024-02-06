#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 *                        interpolation search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where value is located. -1 if value is not present
 *         or if array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
size_t low, high;

if (array == NULL || size == 0)
return -1;

low = 0;
high = size - 1;

while (low <= high && value >= array[low] && value <= array[high])
{
size_t pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

if (array[pos] == value)
return (int)pos;
else if (array[pos] < value)
low = pos + 1;
else
high = pos - 1;
}

printf("Value checked array[%lu] is out of range\n", low);
return -1;
}
