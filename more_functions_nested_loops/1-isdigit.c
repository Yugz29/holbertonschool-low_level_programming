#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for a digit
 * @c: the character to check
 *
 * Return: return 1 if is a number, 0 if is a letter
 **/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
