#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase
 *
 * Return: always return 0
 *
 **/

void print_alphabet(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		_putchar(lettre);
		lettre++;
	}

	_putchar('\n');
}
