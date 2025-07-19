#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 *
 * Return: The integer representation of the string
 **/

int _atoi(char *s)
{
	int i = 0;
	int op = 1;
	int number = 0;

	while (s[i] && s[i] != '+' && s[i] != '-' && s[i] != ' ' && (s[i] < '0' ||
		s[i] > '9'))
	{
		i++;
	}
	while (s[i] == '+' || s[i] == '-' || s[i] == ' ')
	{
		if (s[i] == '-')
		{
			op *= -1;
		}
		i++;
	}
	if (!(s[i] >= '0' && s[i] <= '9'))
		return 0;

	while (s[i] >= '0' && s[i] <= '9')
	{
		number = number * 10 + (s[i] - '0');
		i++;
	}
	return (number * op);
}
