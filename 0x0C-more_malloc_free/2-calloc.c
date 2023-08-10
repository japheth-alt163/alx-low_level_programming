#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory to array
 * @nmemb: Number of elements in array
 * @size: Size of each element
 *
 * Return: Pointer to the allocated and zero-initialized memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    char *ptr;

    if (nmemb == 0 || size == 0)
        return (NULL);

    ptr = malloc(size * nmemb);

    if (ptr == NULL)
        return (NULL);

    _memset(ptr, 0, nmemb * size);

    return (ptr);
}
