#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: The string to be scanned
 * @accept: The string containing the characters to match
 *
 * Return: Pointer to the first occurrence or NULL
 **/

char *_strpbrk(char *s, char *accept)
{
	int len_s = 0;

	while (s[len_s] != '\0')
	{
		int len_a = 0;

		while (accept[len_a] != '\0')
		{
			if (s[len_s] == accept[len_a])
			{
				return (&s[len_s]);
			}
			len_a++;
		}
		len_s++;
	}
	return (NULL);
}
