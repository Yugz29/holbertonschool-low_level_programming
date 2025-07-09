#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: pointer to allocated memory
 *
 **/

void *malloc_checked(unsigned int b)
{
	void *checked;

	checked = malloc(b);

	if (checked == NULL)
	{
		exit(98);
	}
	return (checked);
}
