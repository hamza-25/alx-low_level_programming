#include "main.h"

/**
 * factorial - function that count factorial
 * @n: number
 * Return: -1 if n lower than 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
if (n <= 1)
{
	return (1);
}
	return (n * factorial(n - 1));
	}
}
