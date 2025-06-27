#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: my string
**/

void rev_string(char *s)
{
	char temp;
	int start = 0;
	int end;
	int len = 0;

	while (s[len] != ('\0'))
	{
		len++;
	}

	end = len - 1;

	while (start != end)
	{
		temp = s[end];
		s[end] = s[start];
		s[start] = temp;
		start++;
		end--;
	}
}
