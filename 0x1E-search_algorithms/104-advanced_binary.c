#include <stdio.h>
#include "search_algos.h"

/**
 * advanced_binary_recursive - Recursive helper function for advanced binary search.
 * @array: Pointer to the first element of the array to search in.
 * @start: Starting index of the search range.
 * @end: Ending index of the search range.
 * @value: Value to search for.
 *
 * Return: Index where value is located. -1 if value is not present.
 */
int advanced_binary_recursive(int *array, size_t start, size_t end, int value)
{
    size_t mid, i;

    if (start > end)
        return -1;

    printf("Searching in array: ");
    for (i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
    }
    printf("\n");

    mid = start + (end - start) / 2;

    if (array[mid] == value)
    {
        if (mid == 0 || array[mid - 1] != value)
            return mid;
        else
            return advanced_binary_recursive(array, start, mid, value);
    }
    else if (array[mid] < value)
        return advanced_binary_recursive(array, mid + 1, end, value);
    else
        return advanced_binary_recursive(array, start, mid, value);
}

/**
 * advanced_binary - Searches for a value in a sorted array of integers.
 *                    This function finds the leftmost occurrence of the value
 *                    if it appears multiple times in the array.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where value is located. -1 if value is not present
 *         or if array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    return advanced_binary_recursive(array, 0, size - 1, value);
}
