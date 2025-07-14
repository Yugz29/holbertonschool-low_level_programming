#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @action: Pointer to a function to be called on each element
 *
 * Return: Nothing
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || array == NULL || size == 0)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
