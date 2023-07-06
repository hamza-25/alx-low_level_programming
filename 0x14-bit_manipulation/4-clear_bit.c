#include "main.h"

/**
 * clear_bit - clear a bit from index
 * @n: ponter number to be converted to binary
 * @index: index for exist bit
 * Return: 1 or -1 if fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (8 * sizeof(n) <= index)
		return (-1);
	*n = (*n & ~(1UL << index));
	return (1);
}
