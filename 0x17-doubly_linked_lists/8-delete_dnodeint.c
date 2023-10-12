#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: a pointer to the head of the list
 * @index: the index of the node to delete (starting from 0)
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	dlistint_t *temp;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		temp = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	temp->next = current->next;
	if (current->next != NULL)
		current->next->prev = temp;
	free(current);

	return (1);
}
