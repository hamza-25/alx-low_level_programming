#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - create dimenional array
 * description: dimrn array freed
 * @grid: to free
 * @height: height of array
 * Return: NULL value or pointer to the array initialized
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
