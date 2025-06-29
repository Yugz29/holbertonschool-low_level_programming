#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if s1 and s2 are equal, Negative value if s1 < s2,
 * Positive value if s1 > s2
 **/

int _strcmp(char *s1, char *s2)
{
	int position = 0;

	while (s1[position] == s2[position] && s1[position] != '\0')
	{
		position++;
	}

	return (s1[position] - s2[position]);
}
