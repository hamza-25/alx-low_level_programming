#include "main.h"

/**
 * clear_bitt - set bits from index given
 * @n: number to be converted to binary
 * @index: index for exist bits
 * Return: 1 or -1 if fail
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (8 * sizeof(n) <= index)
	{
		return (-1);
	}
	*n = (*n & ~(1UL << index));
	return (1);
}
