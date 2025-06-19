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

	while (number <= '9')
	{
		putchar(number);
		number++;
	}

	putchar('\n');

	return (0);
}
