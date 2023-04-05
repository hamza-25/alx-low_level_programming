#include "main.h"

/**
 * verify - check prime num
 * @x:F int
 * @y:S int
 * Return:integer
 */
int verify(int x, int y)
{
	if (y < 2 || y % x == 0)
		return (0);
	else if (x > y / 2)
		return (1);
	else
		return (verify(x + 1, y));
}

/**
 * is_prime_number - get primre num
 * @n:integer
 * Return:integer
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (verify(2, n));
}
