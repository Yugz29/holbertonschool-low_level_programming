#include "main.h"

/**
 * more_numbers - prints ten times the numbers from 0 to 14
 *
 **/

void more_numbers(void)
{
	int line = 0;

	while (line < 10)
	{
		int number = 0;

		while (number <= 14)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}

			_putchar((number % 10) + '0');
			number++;
		}
		_putchar('\n');
		line++;
	}
}
