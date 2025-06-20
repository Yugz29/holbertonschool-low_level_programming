#include "main.h"

/**
 * _islower - checks whether a character is a lowercase letter
 *
 * @c: The character to check (in ASCII code)
 *
 * Return: always return 0
 *
 **/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
