#include "main.h"
#include <stdio.h>

/**
 * separator - Checks if a character is a word separator
 * @c: The character to check
 *
 * Return: 1 if c is a separator, 0 otherwise
 **/

int separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' ||
		c == '.' || c == '!' || c == '?' || c == '"' || c == '(' ||
		c == ')' || c == '{' || c == '}')
		return (1);
	return (0);
}

/**
 * cap_string - Capitalizes all words of a string
 * @s: The string to capitalize
 *
 * Return: Pointer to the modified string
 **/

char *cap_string(char *s)
{
	int i = 0;

	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;

	for (i = 1; s[i] != '\0'; i++)
	{
		if (separator(s[i - 1]) && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
