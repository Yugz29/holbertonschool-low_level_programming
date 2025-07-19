#include "main.h"
#include <stdio.h>

/**
 * leet - Encodes a string into 1337 (leet speak)
 * @s: The input string to encode
 *
 * Return: A pointer to the encoded string
 **/

char *leet(char *s)
{
	char lettre[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; lettre[j] != '\0'; j++)
		{
			if (s[i] == lettre[j])
				s[i] = replacements[j];
		}
	}
	return (s);
}
