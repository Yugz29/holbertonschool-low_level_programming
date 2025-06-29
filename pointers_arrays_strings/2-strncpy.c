#include "main.h"

/**
 * _strncpy - Copies up to n characters from src to dest
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to dest
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int position = 0;

	while (position < n && src[position] != '\0')
	{
		dest[position] = src[position];
		position++;
	}

	while (position < n)
	{
		dest[position] = '\0';
		position++;
	}

	return (dest);
}
