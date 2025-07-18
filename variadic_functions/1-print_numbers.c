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
	int result;
	va_list sum_numbers;

	if (n == 0)
	return;

	va_start(sum_numbers, n);
	result = 0;

	for (i = 0; i < n; i++)
	{
		result = va_arg(sum_numbers, int);
		printf("%d", result);

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(sum_numbers);
}
