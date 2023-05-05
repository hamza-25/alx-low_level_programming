#include "main.h"

/**
 * flip_bits - flip bits from index given
 * @n: number to be converted to binary
 * @m: index for exist bits
 * Return: count flip
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int counter = 0;
	int j;
	unsigned long int Xor = m ^ n;
	unsigned long int act;

	j = 64;
	while (j > 0)
	{
		act = Xor >> j;
		if (act & 1)
		{
			counter++;
		}
		j--;
	}
	return (counter);
}
