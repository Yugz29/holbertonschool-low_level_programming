#include "main.h"

/**
 * _strlen - return the lenght of a string
 *
 * @s: pointer to the string
 *
 * Return: lenght of the string
 **/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
