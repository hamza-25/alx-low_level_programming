#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - create array of chars initialized it with specific char
 * description: reserve with malloc and initialized it with specific char
 * @c: char
 * @size: size of array
 * Return: NULL value or pointer to the array initialized
*/

char *create_array(unsigned int size, char c)
{
	char *mem = malloc(size);

	if (size == 0)
		return (0);
	if (mem == 0)
		return (0);
	while (size--)
		mem[size] = c;
	return (mem);
}
