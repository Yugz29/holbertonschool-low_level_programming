#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct print_type - associates a format char to a print function
 * @type: the format character (c, i, f, s)
 * @print_func: pointer to the function that prints the type
 */
typedef struct print_type
{
char type;
void (*print_func)(va_list args, char *separator);
} print_type_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args, char *separator);
void print_int(va_list args, char *separator);
void print_float(va_list args, char *separator);
void print_string(va_list args, char *separator);

#endif
