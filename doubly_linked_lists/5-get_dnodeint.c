#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return
 *
 * Return: Pointer to the node at index, or NULL
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	if (head != NULL)
		return (head);
	else
		return (NULL);
}
