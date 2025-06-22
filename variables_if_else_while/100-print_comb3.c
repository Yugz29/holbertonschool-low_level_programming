#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: always return 0
 *
 **/

int main(void)
{
	int first = 0;
	int second;

	while (first < 9)
	{
		second = first + 1;

		while (second <= 9)
		{
			putchar(first + '0');
			putchar(second + '0');

			if (!(first == 8 && second == 9))
			{
				putchar(',');
				putchar(' ');
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
