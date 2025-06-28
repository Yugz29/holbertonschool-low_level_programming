#include "main.h"

/**
 * puts2 - Displays every other character in a string
 *
 * @str: The string to be partially displayed
 **/

void puts2(char *str)
{
	int start = 0;

	while (str[start] != '\0')
	{
		_putchar(str[start]);
		start += 2;
	}
	_putchar('\n');
}
