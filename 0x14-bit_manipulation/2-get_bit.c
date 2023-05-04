#include "main.h"

/**
 * get_bit - convert decimal to binary
 * @n: num tobe converted
 * @index: to bet returned
 * Return: index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0, j;
	int binary[32];

	if (!n)
		return (-1);
	for (; n >= 0;)
	{
		binary[i++] = n % 2;
		if (n == 0)
			break;
		n /= 2;
	}
	for (j = i - 1; j >= 0; j--)
		if (j == index)
			return binary[j];

}
