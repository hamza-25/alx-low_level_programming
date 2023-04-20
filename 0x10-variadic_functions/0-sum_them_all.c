#include "variadic_functions.h"
/**
 * sum_them_all - make addition numbers
 * @n: number of numbers
 * Return: if n 0 return 0 else return sum
 *
*/

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);
	int sum = 0;

	va_list ptr;

	va_start(ptr, n);

	for (int i = 0; i < n; i++)
		sum += va_arg(ptr, int);
	return (sum);
}
