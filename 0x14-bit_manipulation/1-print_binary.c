#include "main.h"

/**
 * print_binary - print binary without % and /
 * @n: number to be converted to binary
*/
void print_binary(unsigned long int n)
{
	int tap = 0;
	int size = 8 * sizeof(n);

	for (; size;)
	{
		if (1L << --size && n)
		{
			_putchar('1');
			tap++;
		}
		else if (tap)
		{
			_putchar('0');
		}
	}
	if (!tap)
	{
		_putchar('0');
	}
}
