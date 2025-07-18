#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Prints strings, followed by a new line.
 * @separator: The string to print between the strings (can be NULL).
 * @n: The number of strings passed to the function.
 * @...: A variable number of strings to print.
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list str;

	va_start(str, n);

	for (i = 0; i < n; i++)
	{
		char *s = va_arg(str, char *);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	va_end(str);
	printf("\n");
}
