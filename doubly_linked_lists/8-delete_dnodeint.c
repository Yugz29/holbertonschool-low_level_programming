#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete the node
 * @head: Double pointer to the head of the list
 * @index: Index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	dlistint_t *current = *head;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;

		if (*head != NULL)
		{
			(*head)->prev = NULL;
			free(temp);
		}
		return (1);
	}

	if (index > 0)
	{
		for (i = 0; current != NULL && i < index; i++)
			current = current->next;

		if (current == NULL)
			return (-1);
	}

	current->prev->next = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
