#include "lists.h"
/**
 * list_len - Counts the number of elements in a list_t list.
 * @h: A pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t elem;

	elem = 0;
	while (h != NULL)
	{
		h = h->next;
		elem++;
	}
	return (elem);
}
