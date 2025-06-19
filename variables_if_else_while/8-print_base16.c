#include <stdio.h>

/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Return: always return 0
 *
 **/

int main(void)
{
	int number = '0';
	int hexa = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (hexa <= 'f')
	{
		putchar(hexa);
		hexa++;
	}

	putchar('\n');

	return (0);
}
