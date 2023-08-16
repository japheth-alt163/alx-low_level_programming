#include "function_pointers.h"


/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: Pointer to the array.
 * @size: Size of the array.
 * @action: Pointer to the function to execute on each element.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
