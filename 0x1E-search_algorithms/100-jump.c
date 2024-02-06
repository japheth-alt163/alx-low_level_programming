#include <math.h> /* for sqrt */
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in @array
 * @value: value to search for
 *
 * Return: first index where @value is located,
 *         or -1 if @value is not present or @array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
    size_t step = sqrt(size), prev = 0;

    if (array == NULL)
        return (-1);

    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev += step;
        if (prev >= size)
            break;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", prev - step, prev);

    prev -= step;
    while (array[prev] < value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        prev++;
        if (prev == size || array[prev] == value)
            break;
    }

    if (array[prev] == value)
    {
        printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
        return (prev);
    }

    return (-1);
}
