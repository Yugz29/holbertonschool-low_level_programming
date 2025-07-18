#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: the number of arguments passed to the function
 * @...: the variable number of integer arguments to sum
 *
 * Return: the sum of all parameters, or 0 if n is 0
 **/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, result;

	if (n == 0)
	return (0);

	va_list sum_all;

	va_start(sum_all, n);

	result = 0;

	for (i = 0; i < n; i++)
	{
		result = result + va_arg(sum_all, int);
	}
	va_end(sum_all);
	return (result);
}
