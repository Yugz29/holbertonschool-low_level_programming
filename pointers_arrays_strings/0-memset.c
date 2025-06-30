#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to fill
 * @b: the byte value to fill the memory with
 * @n: number of bytes to fill
 *
 * Return: a pointer to the memory area s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	int counter = 0;

	while (n)
	{
		s[counter] = b;
		counter++;
	}

	return (s);
}
