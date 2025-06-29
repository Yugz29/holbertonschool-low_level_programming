#include "main.h"

/**
 * _strncat - Concatenates at most n bytes from src to the end of dest
 * @dest: Destination string to append to
 * @src: Source string to append
 * @n: Maximum number of bytes to append from src
 *
 * Return: Pointer to the resulting string dest
 **/

char *_strncat(char *dest, char *src, int n)
{
	int position_src = 0;
	int position_dest = 0;

	while (dest[position_dest] != '\0')
	{
		position_dest++;
	}

	while (src[position_src] != '\0' && position_src < n)
	{
		dest[position_dest] = src[position_src];
		position_dest++;
		position_src++;
	}

	dest[position_dest] = '\0';

	return (dest);
}
