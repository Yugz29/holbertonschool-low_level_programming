#include <stdio.h>

/**
 * main - print alphabet in lowercase, except 'q' and 'e'
 *
 * Return: Always return 0
 *
 **/

int main(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		if (lettre != 'e' && lettre != 'q')
		{
			putchar(lettre);
		}

		lettre++;

	}
	putchar('\n');

	return (0);

}
