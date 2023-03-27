#include "main.h"

/**
 * reset_to_98:  reset number
 * description: number 98 greather or less reset to it
 * @n: pointer number to reset
*/

void reset_to_98(int *n)
{
	int diff;

	if (*n >= 98)
	{
		diff = *n - 98;
		*n = *n - diff;
	}
	else
	{
		diff = 98 - *n;
		*n = *n + diff;
	}
	_putchar('\n');
	return (*n);
}
