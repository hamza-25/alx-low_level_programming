#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - create dimenional array
 * description: dimrn array with width and height initailzed by 0
 * @width: width of array
 * @height: height of array
 * Return: NULL value or pointer to the array initialized
*/

int **alloc_grid(int width, int height)
{
	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	else
	{
		int *ptr;
		int i, j;

		ptr = malloc((width * height) * sizeof(int));
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				ptr[i][j] = 0;
			}
		}
	}
}
