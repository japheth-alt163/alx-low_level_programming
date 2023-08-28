#include "lists.h"

/**
 * free_listint_safe - Frees a linked list, handles loops.
 * @h: A pointer to a pointer to the head node of the list.
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h, *temp;
	size_t count = 0;

	while (current)
	{
		if (current->next >= current)
		{
			count++;
			printf("[%p] %d\n", (void *)current, current->n);
			break;
		}
		temp = current->next;
		free(current);
		current = temp;
		count++;
	}

	*h = NULL;

	return (count);
}
