#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natrual numbers from n to 98
 * @n: starting integer
 *
 * Return: void
 *
 **/

void print_to_98(int n)
{
	if (n < 98)
	{
		do {
			printf("%d, ", n);
			n++;
		} while (n < 98);
	}
	else if (n > 98)
	{
		do {
			printf("%d, ", n);
			n--;
		} while (n > 98);
	}
	printf("98\n");
}
