#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print numbers with seperation
 * @n: number of strings
 * @separator: separate between strings
 * Return: void
 *
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *r;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		r = va_arg(ptr, char *);
		if (r)
			printf("%s", r);
		else
			printf("(nil)");
		if (separator)
			if (i + 1 != n)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
