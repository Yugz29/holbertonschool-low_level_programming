#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: first integer
 * @b: second integer
 **/

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
