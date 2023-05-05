#include "main.h"

/**
 * print_binary - print binary without % and /
 * @n: number to be converted to binary
*/
void print_binary(unsigned long int n)
{
	int tap = 0;
	int size = 8 * sizeof(n);

	while (size)
	{
		if (tap)
		{
			_putchar('0');
		}
		else if (n & 1L << --size)
		{
			_putchar('1');
			tap++;
		}
	}
	if (!tap)
	{
		_putchar('0');
	}
}
