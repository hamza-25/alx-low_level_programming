#include "main.h"

/**
 * get_bit - print bits from index given
 * @n: number to be converted to binary
 * @index: index for exist bits
 * Return: int or -1 if fail
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int index_bit;

	if (8 * sizeof(n) <= index)
	{
		return(-1);
	}
	index_bit = (n >> index) & 1;
	return (index_bit);
}
