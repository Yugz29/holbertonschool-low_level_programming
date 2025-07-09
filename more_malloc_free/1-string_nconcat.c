#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings with a limit on the second
 * @s1: First string
 * @s2: Second string
 * @n: Number of bytes to take from s2
 *
 * Return: Pointer to newly allocated string, or NULL on failure
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = _strlen(s1);
	unsigned int len2 = _strlen(s2);
	unsigned int i;
	char *fusion;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	if (n >= len2)
	{
		n = len2;
	}

	fusion = malloc(len1 + n + 1);

	if (fusion == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		fusion[i] = s1[i];
	}

	for (i = 0; i < n && s2[i] != '\0'; i++)
	{
		fusion[len1 + i] = s2[i];
	}

	fusion[len1 + i] = '\0';

	return (fusion);
}
