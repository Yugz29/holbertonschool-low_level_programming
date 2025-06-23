#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 * @c: contains the character for checks
 *
 * Return: return 1 when it's uppercase, return 0 if something else
 **/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
