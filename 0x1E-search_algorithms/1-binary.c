#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: A pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search for
 *
 * Return: The index where value is located, or -1 if it's not present
 */
int binary_search(int *array, size_t size, int value)
{
size_t left = 0, right = size - 1, mid;
size_t i;

if (array == NULL)
return (-1);

while (left <= right)
{
mid = (left + right) / 2;

printf("Searching in array: ");
for (i = left; i <= right; i++)
{
printf("%d", array[i]);
if (i < right)
printf(", ");
}
printf("\n");

if (array[mid] < value)
left = mid + 1;
else if (array[mid] > value)
right = mid - 1;
else
return (mid);
}

return (-1);
}
