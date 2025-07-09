#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array and initializes it to zero
 * @nmemb: Number of elements
 * @size: Size of each element in bytes
 *
 * Return: Pointer to allocated memory, or NULL
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *cptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);

	if (ptr == 0)
	{
		return (NULL);
	}

	cptr = (char *)ptr;

	for (i = 0; i < nmemb * size; i++)
	{
		cptr[i] = 0;
	}

	return (ptr);
}
