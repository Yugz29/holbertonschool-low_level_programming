#include "main.h"

/**
 * print_square - Displays a square of a given size with the character '#'
 *
 * @size: size of square
 *
 **/

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int v = 0;

		while (v < size)
		{
			int h = 0;

			while (h < size)
			{
				_putchar('#');
				h++;
			}
			_putchar('\n');
			v++;
		}
	}
}
