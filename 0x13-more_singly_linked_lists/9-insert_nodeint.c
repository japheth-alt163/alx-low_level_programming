#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer pointing to the head of the list.
 * @n: Value of the new node.
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer pointing to the head of the list.
 * @idx: Index where the new node should be added.
 * @n: Value of the new node.
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current = *head;
	unsigned int count = 0;

	if (idx == 0)
		return (add_nodeint(head, n));

	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node = malloc(sizeof(listint_t));
			if (new_node == NULL)
				return (NULL);

			new_node->n = n;
			new_node->next = current->next;
			current->next = new_node;

			return (new_node);
		}
		count++;
		current = current->next;
	}

	return (NULL);
}
