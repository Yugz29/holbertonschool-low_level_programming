#include "main.h"

/**
 * puts_half - print half of a string
 *
 * @str: the string
 **/

void puts_half(char *str)
{
	int len = 0;
	int start;
	int compt;

	while (str[len] != '\0')
	{
		len++;
	}

	start = (len + 1) / 2;
	compt = start;

	while (str[compt] != '\0')
	{
		_putchar(str[compt]);
		compt++;
	}
	_putchar('\n');
}
