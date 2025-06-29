#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies a string
* @dest: buffer to copy the string into
* @src : source string to copy
*
* Return: pointer to dest
**/

char *_strcpy(char *dest, char *src)
{
	int position = 0;

	while (src[position] != '\0')
	{
		dest[position] = src[position];
		position++;
	}

	dest[position] = '\0';

	return (dest);
}
