#include "main.h"

/**
 * verify - check for the square root
 * @x:first int
 * @y:second int
 * Return: integer
 */
int verify(int x, int y)
{
	if (x * x == y)
		return (x);
	if (x * x > y)
		return (-1);
	return (verify(x + 1, y));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int to find sqrt
 * Return: return -1 or natural square
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (verify(1, n));
}
