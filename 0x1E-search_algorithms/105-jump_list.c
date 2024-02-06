#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of integers using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in the list.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    size_t jump, step;
    listint_t *current, *prev;

    if (list == NULL || size == 0)
        return NULL;

    jump = sqrt(size);
    current = list;
    prev = NULL;

    while (current != NULL && current->n < value)
    {
        prev = current;
        step = jump;
        while (current->next != NULL && step > 0)
        {
            current = current->next;
            step--;
        }
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    }

    if (current == NULL)
        return NULL;

    printf("Value found between indexes [%lu] and [%lu]\n", prev->index, current->index);
    printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);

    while (prev != NULL && prev->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
        if (prev->next == NULL || prev->n > value)
            break;
        prev = prev->next;
    }

    if (prev == NULL || prev->n > value)
        return NULL;

    if (prev->n == value)
        return prev;

    return NULL;
}
