#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Displays all items in a list list_t
 * @h: pointer to the first element (head) of the list
 *
 * Return: total number of nodes
 **/

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);

		else
			printf("[0] (nil)\n");

		h = h->next;
		count++;
	}
	return (count);
}