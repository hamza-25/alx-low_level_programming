#include "main.h"
#include <ctype.h>

/**
 * print_numbers - order numbers
 * description: print numbers ascd
*/
void print_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
