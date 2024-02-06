#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - Searches for a value in a sorted array using
 *                      exponential search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index where value is located. -1 if value is not present
 *         or if array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound, start, end, i;

    if (array == NULL || size == 0)
        return -1;

    bound = 1;
    while (bound < size && array[bound] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
        bound *= 2;
    }

    start = bound / 2;
    end = (bound < size - 1) ? bound : size - 1;

    printf("Value found between indexes [%lu] and [%lu]\n", start, end);
    printf("Searching in array: ");
    for (i = start; i <= end; i++)
    {
        printf("%d", array[i]);
        if (i < end)
            printf(", ");
    }
    printf("\n");

    return binary_search(array, start, end, value);
}

/**
 * binary_search - Searches for a value in a sorted array using
 *                 binary search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @start: Starting index of the search range.
 * @end: Ending index of the search range.
 * @value: Value to search for.
 *
 * Return: Index where value is located. -1 if value is not present
 *         or if array is NULL.
 */
int binary_search(int *array, size_t start, size_t end, int value)
{
    size_t mid, i;

    if (array == NULL)
        return -1;

    while (start <= end)
    {
        mid = (start + end) / 2;

        printf("Searching in array: ");
        for (i = start; i <= end; i++)
        {
            printf("%d", array[i]);
            if (i < end)
                printf(", ");
        }
        printf("\n");

        if (array[mid] == value)
            return mid;
        else if (array[mid] < value)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}
