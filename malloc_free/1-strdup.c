#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated memory space
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or NULL
 **/

char *_strdup(char *str)
{
	char *str_bis;
	int len = 0;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	str_bis = malloc(len + 1);

	if (str_bis == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		str_bis[i] = str[i];
	}

	return (str_bis);
}
