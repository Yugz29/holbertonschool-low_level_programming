#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: 2D array representing the board
 *
 *
 **/

void print_chessboard(char (*a)[8])
{
	int lignes = 0;

	while (lignes < 8)
	{
		int colonnes = 0;

		while (colonnes < 8)
		{
			_putchar(a[lignes][colonnes]);
			colonnes++;
		}

		_putchar('\n');
		lignes++;
	}
}
