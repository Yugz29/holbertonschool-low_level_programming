#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an integer array
 * @a: Pointer to the first element of the array
 * @n: Number of elements to print
 **/

void print_array(int *a, int n)
{
	int position = 0;

	while (position < n)
	{
		printf("%d", a[position]);

		if (position < n - 1)
		{
			printf(", ");
		}
		position++;
	}
	printf("\n");
}
