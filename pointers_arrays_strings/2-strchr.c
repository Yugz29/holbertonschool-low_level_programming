#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string to search in
 * @c: the character to look for
 *
 * Return: pointer to the first occurrence of c, or NULL if not found
 *
 **/

char *_strchr(char *s, char c)
{
	int counter = 0;

	while (s[counter] != '\0' && s[counter] != c)
	{
		counter++;
	}

	if (s[counter] == c)
	{
		return (&s[counter]);

	}

	return (NULL);
}
