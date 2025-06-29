#include "main.h"

/**
 *  _strcat - Concatenates two strings
 * @dest: The destination string to which src will be appended
 * @src: The source string to append to dest
 *
 * Return: Pointer to the resulting string dest
 **/

char *_strcat(char *dest, char *src)
{
	int position_dest = 0;
	int position_src = 0;

	while (dest[position_dest] != '\0')
	{
		position_dest++;
	}
	while (src[position_src] != '\0')
	{
		dest[position_dest] = src[position_src];
		position_dest++;
		position_src++;
	}
	dest[position_dest] = '\0';

	return (dest);
}
