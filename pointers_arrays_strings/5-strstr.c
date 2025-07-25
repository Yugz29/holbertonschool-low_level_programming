#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring in a string
 * @haystack: The string to be scanned
 * @needle: The substring to find
 *
 * Return: pointer to start of substring, or NULL if not found
 **/

char *_strstr(char *haystack, char *needle)
{
	int len_hay = 0;

	while (haystack[len_hay] != '\0')
	{
		int len_need = 0;

		while (needle[len_need] != '\0')
		{
			if (haystack[len_hay + len_need] != needle[len_need])
			{
				break;
			}

			len_need++;
		}

		if (needle[len_need] == '\0')
		{
			return (haystack + len_hay);
		}

		len_hay++;
	}

	return (NULL);
}
