#include "main.h"

/**
 * times_table - displays the multiplication table from 0 to 9
 *
 **/

void times_table(void)
{
	int lines = 0;

	while (lines <= 9)
	{
		int columns = 0;

		while (columns <= 9)
		{
			int result = lines * columns;

			if (columns != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (result < 10)
				{
					_putchar(' ');
				}
			}
			if (result >= 10)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar((result % 10) + '0');
			}

			columns++;
		}

		_putchar('\n');
		lines++;
	}
}
