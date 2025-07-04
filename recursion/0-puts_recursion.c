#include "main.h"

/**
 * _puts_recursion - Display a string recursively
 *
 * @s: Pointer to the character string
 *
 **/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
