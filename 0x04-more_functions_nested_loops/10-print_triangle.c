#include "main.h"

/**
 * print_triangle - printing a line diagonal
 * @size: number of diagonal
*/

void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
	for (i = 1 ; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if ((i + j) >= size)
			{
				_putchar(' ');
			}
			else
			{
				putchar('#');
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
