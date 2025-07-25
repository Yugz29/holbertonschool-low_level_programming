#include "main.h"

/**
 * print_triangle - prints triangle
 *
 * @size: size of triangle
**/
void print_triangle(int size)
{
	int h = 0;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int v = 0;

		for (v = 0; v < size; v++)
		{
			for (h = 0; h < size - v - 1; h++)
			{
				_putchar(' ');
			}
			for (; h < size; h++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
