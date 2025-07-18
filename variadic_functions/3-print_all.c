#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_char - prints a character with a separator
 * @c: print character
 * @separator: string to be printed before the c
 **/

void print_char(char c, char *separator)
{
	printf("%s%c", separator, c);
}

/**
 * print_int - prints an integer with a separator
 * @i: print integer
 * @separator: string to be printed before integer
 **/

void print_int(int i, char *separator)
{
	printf("%s%d", separator, i);
}

/**
 * print_float - prints a floating-point number with a separator
 * @f: double to print
 * @separator: string to be printed before the number
 **/

void print_float(double f, char *separator)
{
	printf("%s%f", separator, f);
}

/**
 * print_string - prints a string with a separator, displays (nil) if NULL
 * @s: string to print
 * @separator: chain to be printed before the chain
 **/

void print_string(char *s, char *separator)
{
	if (s == NULL)
		printf("%s(nil)", separator);
	else
		printf("%s%s", separator, s);
}

/**
 * print_all - prints everything in the given format
 * @format: string indicating argument type (cifs)
 * @...: variable arguments to print
 **/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *separator = "";

	va_list args;

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == 'c')
			print_char(va_arg(args, int), separator);
		else if (format[i] == 'i')
			print_int(va_arg(args, int), separator);
		else if (format[i] == 'f')
			print_float(va_arg(args, double), separator);
		else if (format[i] == 's')
			print_string(va_arg(args, char *), separator);

		separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
