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
	int **arr, i, j;
	
	arr = malloc(sizeof(*arr) * height);
	if (width <= 0 || height <= 0 || arr == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(**arr) * width);
			if (arr[i] == 0)
			{
				while (i--)
				{
					free(arr[i]);
				}
				free(arr);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			{
				arr[i][j] = 0;
			}
		}
	}
	return (arr);
}
