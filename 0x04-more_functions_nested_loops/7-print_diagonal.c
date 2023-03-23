#include "main.h"

/**
 * print_diagonal - printing a line diagonal
 * @n: number of diagonal
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (i = 1 ; i <= n; i++)
	{
		for (j = 1 ; j <= i; j++)
		{
			if (j == i)
			{
				_putchar(' ');
				_putchar(92);
			}
			else
			{
				putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
