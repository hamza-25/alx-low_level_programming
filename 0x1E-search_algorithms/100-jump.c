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
    size_t l, h, i, step, idx;

    idx = size - 1;
    step = sqrt(size);
    l = 0;
    h = l + step;
    for (i = h; i <= idx; i *= step)
    {
        if (array[h] >= value)
        {

        }
        else
        {
            
        }
    }
    
	return (-1);
}
