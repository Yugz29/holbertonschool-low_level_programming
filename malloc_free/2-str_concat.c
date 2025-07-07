#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings into a newly allocated memory
 * @s1: First input string
 * @s2: Second input string
 *
 * Return: Pointer to the new concatenated string, or NULL on failure
 **/

char *str_concat(char *s1, char *s2)
{
	char *fusion;
	int len1 = 0;
	int len2 = 0;
	int i1;
	int i2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	fusion = malloc(len1 + len2 + 1);
	if (fusion == NULL)
	{
		return (NULL);
	}
	for (i1 = 0; i1 <= len1 - 1; i1++)
	{
		fusion[i1] = s1[i1];
	}
	for (i2 = 0; i2 <= len2 - 1; i2++)
	{
		fusion[len1 + i2] = s2[i2];
	}

	fusion[i1 + i2] = '\0';
	return (fusion);
}
