#include "search_algos.h"

/**
* jump_search - function that jump_search
* @array: stored data in array
* @size: size of the array
* @value: the value to be searched
* Return: return the index of value found else -1
*/

int jump_search(int *array, size_t size, int value)
{
	size_t l, h, i, step, idx, j;

	if (array == NULL || size == 0)
		return (-1);
	idx = size - 1;
	step = sqrt(size);
	l = 0;
	h = l + step;
	for (i = h; i <= idx; i += step)
	{
		if (array[i] == value)
		{
			return (i);
		}
		else if (array[i] > value)
		{
			for (j = l; j < i; j++)
			{
				if (array[j] == value)
					return (j);
			}
		}
		else
		{
			l = i;
		}
	}
	for (j = l; j <= idx; j++)
	{
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
