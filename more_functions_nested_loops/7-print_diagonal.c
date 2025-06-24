#include "main.h"

/**
 * print_diagonal - displays a diagonal line with backslashes
 *
 * @n: the number of lines to display
 *
**/

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		int v = 0;

		while (v < n)
		{
			int h = 0;

			while (h < v)
			{
				_putchar(' ');

				h = h + 1;
			}
			_putchar('\\');
			_putchar('\n');

			v = v + 1;
		}
	}
}
