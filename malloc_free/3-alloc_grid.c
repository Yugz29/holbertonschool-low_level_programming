#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Allocates a 2D array of integers and initializes elements to 0
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the 2D array, or NULL on failure
 **/

int **alloc_grid(int width, int height)
{
	int lines;
	int colums;
	int **grid;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (lines = 0; lines < height; lines++)
	{
		grid[lines] = malloc(width * sizeof(int));

		if (grid[lines] == NULL)
		{
			for (i = 0; i < lines; i++)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
		for (colums = 0; colums < width; colums++)
		{
			grid[lines][colums] = 0;
		}
	}
	return (grid);
}
