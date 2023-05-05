#include "main.h"

/**
 * set_bit - set bits from index given
 * @n: number to be converted to binary
 * @index: index for exist bits
 * Return: int or -1 if fail
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (8 * sizeof(n) <= index)
	{
		return (-1);
	}
	*n = ((1UL << index) | *n);
	retrn (1);
}
