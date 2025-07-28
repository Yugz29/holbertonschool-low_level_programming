#include "lists.h"

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string
 *
 * Return: The length of the string
 */
int _strlen(const char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
