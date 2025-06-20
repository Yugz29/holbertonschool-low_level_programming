#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet ten times
 *
 **/

void print_alphabet_x10(void)
{
	int ligne = 0;

	while (ligne < 10)
	{
		char lettre = 'a';

		while (lettre <= 'z')
		{
			_putchar(lettre);
			lettre++;
		}

		_putchar('\n');

		ligne++;
	}
}
