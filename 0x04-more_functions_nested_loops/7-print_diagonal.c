#include "main.h"

/**
 * print_diagonal - printing a line diagonal
 * @n: number of diagonal
*/
void print_diagonal(int n)
{
	int i, j;

	for (i = 0 ; i <= n; i++)
	{
		for (j = 0 ; j <= i; j++)
		{
			if (j == i)
			{
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
