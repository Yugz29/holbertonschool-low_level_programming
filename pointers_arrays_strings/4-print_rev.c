#include "main.h"

/**
 * print_rev - Displays a character string in reverse, followed by a line feed
 *
 * @s: Pointer to the string to be inverted and displayed
 **/

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	while (len > 0)
	{
		_putchar(s[len - 1]);
		len--;
	}
	_putchar('\n');
}
