#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: always return 0
 *
 **/

int main(void)
{
	char lettre = 'a';

	while (lettre <= 'z')
	{
		putchar(lettre);
		lettre++;
	}
	putchar('\n');

	return (0);
}
