#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - Returns sum of all the data (n) of a listint_t linked list
 * @head: Pointer to the head of list
 * Return: Sum of all data, or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = head;
	int sum = 0;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
