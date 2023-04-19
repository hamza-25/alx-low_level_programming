#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - func array that's accept args
 * @array: array
 * @cmp: func to compair
 * @size: lenght
 * Return: return (1) index integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int i = 0;

		while(i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
