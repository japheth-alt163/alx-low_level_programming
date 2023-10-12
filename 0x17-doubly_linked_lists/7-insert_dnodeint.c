#include "lists.h"

/**
 * create_dnode - creates a new dlistint_t node
 * @n: value for the new node
 * @prev: pointer to the previous node
 * @next: pointer to the next node
 * Return: a pointer to the new node or NULL on failure
 */
dlistint_t *create_dnode(int n, dlistint_t *prev, dlistint_t *next)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = prev;
	new_node->next = next;
	if (prev)
		prev->next = new_node;
	if (next)
		next->prev = new_node;

	return (new_node);
}

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to a pointer to the head of the list
 * @idx: the index at which to insert the new node
 * @n: the value to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current && i < idx - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (NULL);

	return (create_dnode(n, current, current->next));
}
