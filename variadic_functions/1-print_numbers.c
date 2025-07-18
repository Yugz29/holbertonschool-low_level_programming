#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers separated by a string
 * @separator: string to print between numbers (can be NULL)
 * @n: number of integers passed to the function
 * @...: variable number of integers to print
 *
 * Return: void
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numb;

	va_start(numb, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numb, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(numb);
	printf("\n");
}
