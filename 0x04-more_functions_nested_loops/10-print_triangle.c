#include "main.h"

/**
 * print_triangle - printing a line diagonal
 * @size: number of diagonal
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int hght, base;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hght = 1 ; hght <= size; hght++)
	{
		for (base = 1; base <= size; base++)
		{
			if ((hght + base) <= size)
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
}
