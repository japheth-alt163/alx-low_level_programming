#include <stdlib.h>
#include "main.h"


/**
 * _realloc - Reallocates a memory block using malloc and free.
 *
 * @ptr: Pointer to the memory previously allocated with malloc.
 * @old_size: Size of the allocated memory block (in bytes).
 * @new_size: New size for the memory block (in bytes).
 *
 * Return: Pointer to reallocated memory block, NULL on failure.
 *         If new_size is zero and ptr is not NULL, frees ptr and returns NULL.
 *         If new_size equals old_size, returns ptr without reallocation.
 *         If ptr is NULL, equivalent to malloc(new_size).
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}

	free(ptr);
	return (ptr1);
}
