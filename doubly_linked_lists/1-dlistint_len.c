#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a list dlistint_t
 *  @h: pointer to the beginning of the list
 *
 *  Return: number of nodes in the list
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
