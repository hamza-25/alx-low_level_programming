#include "main.h"
#include <ctype.h>

/**
 * print_line - printing a line
 * description: print line with n time
 * @n: number of time to print underscore
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
