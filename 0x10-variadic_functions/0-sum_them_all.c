#include "variadic_functions.h"
/**
 * sum_them_all - make addition numbers
 * @n: number of numbers
 * Return: if n 0 return 0 else return sum
 *
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ptr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	return (sum);
}
