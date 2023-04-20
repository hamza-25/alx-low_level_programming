#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers with seperation
 * @n: number of numbers
 * @separator: separate between numbers
 * Return: void
 *
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator)
			if (i + 1 != n)
				printf("%s", separator);
	}
	printf("\n");
}
