#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers from min to max inclusive
 * @min: Minimum value in the array
 * @max: Maximum value in the array
 *
 * Return: Pointer to the newly allocated array, or NULL
 **/

int *array_range(int min, int max)
{
	int *ptr;
	int size_ray;
	int i;

	if (min > max)
	{
		return (NULL);
	}

	size_ray = max - min + 1;

	ptr = malloc(size_ray * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size_ray; i++)
	{
		ptr[i] = min + i;
	}
	return (ptr);
}
