#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stddef.h>

/**
 * add_node - adds a new node to the beginning of a list_t
 * @head: double pointer to the beginning of the list
 * @str: string to duplicate and store in the new node
 *
 * Return: address of the new node, or NULL if unsuccessful
 **/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);

	if (!new->str)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = *head;
	*head = new;

	return (new);

}
