#include "main.h"

/**
 * print_binary - function that print binary number
 * @n: int to print to binary
 * Return: void
*/
void print_binary(unsigned long int n)
{
	int tap = 0;
	int size = 8 * sizeof(n);

	while (size)
	{
		if (n & 1L << --size)
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
