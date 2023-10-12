#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: a pointer to the head of the list
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count++;
		h = h->next;
	}

	return (node_count);
}
