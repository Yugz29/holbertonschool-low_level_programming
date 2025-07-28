#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in the linked list_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 **/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
