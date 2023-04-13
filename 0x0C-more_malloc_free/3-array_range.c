#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - create array of chars initialized it with specific char
 * description: reserve with malloc and initialized it with specific char
 * @min: number int
 * @max: number int
 * Return: NULL value or pointer to the array initialized
*/

int *array_range(int min, int max)
{
	int *ptr, bytes = 0, i = 0;

	if (min > max)
		return (NULL);
	while (min != max)
	{
		bytes++;
		max--;
	}
	bytes++;
	ptr = malloc(sizeof(int) * bytes);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < bytes ; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
