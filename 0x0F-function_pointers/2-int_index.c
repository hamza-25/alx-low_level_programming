#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - func array that's accept args
 * @array: array
 * @cmp: func to compair
 * @size: lenght
 * Return: return (1) if found
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		int *len = array + size - 1;
		int i = 0;

		while (array <= len)
		{
			if (cmp(*array) == 1)
				return (i);
			i++;
			array++;
		}
		return (-1);
	}
}
