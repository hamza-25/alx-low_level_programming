#include "main.h"
/**
 * print_number - prints an integer
 * @n: the integer to be print
*/
void print_number(int n)
{
	unsigned int num = n;
	if (n < 0)
	{
		_putcar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_number(num / 10);
	_putchar((num % 10) + 48);
}
