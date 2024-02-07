#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: Pointer to the first node where value is located, or NULL if not found.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
    skiplist_t *current, *express;

    if (list == NULL)
        return (NULL);

    express = list->express;
    current = list;

    while (express != NULL && express->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
        current = express;
        express = express->express;
    }

    printf("Value found between indexes [%lu] and [%lu]\n", current->index, express ? express->index : current->index);
    
    while (current != NULL && current->n < value)
    {
        printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
        current = current->next;
    }

    if (current == NULL || current->n != value)
        return (NULL);

    printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
    return (current);
}
