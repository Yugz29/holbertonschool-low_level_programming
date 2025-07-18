#include "main.h"

/**
 * _strspn - Calculates the length of the initial segment of s
 * @s: The string to be scanned
 * @accept: The string containing the list of accepted bytes
 *
 * Return: The number of bytes in the initial segment of s
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (s[len] != '\0')
	{
		unsigned int longg = 0;
		int found = 0;

		while (accept[longg] != '\0')
		{
			if (s[len] == accept[longg])
			{
				found = 1;
				break;
			}
			longg++;
		}

		if (found == 0)
		{
			break;
		}
		len++;
	}
	return (len);
}
