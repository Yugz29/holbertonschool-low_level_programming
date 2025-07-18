#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a character with a separator
 * @args: va_list containing the argument to print
 * @separator: string to print before the character
 **/

void print_char(va_list args, char *separator)
{
	char c = (char)va_arg(args, int);

	printf("%s%c", separator, c);
}

/**
 * print_int - prints an integer with a separator
 * @args: va_list containing the argument to print
 * @separator: string to print before the integer
 **/

void print_int(va_list args, char *separator)
{
	int i = va_arg(args, int);

	printf("%s%d", separator, i);
}

/**
 * print_float - prints a floating-point number with a separator
 * @args: va_list containing the argument to print
 * @separator: string to print before the float
 **/

void print_float(va_list args, char *separator)
{
	double f = va_arg(args, double);

	printf("%s%f", separator, f);
}

/**
 * print_string - prints a string with a separator,
 *                prints (nil) if the string is NULL
 * @args: va_list containing the argument to print
 * @separator: string to print before the string
 **/

void print_string(va_list args, char *separator)
{
	char *s = va_arg(args, char *);

	if (s == NULL)
		printf("%s(nil)", separator);
	else
		printf("%s%s", separator, s);
}

/**
 * print_all - prints anything based on the format string
 * @format: string of format specifiers (c, i, f, s)
 * @...: variable arguments corresponding to format specifiers
 **/

void print_all(const char * const format, ...)
{
	int i = 0, j;
	char *separator = "";

	print_type_t print_types[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};

	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (print_types[j].type != '\0')
		{
			if (print_types[j].type == format[i])
			{
				print_types[j].print_func(args, separator);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
