#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: is underscore
 **/

void print_line(int n)
{
	int line = 0;

	while (line < n && n > 0)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
