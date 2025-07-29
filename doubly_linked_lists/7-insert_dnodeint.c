#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: Double pointer to the head
 * @idx: Index where the new node should be added
 * @n: The integer value to store in the new node
 *
 * Return: Address of the new node, or NULL if fail
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *new;
	dlistint_t *current = *h;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; current != NULL && i < idx - 1; i++)
		current = current->next;

	if (current == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = current;
	new->next = current->next;

	if (current->next != NULL)
		current->next->prev = new;

	current->next = new;

	return (new);
}
