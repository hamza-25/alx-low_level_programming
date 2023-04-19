#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - func array that's accept args
 * @array: array
 * @action: func pointers
 * @size: lenght
 * return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
